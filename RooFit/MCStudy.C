#include "TFile.h"
#include "RooWorkspace.h"
#include "RooAbsPdf.h"
#include "RooSimultaneous.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooCategory.h"
#include "RooBinning.h"

#include "RooStats/ModelConfig.h"
#include "TGraphErrors.h"
#include "TGraphAsymmErrors.h"
#include "TCanvas.h"
#include "TLine.h"
#include "TROOT.h"

#include "RooStats/AsymptoticCalculator.h"
#include "RooStats/HybridCalculator.h"
#include "RooStats/FrequentistCalculator.h"
#include "RooStats/ToyMCSampler.h"
#include "RooStats/HypoTestPlot.h"

#include "RooStats/NumEventsTestStat.h"
#include "RooStats/ProfileLikelihoodTestStat.h"
#include "RooStats/SimpleLikelihoodRatioTestStat.h"
#include "RooStats/RatioOfProfiledLikelihoodsTestStat.h"
#include "RooStats/MaxLikelihoodEstimateTestStat.h"

#include "RooStats/HypoTestInverter.h"
#include "RooStats/HypoTestInverterResult.h"
#include "RooStats/HypoTestInverterPlot.h"

#include "RooMinuit.h"
#include "RooAddPdf.h"

#include <iostream>

using namespace std;
using namespace RooFit;
using namespace RooStats;

void MCStudy()
{
    
    string fileName = "h4l_Template_2012_lowmass_unconstrained_new_v00.root";
    
    const char * wsName      = "combined";    //"w";
    const char * modelSBName = "ModelConfig"; //"modelConfig";
    const char * dataName    = dataname.c_str();
    
    TFile* file = TFile::Open(fileName);

    // get the workspace out of file
    RooWorkspace* w = (RooWorkspace*) file->Get(wsName);
    if (!wsName) {
        cout << "workspace not found" << endl;
        return -1.0;
    }
    
    // get the modelConfig out of the file
    ModelConfig* sbModel = (ModelConfig*) w->obj(modelSBName);
    
    // get the data out of file
    //RooAbsData* data = w->data(dataName);
    
    // get toy MC data
    TFile *fhist = new TFile("../ToyMC/toyMC_ggF125.root");
    TH1F *hsum = (TH1F*) fhist->Get("sumtoy1");
    
    RooRealVar m4l("m4l","m4l",120,130);
    RooDataHist* data = new RooDataHist("data","data",x,hsum);
    
    // get pdf
    RooAbsPdf* model = sbModel->GetPdf();
    
    RooPlot* xframe = m4l.frame();
    data->plotOn(xframe);
    model->fitTo(*data);
    model->plotOn(xframe,LineColor(kRed));
    
    TCanvas *c = new TCanvas("c","c");
    xframe->Draw();
    
}
    
