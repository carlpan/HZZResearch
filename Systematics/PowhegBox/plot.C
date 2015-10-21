{
    gROOT->SetMacroPath("/afs/atlas.umich.edu/home/lailinxu/data18a/CommonTool/atlas_plot_style/atlasstyle-00-03-01");
    gROOT->LoadMacro("AtlasStyle.C");
    gROOT->ProcessLine("SetAtlasStyle()");
    
    TFile f1("result.root");
    
    TCanvas *c1 = new TCanvas("c1", "MZ1");
    TCanvas *c2 = new TCanvas("c2", "MZ2");
    TCanvas *c3 = new TCanvas("c3", "MZZ");
    TCanvas *c4 = new TCanvas("c4", "MZ1vsMZ2");

    gStyle->SetPadLeftMargin(0.15);
    gStyle->SetPadRightMargin(0.10);
    gStyle->SetPadTopMargin(0.05);
    gStyle->SetPadBottomMargin(0.15);
    
    TH1F *MZ1 = f1.Get("hMZ1");
    TH1F *MZ2 = f1.Get("hMZ2");
    TH1F *MZZ = f1.Get("hMZZ");
    TH2F *scatterHist = f1.Get("scatter");
    
    
    TH1F *hMZ1 = MZ1->Rebin(5, "hMZ1");
    TH1F *hMZ2 = MZ2->Rebin(5, "hMZ2");
    TH1F *hMZZ = MZZ->Rebin(5, "hMZZ");
    
    hMZ1->GetXaxis()->SetRangeUser(0,130);
    hMZ2->GetXaxis()->SetRangeUser(0,130);
    hMZZ->GetXaxis()->SetRangeUser(70,250);
    scatterHist->GetXaxis()->SetRangeUser(0,130);
    scatterHist->GetYaxis()->SetRangeUser(0,130);
                                
    hMZ1->SetLineColor(kBlue);
    hMZ2->SetLineColor(kBlue);
    hMZZ->SetLineColor(kBlue);
    scatterHist->SetLineColor(kBlue);
    
    c1->cd();
    hMZ1->GetXaxis()->SetTitle("MZ1 [GeV]");
    hMZ1->SetLineWidth(2);
    hMZ1->Draw();
    c1->Print("CT10_MZ1.png");
    
    c2->cd();
    hMZ2->GetXaxis()->SetTitle("MZ2 [GeV]");
    hMZ2->SetLineWidth(2);
    hMZ2->Draw();
    c2->Print("CT10_MZ2.png");
    
    c3->cd();
    hMZZ->GetXaxis()->SetTitle("MZZ [GeV]");
    hMZZ->SetLineWidth(2);
    hMZZ->Draw();
    c3->Print("CT10_MZZ.png");
    
    c4->cd();
    scatterHist->GetXaxis()->SetTitle("MZ1 vs MZ2 [GeV]");
    scatterHist->Draw();
    c4->Print("CT10_MZ1vsMZ2.png");
    
}
    
    
                
