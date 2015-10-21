#include <iostream>

using namespace std;

void plot_template() 
{ 

	// ATLAS Style
	gROOT->SetMacroPath("/atlas/data18a/yupan/CommonTool/atlas_plot_style/atlasstyle-00-03-01");
	gROOT->LoadMacro("AtlasStyle.C");
	gROOT->ProcessLine("SetAtlasStyle()");
    
    
    //###################
    //###Define Canvas###
    //###################
    cout << "INFO => Defining Canvas" << endl;
    
    float ratio;
    float canvas_w, canvas_h;

    if (ratio < 0) canvas_w=800, canvas_h=600;    
    else if (ratio > 0) canvas_w=800, canvas_h=int(600*(1+ratio));

    gStyle.SetPadLeftMargin(0.15)
    gStyle.SetPadRightMargin(0.10)
    gStyle.SetPadTopMargin(0.05)
    gStyle.SetPadBottomMargin(0.15)
    TCanvas *MyC = new TCanvas("MyC","MyC",canvas_w,canvas_h);
    MyC->SetTicks(1,1);
    
    if (ratio > 0) {
        //float fraction=ratio+0.2;
        TPad *Pad1 = new TPad("p1","p1",0,ratio*1.0/(ratio+1),1,1,0,0); //xlow,ylow;xup,yup;
        Pad1->SetMargin(0.15,0.10,0.03,0.05);
        TPad *Pad2 = new TPad("p2","p2",0,0,1,ratio*1.0/(ratio+1),0,0); // bottom ratio pad
        Pad2->SetMargin(0.15,0.10,0.15/ratio,0);
        Pad1->Draw();
        Pad2->Draw();
        Pad2->SetGrid(); // set grid for ratio plot
    }
    
    gStyle->SetOptStat(0);

    //#########################################
    //### Load files, Inputs & Get Histograms###
    //#########################################
    cout << "INFO => Loading histograms" << endl;
    
    // input root files
    TFile *f1 = new TFile("CT10_1.root");
    TFile *f2 = new TFile("CT10_0.5.root");
    // output root file
    TFile *fout = new TFile("compare_result.root", "RECREATE");
    
    // histogram names
    char hist_name[50];
    // x, y axis title
    //char xtitile[50], ytitle[50];
    // plot name
   // char plot_name[100];
    
    
    //################################
    //######### MZ1 ##################
    //################################
    
    ratio = 0.2;
    
    TH1F *hMZ1_1 = (TH1F*) f1.Get("hMZ1");
    TH1F *hMZ1_2 = (TH1F*) f2.Get("hMZ1");
    TH1F *histo_ratio = (TH1F*) hMZ1_1->Clone(); //histo_ratio --> hRatio
    TH1F *histo_ref = (TH1F*) hMZ1_2->Clone(); //histo_ref
    
    int xmin=0, xmax=200;
    float hist_xmin=histo_ratio->GetXaxis()->GetXmin();
    float histo_xmax=histo_ratio->GetXaxis()->GetXmax();
    int histo_nbin=histo_ratio->GetNbinsX();
    float binwidth=(hist_xmin-histo_xmax)/histo_nbin;
    int hminb=int((xmin-hist_xmin)/binwidth)+1;
    int hmaxb=int(xmax-histo_xmin)/binwidth);
    
    THStack *hs = new THStack("hs","");
    hs->Add(histo_ratio);
    hs->Add(histo_ref);
        
    int ntot = histo_ref->Integral();
    if(ntot != 0) histo_ref->Scale(1/float(ntot));
    histo_ref->SetLineColor(4);
    histo_ref->SetMarkerColor(4);
    histo_ref->Rebin();
    
    // Make a ratio plot
    if (ratio > 0) {
        TH1F *hRatio = (TH1F*) histo_ratio->Clone();
        int Ntot = hRatio->Integral();
        if(Ntot != 0) hRatio->Scale(1/float(Ntot));
        hRatio->Divide(histo_ref);
        hRatio->SetLineColor(2);
        hRatio->SetMarkerColor(2);
        hRatio->Rebin();
    }
    
    // Plotting
    if (ratio > 0) Pad1.cd();
    else MyC.cd();
    int tot1=histo_ratio->Integral;
    int tot2=histo_ref->Integral;
    int total=tot1+tot2;
    if (total != 0) {
        histo_ratio->Scale(1/float(total));
        histo_ref->Scale(1/float(total));
    }
    
    histo_ratio->GetXaxis()->SetRange(hminb,hmaxb);
    histo_ref->GetXaxis()->SetRange(hminb,hmaxb);
    // get yaxis min/max
    float max1=histo_ratio->GetMaximum();
    float max2=histo_ref->GetMaximum();
    float max=(max1>max2)?max1:max2;
    float min1=histo_ratio->GetMinimum();
    float min2=histo_ref->GetMinimum();
    float min=(min1<min2)?min1:min2;
    histo_ratio->GetYaxis()->SetRangeUser(0,max*1.3);
	
}
