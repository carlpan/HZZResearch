#include <iostream>
#include <fstream>
#include "TFile.h"
#include "TChain.h"
#include "TTree.h"
#include "TH1F.h"
#include "TF1.h"
#include "TString.h"
#include <string>
#include "RooKeysPdf.h"
#include "RooNDKeysPdf.h"
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

void testBuild()
{
    
    double lorange = 100.;
    double hirange = 140.;
    
    // Import data
    TFile *file = new TFile("/atlas/data18a/yupan/HZZ4l2012/MiniTree/MiniTree_2013Moriond/v03/MC12a/JHUPythia8_AU2CTEQ6L1_ggH125_Spin0p_ZZ4lep.root");
    TTree *tree = (TTree*)file->Get("tree_incl_4mu");
    
    
    // Define variables
    float m4l = 0;
    float m34 = 0;
    float m4lerr = 0;
    float wgt = 0;
    
    // Get the number of entries in the tree
    int nevents = tree->GetEntries();
    
    tree->SetBranchStatus("*",0);
    tree->SetBranchStatus("m4l_unconstrained",1);
    tree->SetBranchStatus("mZ2_unconstrained",1);
    tree->SetBranchStatus("m4lerr_unconstrained",1);
    tree->SetBranchStatus("weight_corr",1);
    
    tree->SetBranchAddress("m4l_unconstrained",&m4l);
    tree->SetBranchAddress("mZ2_unconstrained",&m34);
    tree->SetBranchAddress("m4lerr_unconstrained",&m4lerr);
    tree->SetBranchAddress("weight_corr",&wgt);
    

    ///////////////
    // Build pdfs
    //////////////
    RooRealVar* mass = new RooRealVar("m4l","mass",lorange,hirange,"GeV");
    RooRealVar* mZ2 = new RooRealVar("m34","mZ2",10.,60.,"GeV");
    RooRealVar merr("m4lerr","mass err",0.1,5.0,"GeV");
    RooRealVar weight("weight","weight",0,10);
    
   // RooRealVar scale("scale","per-event error scale factor",1.0,0.2,4.0);
   // RooProduct sigmaErr("sigmaErr","sigmaErr",RooArgSet(scale,merr));
    
    
    float totalwgt(0);
    for (Int_t i=0; i<nevents; i++) {
        tree->GetEntry(i);
        totalwgt+=wgt;
    }
    std::cout<<"total weight = "<<totalwgt<<std::endl;
    
    
    //////////////////
    // Create ND dataset
    /////////////////
    RooDataSet signal("signal","signal",RooArgSet(*mass,*mZ2,merr,weight),"weight");
    
    std::cout<<"Reading in events from signal minitree"<<std::endl;
    for (int i=0; i<nevents; i++) {
        tree->GetEntry(i);
        mass->setVal(m4l);
        mZ2->setVal(m34);
        merr.setVal(m4lerr);
        weight.setVal(wgt/totalwgt);
        signal.add(RooArgSet(*mass,*mZ2,merr),wgt/totalwgt);
    }
    
    
    // Create 1D kernel estimation for signal mass
    RooKeysPdf kestmass("kestmass","kestmass",*mass,signal);
    
    // Create 1D kernel estimation for mass error
    RooKeysPdf kestmerr("kestmerr","kestmerr",merr,signal);
    
    // Create histograms of the data
    TH1* hdata1 = signal.createHistogram("hdata1",*mass);
    TH1* hdata2 = signal.createHistogram("hdata2",merr);
    
    
    // Create histogram of 1D kernel estimation pdf for mass
    TH1* hm = kestmass.createHistogram("hm",*mass);
    hm->SetLineColor(kBlue);

    // Create histogram of 1D kernel estimation pdf for mass err
    TH1* herr = kestmerr.createHistogram("herr",merr);
    herr->SetLineColor(kBlue);
    
    // Create mass pdf from the 1D kernel histogram
    RooDataHist* dmass = new RooDataHist("dmass","dmass",RooArgSet(*mass),hm);
    RooHistPdf* masspdf = new RooHistPdf("masspdf","masspdf",*mass,*dmass,2);
    
    // Create mass err pdf from the 1D kernel histogram
    RooDataHist* derr = new RooDataHist("derr","derr",RooArgSet(merr),herr);
    RooHistPdf* errpdf = new RooHistPdf("errpdf","errpdf",merr,*derr,2);
        

    // Make a workspace to store the fit model
    /*
    RooWorkspace* pdfWsp = new RooWorkspace("pdfWspCB");
    pdfWsp->import(*masspdf);
    pdfWsp->import(*errpdf);
    pdfWsp->Print();
    pdfWsp->writeToFile("pdfWspCB.root");
*/
    
    // Make some 1D plots
    /*
    TCanvas *c = new TCanvas("c","c",800,500);
    c->Divide(2);
    
    RooPlot* frame = merr.frame(Title("keys signal error"));
    signal.plotOn(frame);
    kestmerr.plotOn(frame);
    errpdf->plotOn(frame,LineColor(kBlue));
    
    RooPlot* frame2 = mass->frame(Title("keys signal"));
    signal.plotOn(frame2);
    kestmass.plotOn(frame2);
    masspdf->plotOn(frame2,LineColor(kBlue));
    
    c->cd(2); frame->Draw();
    c->cd(1); frame2->Draw();
    c->Print("dist.png");
    */
    
    
    // Create 2D Kernel estimation for m4lerr and m4l
    RooNDKeysPdf kest1("kest1","kest1",RooArgSet(*mass,merr),signal);
    
    // Create 2D kernel estimation for m34 and m4l
    RooNDKeysPdf kest2("kest2","kest2",RooArgSet(*mass,*mZ2),signal);
    
    // Create histogram of the data
    TH1* m4lmerr = signal.createHistogram("m4lmerr data",*mass,Binning(20),YVar(merr,Binning(20)));
    TH1* m4lm34 = signal.createHistogram("m4lm34 data",*mass,Binning(20),YVar(*mZ2,Binning(20)));
    
    // Create histograms of the 2D kernerl estimation pdfs
    TH1* hh_pdf = kest1.createHistogram("m4l vs merr",*mass,Binning(20),YVar(merr,Binning(20)));
    hh_pdf->SetLinColor(kBlue);
    TH1* hh_pdf2 = kest2.createHistogram("m4l vs m34",*mass,Binning(20),YVar(*mZ2,Binning(20)));
    
    TCanvas *c = new TCanvas("c","c",800,600);
    c->Divide(2);
    c->cd(1); gPad->SetLeftMargin(0.15); m4lmerr->GetZaxis()->SetTitleOffset(1.4);
    m4lmerr->Draw("lego");
    c->cd(2); gPad->SetLeftMargin(0.15); hh_pdf->GetZaxis()->SetTitleOffset(1.4);
    hh_pdf->Draw("surf");
    c->Print("test2D.png");
    
    TCanvas *c2 = new TCanvas("c2","c2",800,600);
    c2->Divide(2);
    c2->cd(1); gPad->SetLeftMargin(0.15); m4lm34->GetZaxis()->SetTitleOffset(1.4);
    m4lm34->Draw("lego");
    c2->cd(2); gPad->SetLeftMargin(0.15); hh_pdf2->GetZaxis()->SetTitleOffset(1.4);
    hh_pdf2->Draw("surf");
    c2->Print("m4lm34_4mu.png");
    
    

    
    
    
}

