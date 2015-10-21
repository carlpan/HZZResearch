#include <iostream>
#include <fstream>
#include "TFile.h"
#include "TChain.h"
#include "TTree.h"
#include "TH1F.h"
#include "TF1.h"
#include "TString.h"
#include "TVectorD.h"
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

void buildKD()
{
    double lorange = 100.;
    double hirange = 140.;
    
    // Import data
    TFile *file = new TFile("/atlas/data18a/yupan/HZZ4l2012/MassFit/MEKD_StandAlone/SelCode_0pZZ/Result/mc12_8TeV.167120.JHUPythia8_AU2CTEQ6L1_ggH125_Spin0p_ZZ4lep.merge.NTUP_HSG2.e1447_s1499_s1504_r3658_r3549_p1344.list/MEKD_mc12_8TeV.167120.JHUPythia8_AU2CTEQ6L1_ggH125_Spin0p_ZZ4lep.merge.NTUP_HSG2.e1447_s1499_s1504_r3658_r3549_p1344.list.root");
    TTree *tree = (TTree*)file->Get("physics_nominal");
    
    
    // Define variables
    float mzzc = 0;
    float m34c = 0;
    float mekd = 0;
    float wgt = 0;
    
    // Get the number of entries in the tree
    //int nevents = tree->GetEntries();
    int nevents = 10000;
    
    tree->SetBranchStatus("*",0);
    tree->SetBranchStatus("MZZ_con",1);
    tree->SetBranchStatus("MZ2_con",1);
    tree->SetBranchStatus("MEKD",1);
    tree->SetBranchStatus("weight",1);
    
    tree->SetBranchAddress("MZZ_con",&mzzc);
    tree->SetBranchAddress("MZ2_con",&m34c);
    tree->SetBranchAddress("MEKD",&mekd);
    tree->SetBranchAddress("weight",&wgt);

    
    ///////////////
    // Build pdfs
    //////////////
    RooRealVar* m4l = new RooRealVar("m4l","mass",lorange,hirange,"GeV");
    RooRealVar* m34 = new RooRealVar("m34","mZ2",10.,60.,"GeV");
    RooRealVar KD("MEKD","MEKD",0.,14.0,"GeV");
    RooRealVar weight("weight","weight",0,10);
    
    float totalwgt(0);
    for (Int_t i=0; i<nevents; i++) {
        tree->GetEntry(i);
        totalwgt+=wgt;
    }
    std::cout<<"total weight = "<<totalwgt<<std::endl;
    
    
    //////////////////
    // Create ND dataset
    /////////////////
    RooDataSet signal("signal","signal",RooArgSet(*m4l,*m34,KD,weight),"weight");
    
    std::cout<<"Reading in events from signal minitree"<<std::endl;
    for (int i=0; i<nevents; i++) {
        tree->GetEntry(i);
        m4l->setVal(mzzc);
        m34->setVal(m34c);
        KD.setVal(mekd);
        weight.setVal(wgt/totalwgt);
        signal.add(RooArgSet(*m4l,*m34,KD),wgt/totalwgt);
    }
    
    /*
    std::cout<<"Building mass kernel estimation"<<endl;
    // Create 1D kernel estimation for signal mass
    RooKeysPdf kestmass("kestmass","kestmass",*m4l,signal);
    
    std::cout<<"Buidling mZ2 kernel estimation"<<endl;
    // Create 1D kernel estimation for MZ2
    RooKeysPdf kestmZ2("kestmZ2","kestmZ2",*m34,signal);
    
    std::cout<<"Building KD kernel estimation"<<endl;
    // Create 1D kernel estimation for MEKD
    RooKeysPdf kestKD("kestKD","kestKD",KD,signal);
    
    
    std::cout<<"Creating histogram of the 1D data"<<endl;
    // Create histogram of the 1D data
    TH1* hdata1 = signal.createHistogram("hdata1",*m4l);
    TH1* hdata2 = signal.createHistogram("hdata2",*m34);
    TH1* hdata3 = signal.createHistogram("hdata3",KD);

    
    // Create histogram of 1D kernel estimation for mass and MEKD
    TH1* hm = kestmass.createHistogram("hm",*m4l);
    hm->SetLineColor(kBlue);
    TH1* hmZ2 = kestmZ2.createHistogram("hmZ2",*m34);
    hmZ2->SetLineColor(kBlue);
    TH1* hKD = kestKD.createHistogram("hKD",KD);
    hKD->SetLineColor(kBlue);
    
    // Create mass pdf from the 1D kernel histogram
    RooDataHist* dmass = new RooDataHist("dmass","dmass",RooArgSet(*m4l),hm);
    RooHistPdf* masspdf = new RooHistPdf("masspdf","masspdf",*m4l,*dmass,2);
    
    // Create MZ2 pdf from the 1D kernel histogram
    RooDataHist* dMZ2 = new RooDataHist("dMZ2","dMZ2",RooArgSet(*m34),hmZ2);
    RooHistPdf* MZ2pdf = new RooHistPdf("MZ2pdf","MZ2pdf",*m34,*dMZ2,2);
    
    // Create MEKD pdf from the 1D kernel histogram
    RooDataHist* dMEKD = new RooDataHist("dMEKD","dMEKD",RooArgSet(KD),hKD);
    RooHistPdf *KDpdf = new RooHistPdf("KDpdf","KDpdf",KD,*dMEKD,2);
    */
    /*
    // Make a workspace to store the fit model
    RooWorkspace* pdfw = new RooWorkspace("pdfM4lKD");
    pdfw->import(*masspdf);
    pdfw->import(*MZ2pdf);
    pdfw->import(*KDpdf);
    pdfw->Print();
    pdfw->writeToFile("pdfM4lKD.root");
    */
    
    /*
    // Make 1D plots
    TCanvas *c = new TCanvas("c","c",800,500);
    c->Divide(3);
    
    
    RooPlot* frame = m4l->frame(Title("mass shape"));
    signal.plotOn(frame);
    kestmass.plotOn(frame);
    masspdf->plotOn(frame,LineColor(kBlue));
    
    c->cd(1); gPad->SetLeftMargin(0.15); frame->GetYaxis()->SetTitleOffset(1.4); frame->Draw();
    c->cd(2); gPad->SetLeftMargin(0.15); frame->GetYaxis()->SetTitleOffset(1.4); hdata1->Draw();
    c->cd(3); gPad->SetLeftMargin(0.15); frame->GetYaxis()->SetTitleOffset(1.4); hm->Draw();
    c->Print("m4lPDFDist_0pZZ.png");
    
    
    
    RooPlot* frame = m4l->frame(Title("MZZ shape"));
    signal.plotOn(frame);
    kestmass.plotOn(frame);
    masspdf->plotOn(frame,LineColor(kBlue));
    
    c->cd(1); gPad->SetLeftMargin(0.15); frame->GetYaxis()->SetTitleOffset(1.4); frame->Draw();
    c->cd(2); gPad->SetLeftMargin(0.15); frame->GetYaxis()->SetTitleOffset(1.4); hdata1->Draw();
    c->cd(3); gPad->SetLeftMargin(0.15); frame->GetYaxis()->SetTitleOffset(1.4); hm->Draw();
    c->Print("m4lPDFDist_0pZZ.png");
    */
    
    // Set the smoothing parameters for the different observables
    double smoothingParameter_x2s        = 0.1;
    double smoothingParameter_m4l_signal = 0.1;
    double smoothingParameter_m4l_ZZ     = 0.35;
    
    double smoothingParameter_m4l;
    smoothingParameter_m4l = smoothingParameter_m4l_signal;
    
    /*
    TVectorD rho;
    rho.ResizeTo(2);
    rho(0) = smoothingParameter_m4l;
    rho(1) = smoothingParameter_x2s;
    */
    string prodName = "gg_H125";
    string channelName = "combined";
    string year = "2012";
    string histType1 = "_m4l-MEKD nominal";
   // string histType2 = "m4l-m34";
    string outputName1 = "ATLAS_Signal_" + prodName + "_" + channelName + "Cat" + year + histType1;
  //  string outputName2 = "ATLAS_Signal_" + prodName + "_" + channelName + "Cat" + year + histType2;
    
    
    std::cout<<"Building 2D kernel estimation"<<endl;
    // Create 2D kernel estimation for signal KD and m4l,
    RooNDKeysPdf kest1("kest1","kest1",RooArgSet(*m4l,KD),signal,"ma");
    
    // Create 2D kernel estimation for m34 and m4l
  //  RooNDKeysPdf kest2("kest2","kest2",RooArgSet(*m4l,*m34),signal,"ma");
    
    /*
    std::cout<<"Creating histogram of the 2D data"<<endl;
    // Create histogram of the 2D data
    TH1* m4lKD = signal.createHistogram("m4lKD data",*m4l,Binning(20),YVar(KD,Binning(20)));
    TH1* m4lm34 = signal.createHistogram("m4lm34 data",*m4l,Binning(20),YVar(*m34,Binning(20)));
    */
    
    std::cout<<"Creating histogram of the 2D kernel estimation"<<endl;
    // Create histograms of the 2D kernerl estimation pdfs (smoothing)
    TH2F* hh_pdf = (TH2F*)kest1.createHistogram("m4l vs KD",*m4l,Binning(m4l->numBins()),YVar(KD,Binning(KD.numBins())));
    hh_pdf->SetLineColor(kBlue);
  //  TH2F* hh_pdf2 = (TH2F*)kest2.createHistogram("m4l vs m34",*m4l,Binning(m4l->numBins()),YVar(*m34,Binning(KD.numBins())));
    
    hh_pdf->Scale(1./hh_pdf->Integral());
    //hh_pdf->SetName(outputName1.c_str());
    
   // hh_pdf2->Scale(1./hh_pdf2->Integral());
   // hh_pdf2->SetName(outputName2.c_str());
    
    
    // Create 2D histogram based pdfs
    RooDataHist* dMEKD = new RooDataHist("dMEKD","dMEKD",RooArgSet(*m4l,KD),hh_pdf);
    RooHistPdf *KDpdf = new RooHistPdf("KDpdf","KDpdf",RooArgSet(*m4l,KD),*dMEKD,2);
    
    KDpdf->SetName(outputName1.c_str());

  //  RooDataHist* dMZ2 = new RooDataHist("dMZ2","dMZ2",RooArgSet(*m34),hh_pdf2);
  //  RooHistPdf* MZ2pdf = new RooHistPdf("MZ2pdf","MZ2pdf",*m34,*dMZ2,2);
    
    
    // Make a workspace to store the fit model
    RooWorkspace* pdfw = new RooWorkspace("pdfM4lKD");
    pdfw->import(*KDpdf);
   // pdfw->import(*hh_pdf2);
    pdfw->Print();
    pdfw->writeToFile("templatePdfs_2D_v01.root");

    
    std::cout<<"Plotting..."<<endl;
    TCanvas *c = new TCanvas("c","c",800,600);
    TH2F *sig_PDF_histo = (TH2F*)KDpdf->createHistogram("KD_Pdf",*m4l,YVar(KD));
    sig_PDF_histo->Draw("surf");
    c->Print("KDPDF_shaple_surf.png");
    
    
    TCanvas *c2 = new TCanvas("c2","c2",800,600);
    RooPlot* frame_m4l = m4l->frame(Title("mass shape"));
    signal.plotOn(frame_m4l);
    KDpdf->plotOn(frame_m4l);
    frame_m4l->Draw();
    c2->Print("KDPDF_m4l.png");
    
    
    TCanvas *c3 = new TCanvas("c3","c3",800,600);
    RooPlot* frame_KD = KD.frame(Title("KD shaple"));
    signal.plotOn(frame_KD);
    KDpdf->plotOn(frame_KD);
    frame_KD->Draw();
    c3->Print("KDPDF_KD.png");
    

    
/*
    //c->Divide(2);
   // c->cd(1); gPad->SetLeftMargin(0.15); m4lKD->GetZaxis()->SetTitleOffset(1.4);
   // m4lKD->Draw("lego");
    //c->cd(2);
    gPad->SetLeftMargin(0.15);
    hh_pdf->Draw("colz");
    c->Print("testm4lKD_contour.png");
 */
  /*
    TCanvas *c2 = new TCanvas("c2","c2",800,600);
   // c2->Divide(2);
    //c2->cd(1); gPad->SetLeftMargin(0.15); m4lm34->GetZaxis()->SetTitleOffset(1.4);
    //m4lm34->Draw("lego");
   // c2->cd(2);
    gPad->SetLeftMargin(0.15);
    hh_pdf2->Draw("colz");
    c2->Print("testm4lm34_contour.png");
*/
}









