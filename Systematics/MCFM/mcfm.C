#define mcfm_cxx
#include "mcfm.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>

class Lepton{

  public:
    TLorentzVector Lep;
    int charge;
    int flav;
};

void mcfm::Loop()
{
   if (fChain == 0) return;

   //cout <<"in Loop()"<<endl;

   Long64_t nentries = fChain->GetEntries();

   cout <<"nentry No:"<<nentries<<endl;

   float N0 = 0.;
   float Nx0 = 0.;
   float N1 = 0.;
   float N2 = 0.;
   float N3 = 0.;
   float N4 = 0.;
   float N5 = 0.;

   Long64_t nbytes = 0, nb = 0;

   float m_mass=105.658367; //GeV
   float e_mass = 0.510998910; //GeV

   TH1F *hZ1 = new TH1F("m34", "m34", 100, 0, 120);
   TH1F *hZ2 = new TH1F("m56", "m56", 100, 0, 120);
   TH1F *hZZ = new TH1F("m3456", "m3456", 100, 0, 500);
   TH1F *hpt1 = new TH1F("pt1", "Lep1 Pt", 100, 0, 200);
   TH1F *hpt2 = new TH1F("pt2", "Lep2 Pt", 100, 0, 200);
   TH1F *hpt3 = new TH1F("pt3", "Lep3 Pt", 100, 0, 200);
   TH1F *hpt4 = new TH1F("pt4", "Lep4 Pt", 100, 0, 200);
   TH1F *heta1 = new TH1F("eta1", "Lep1 eta", 100, 0, 10);
   TH1F *heta2 = new TH1F("eta2", "Lep2 eta", 100, 0, 10);
   TH1F *heta3 = new TH1F("eta3", "Lep3 eta", 100, 0, 10);
   TH1F *heta4 = new TH1F("eta4", "Lep4 eta", 100, 0, 10);

   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;

      //cout <<"nentry: "<<jentry<<endl;

      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      float pt1=sqrt(px3*px3+py3*py3);
      float pt2=sqrt(px4*px4+py4*py4);
      float pt3=sqrt(px5*px5+py5*py5);
      float pt4=sqrt(px6*px6+py6*py6);
 
      //cout <<"pt1:"<< pt1 <<" pt2:"<< pt2 <<endl;
      TLorentzVector Lep1,Lep2,Lep3,Lep4,Z1,Z2,ZZ,pz1,pz2;
      Lep1.SetPxPyPzE(px3,py3,pz3,E_3);
      Lep2.SetPxPyPzE(px4,py4,pz4,E_4);
      Lep3.SetPxPyPzE(px5,py5,pz5,E_5);
      Lep4.SetPxPyPzE(px6,py6,pz6,E_6);
      Z1=Lep1+Lep2;
      Z2=Lep3+Lep4;
      pz1=Lep1+Lep4;
      pz2=Lep2+Lep3;
      ZZ=Lep1+Lep2+Lep3+Lep4;
      float pz1mass = pz1.M();
      float pz2mass = pz2.M();
      N0 = N0+wt_ALL;
      //if(pz1mass<=5 || pz2mass <=5) continue;
      float z1mass=Z1.M();
      float z2mass=Z2.M();
      float zzmass=ZZ.M();
      if(Z2.M()>Z1.M()){
        z1mass=Z2.M();
        z2mass=Z1.M();
      }

      Lepton L1, L2, L3, L4, Leptmp;
      L1.Lep=Lep1; L1.charge=-1; L1.flav=-2;
      L2.Lep=Lep2; L2.charge=1; L2.flav=2;     
      L3.Lep=Lep3; L3.charge=-1; L3.flav=-1;
      L4.Lep=Lep4; L4.charge=1; L4.flav=1;

      if(L1.Lep.Pt()< L2.Lep.Pt()){ Leptmp= L2; L2 = L1; L1=Leptmp;}
      if(L3.Lep.Pt()>L2.Lep.Pt()){
        Leptmp= L3; L3 = L2; L2=Leptmp;
        if(L2.Lep.Pt()>L1.Lep.Pt()){Leptmp= L2; L2 = L1; L1=Leptmp;}
      }
      if(L4.Lep.Pt()>L3.Lep.Pt()){
        Leptmp= L4; L4 = L3; L3=Leptmp;
        if(L3.Lep.Pt()>L2.Lep.Pt()){
          Leptmp= L2; L2 = L3; L3=Leptmp;
          if(L2.Lep.Pt()>L1.Lep.Pt()){Leptmp= L2; L2 = L1; L1=Leptmp;}
        }
      }  

      if(L2.Lep.Pt()<=5 ) continue;

      float dR34 = sqrt((Lep1.Eta()-Lep2.Eta())*(Lep1.Eta()-Lep2.Eta())+(Lep1.Phi()-Lep2.Phi())*(Lep1.Phi()-Lep2.Phi()));
      float dR56 = sqrt((Lep3.Eta()-Lep4.Eta())*(Lep3.Eta()-Lep4.Eta())+(Lep3.Phi()-Lep4.Phi())*(Lep3.Phi()-Lep4.Phi()));
      float dR36 = sqrt((Lep1.Eta()-Lep4.Eta())*(Lep1.Eta()-Lep4.Eta())+(Lep1.Phi()-Lep4.Phi())*(Lep1.Phi()-Lep4.Phi()));
      float dR45 = sqrt((Lep2.Eta()-Lep3.Eta())*(Lep2.Eta()-Lep3.Eta())+(Lep2.Phi()-Lep3.Phi())*(Lep2.Phi()-Lep3.Phi()));

      bool cut1 = false;

      if(abs(L4.flav)==1) cut1 = L1.Lep.Pt()>20 && L2.Lep.Pt()>15 && L3.Lep.Pt()>10 && L4.Lep.Pt()>7;
      else if(abs(L4.flav)==2) cut1 = L1.Lep.Pt()>20 && L2.Lep.Pt()>15 && L3.Lep.Pt()>10 && L4.Lep.Pt()>6;
      else cout <<"flavor error!!" <<L4.flav<< endl;

      bool cut2 = fabs(Lep1.Eta())<2.7 && fabs(Lep2.Eta())<2.7 && fabs(Lep3.Eta())<2.47 && fabs(Lep4.Eta())<2.47;
 
      bool cut3 = z1mass>50 && z1mass<106;

      //bool cut3 = m56>17.5 && m56<115;
      bool pass_z2=false;
        if(zzmass<120) pass_z2 = z2mass > 17.5;
        else if(zzmass<130) pass_z2 = z2mass > 17.5 + 5./10.*(zzmass-120.);
        else if(zzmass<150) pass_z2 = z2mass > 22.5 + 7.5/20.*(zzmass-130.);
        else if(zzmass<160) pass_z2 = z2mass > 30.;
        else if(zzmass<165) pass_z2 = z2mass > 30. + 5./5.*(zzmass-160.);
        else if(zzmass<180) pass_z2 = z2mass > 35. + 5./15.*(zzmass-165.);
        else if(zzmass<190) pass_z2 = z2mass > 40. + 10./10.*(zzmass-180.);
        else pass_z2 = z2mass > 50;
        pass_z2 = pass_z2 && z2mass<115;

      bool cut5 = dR34>0.1 && dR56>0.1 && dR36>0.2 && dR45>0.2;

      Nx0 = Nx0+wt_ALL;
 
      //cut1 = true; cut2 = true; cut3 = true; pass_z2 = true; cut5 = true;

      if(cut1){ //pt
        N1 = N1 + wt_ALL;
        if(cut2){  //eta
          N2 = N2 + wt_ALL; 
          if(cut3){ //MZ1
            N3 = N3 + wt_ALL;
            if(pass_z2){  //MZ2
             N4 = N4 + wt_ALL; 
             if(cut5){
              N5 = N5 + wt_ALL;
              //if(m34>30 && m56>5 && pt1>4 && pt2>4 && pt3>4 && pt4>4){
              hZ1->Fill(z1mass,wt_ALL);
              hZ2->Fill(z2mass,wt_ALL);
              hZZ->Fill(zzmass,wt_ALL);
              hpt1->Fill(L1.Lep.Pt(),wt_ALL);
              hpt2->Fill(L2.Lep.Pt(),wt_ALL);
              hpt3->Fill(L3.Lep.Pt(),wt_ALL);
              hpt4->Fill(L4.Lep.Pt(),wt_ALL);
              heta1->Fill(L1.Lep.Eta(),wt_ALL);
              heta2->Fill(L2.Lep.Eta(),wt_ALL);
              heta3->Fill(L3.Lep.Eta(),wt_ALL);
              heta4->Fill(L4.Lep.Eta(),wt_ALL);
             }
            }
          }
        }
      }
   }

   cout <<"N0:Nx0:N1:N2:N3:N4:N5 "<<N0<<":"<<Nx0<<":"<<N1<<":"<<N2<<":"<<N3<<":"<<N4<<":"<<N5<<endl;

   gROOT->SetMacroPath("/afs/atlas.umich.edu/home/lailinxu/data18a/CommonTool/atlas_plot_style/atlasstyle-00-03-01");
   gROOT->LoadMacro("AtlasStyle.C");
   gROOT->ProcessLine("SetAtlasStyle()");

   TCanvas *c1 = new TCanvas("c1","Z1 mass");
   TCanvas *c2 = new TCanvas("c2","Z2 mass");
   TCanvas *c3 = new TCanvas("c3","ZZ mass");
   TCanvas *c4 = new TCanvas("c4","pt");
   TCanvas *c5 = new TCanvas("c5","eta");

   gStyle->SetPadLeftMargin(0.15);
   gStyle->SetPadRightMargin(0.10);
   gStyle->SetPadTopMargin(0.05);
   gStyle->SetPadBottomMargin(0.15);

   hZ1->SetLineColor(4);
   hZ2->SetLineColor(4);
   hZZ->SetLineColor(4);
   hpt1->SetLineColor(4);
   hpt2->SetLineColor(4);
   hpt3->SetLineColor(4);
   hpt4->SetLineColor(4);

   c1->cd();
   hZ1->GetXaxis()->SetTitle("m_{Z1} [GeV]");
   hZ1->SetLineWidth(2);
   hZ1->Draw(); 
   c1->Print("n2020Z1.png");

   c2->cd();
   hZ2->GetXaxis()->SetTitle("m_{Z2} [GeV]");
   hZ2->SetLineWidth(2);
   hZ2->Draw();
   c2->Print("n2020Z2.png");

   c3->cd();
   hZZ->GetXaxis()->SetTitle("m_{ZZ} [GeV]");
   hZZ->SetLineWidth(2);
   hZZ->Draw();
   c3->Print("n2020ZZ.png");
  
   c4->cd();
   c4->Divide(2,2);
   c4->cd(1);
   //hpt1->GetYaxis()->SetRangeUser(0,200);
   hpt1->GetXaxis()->SetTitle("Lep1 pt[GeV]");//GeV?MeV
   hpt1->SetLineWidth(2);
   hpt1->Draw();
   c4->cd(2);
   //hpt2->GetYaxis()->SetRangeUser(0,200);
   hpt2->GetXaxis()->SetTitle("Lep2 pt[GeV]");//GeV?MeV
   hpt2->SetLineWidth(2);
   hpt2->Draw();

   c4->cd(3);
   //hpt1->GetYaxis()->SetRangeUser(0,200);
   hpt3->GetXaxis()->SetTitle("Lep3 pt[GeV]");//GeV?MeV
   hpt3->SetLineWidth(2);
   hpt3->Draw();
  
   c4->cd(4);
   //hpt1->GetYaxis()->SetRangeUser(0,200);
   hpt4->GetXaxis()->SetTitle("Lep4 pt[GeV]");//GeV?MeV
   //hpt4->SetStats(kFALSE);
   hpt4->SetLineWidth(2);
   hpt4->Draw();
   c4->Print("n2020pt.png");

   c5->cd();
   c5->Divide(2,2);
   c5->cd(1);
   //hpt1->GetYaxis()->SetRangeUser(0,200);
   heta1->GetXaxis()->SetTitle("Lep1 eta");//GeV?MeV
   heta1->SetLineWidth(2);
   heta1->Draw();

   c5->cd(2);
   //hpt2->GetYaxis()->SetRangeUser(0,200);
   heta2->GetXaxis()->SetTitle("Lep2 eta");//GeV?MeV
   heta2->SetLineWidth(2);
   heta2->Draw();

   c5->cd(3);
   //hpt1->GetYaxis()->SetRangeUser(0,200);
   heta3->GetXaxis()->SetTitle("Lep3 eta");//GeV?MeV
   heta3->SetLineWidth(2);
   heta3->Draw();

   c5->cd(4);
   //hpt1->GetYaxis()->SetRangeUser(0,200);
   heta4->GetXaxis()->SetTitle("Lep4 eta");//GeV?MeV
   //hpt4->SetStats(kFALSE);
   heta4->SetLineWidth(2);
   heta4->Draw();
   c5->Print("n2020eta.png");

}
