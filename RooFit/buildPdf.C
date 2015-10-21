#include <iostream>
#include <fstream>
#include "TFile.h"
#include "TChain.h"
#include "TTree.h"
#include "TH1F.h"
#include "TF1.h"
#include "TString.h"
#include <string>
#include "RooDataSet.h"
#include "RooDataHist.h"
#include "RooRealVar.h"
#include "RooWorkspace.h"
#include "RooHistPdf.h"
#include "RooCBShape.h"
#include "RooFFTConvPdf.h"
#include "RooProdPdf.h"
#include "RooFitResult.h"
#include "RooPlot.h"

using namespace RooFit;

void buildPdf()
{
    
    Double_t lorange = 100.;
    Double_t hirange = 140.;
    
    // Import data
    TFile *file = new TFile("/atlas/data18a/yupan/HZZ4l2012/MiniTree/data12.root");
    TTree *tree = (TTree*)file->Get("tree_incl_4mu");
    // should include all channels, for now just testing...
    
    // Define variables
    Float_t m4l = 0;
    Float_t m4lerr = 0;
   // Float_t wgt = 0;
    
    // Get number of entries and setbranchaddress
    Int_t nevents = tree->GetEntries();
    
    tree->SetBranchStatus("*",0);
    tree->SetBranchStatus("m4l_unconstrained",1);
    tree->SetBranchStatus("m4lerr_unconstrained",1);
    //tree->SetBranchStatus("weight",1);
    
    tree->SetBranchAddress("m4l_unconstrained",&m4l);
    tree->SetBranchAddress("m4lerr_unconstrained",&m4lerr);
    //tree->SetBranchAddress("weight",&wgt);
    
    ///////////////
    // Build pdfs
    //////////////
    RooRealVar* mass = new RooRealVar("m4l","mass",lorange,hirange,"GeV");
    RooRealVar merr("m4lerr","mass err",0.1,4.0,"GeV");
    //RooRealVar weight("weight","weight",0,10);
    
    RooRealVar scale("scale","per-event error scale factor",1.0,0.2,4.0);
    RooProduct sigmaErr("sigmaErr","sigmaErr",RooArgSet(scale,merr));
   
    /*
    float totalwgt(0);
    for (Int_t i=0; i<nevents; i++) {
        tree->GetEntry(i);
        totalwgt+=wgt;
    }
    std::cout<<"total weight = "<<totalwgt<<std::endl;
   */ 
    /// Make DataSet
    RooDataSet signal("signal","signal",RooArgSet(*mass,merr));
    
    std::cout<<"Reading in events from signal minitree"<<std::endl;
    for (Int_t i=0; i<nevents; i++) {
        tree->GetEntry(i);
        mass->setVal(m4l);
        merr.setVal(m4lerr);
        //weight.setVal(wgt/totalwgt);
        signal.add(RooArgSet(*mass,merr));
    }
    
    // Create 1D kernel estimation for signal mass
    std::cout<<"Building mass keys"<<std::endl;
    RooKeysPdf kestsig("kestsig","kestsig",*mass,signal);
    TH1F* hm = (TH1F*)kestsig.createHistogram("hm",*mass);
    kestsig.fillHistogram(hm,RooArgList(*mass));
    std::cout<<"Building mass pdf"<<std::endl;
    RooDataHist* dmass = new RooDataHist("dmass","binned dataset",*mass,hm);
    RooHistPdf* masspdf = new RooHistPdf("masspdf","pdf(dm)",*mass,*dmass,2);
    
    // Create 1D kernel estimation for mass err
    std::cout<<"Building error keys"<<std::endl;
    RooKeysPdf kestsigerr("kestsigerr","kestsigerr",merr,signal,RooKeysPdf::MirrorBoth,2);
    TH1F* herr = (TH1F*)kestsigerr.createHistogram("herr",merr);
    kestsigerr.fillHistogram(herr,RooArgList(merr));
    std::cout<<"Integral "<<herr->Integral()<<std::endl;
    std::cout<<"Building error pdf"<<std::endl;
    RooDataHist* derr = new RooDataHist("derr","binned dataset",merr,herr);
    RooHistPdf* errpdf = new RooHistPdf("errpdf","pdf(de)",merr,*derr,2);
    
    
    //Make the crystal ball resolution model with CB sigma = mass error
    RooRealVar 	meanCB 	("meanCB",  "mean CB", hmass, hmass-10., hmass+5.);
    RooRealVar 	alphaCB	("alphaCB", "alpha CB", 7, 0., 10.);
    RooRealVar 	nnCB   	("nnCB", "nn CB", 1.5, 0., 15.);
    RooCBShape* shapeCB = new RooCBShape("shapeCB", "crystal ball pdf", *mass, meanCB, sigmaErr, alphaCB, nnCB);

    // Make conditional pdf
    RooProdPdf* sigmodel = new RooProdPdf("sigmodel","sigmodel", *errpdf, Conditional(*shapeCB, *mass));

    
    
    // Make a workspace to store the fit model
    RooWorkspace* pdfWsp = new RooWorkspace("pdfWspCB");
    pdfWsp->import(*sigmodel,RecycleConflictNodes());
    pdfWsp->import(*masspdf);
    pdfWsp->import(*errpdf,RecycleConflictNodes());
    pdfWsp->import(signal);
    pdfWsp->Print();
    pdfWsp->writeToFile("pdfWspCB.root");
    
    
    // Make some plots
    TCanvas *c = new TCanvas("c","c",500,500);
    c->Divide(2);
    RooPlot* frame = merr.frame(Title("keys signal error"));
    signal.plotOn(frame);
    kestsigerr.plotOn(frame,LineColor(kRed));
    errpdf->plotOn(frame);
    
    RooPlot* frame2 = mass->frame(Title("keys signal"));
    signal.plotOn(frame2);
    kestsig.plotOn(frame2,LineColor(kRed));
    masspdf->plotOn(frame2);
    
    c->cd(2);
    frame->Draw();
    c->cd(1);
    grame2->Draw();
    
    c->Print("testPdf.png");
    
    
}




