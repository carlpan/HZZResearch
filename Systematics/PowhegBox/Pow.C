//<Cut-flow study on PowhegBox MC
//<Yutong Pan, July 2012, Ann Arbor>

#define Pow_cxx
#include "Pow.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>


void Pow::Loop()
{

    Long64_t nentries = fChain->GetEntriesFast();
    
    TFile *fout = new TFile("result.root", "recreate");
    
    cout <<"nentry No:"<<nentries<<endl;
    
    double CutFlow[6] = {0., 0., 0., 0., 0., 0.};
        
    // Define histograms
    TH1F *hpt1 = new TH1F("pt1","pt1", 2000, 0, 500);
    TH1F *hpt2 = new TH1F("pt2","pt2", 2000, 0, 500);
    TH1F *hpt3 = new TH1F("pt3","pt3", 2000, 0, 500);
    TH1F *hpt4 = new TH1F("pt4","pt4", 2000, 0, 500);
    
    TH1F *hEta1 = new TH1F("Eta1","Eta1", 500, -5, 5);
    TH1F *hEta2 = new TH1F("Eta2","Eta2", 500, -5, 5);
    TH1F *hEta3 = new TH1F("Eta3","Eta3", 500, -5, 5);
    TH1F *hEta4 = new TH1F("Eta4","Eta4", 500, -5, 5);
    
    TH1F *hPhi1 = new TH1F("Phi1","Phi1", 500, -5, 5);
    TH1F *hPhi2 = new TH1F("Phi2","Phi2", 500, -5, 5);
    TH1F *hPhi3 = new TH1F("Phi3","Phi3", 500, -5, 5);
    TH1F *hPhi4 = new TH1F("Phi4","Phi4", 500, -5, 5);

    // direct Z mass
    TH1F *hMZ1 = new TH1F("hMZ1", "hMZ1", 2000, 0, 500);
    TH1F *hPtZ1 = new TH1F("hPtZ1", "hPtZ1", 2000, 0 , 500);
    TH1F *hMZ2 = new TH1F("hMZ2", "hMZ2", 2000, 0, 500);
    TH1F *hPtZ2 = new TH1F("hPtZ2", "hPtZ2", 2000, 0 , 500);
    
    TH1F *hMZZ = new TH1F("hMZZ", "hMZZ", 2000, 0, 500);
    TH1F *hPtZZ = new TH1F("hPtZZ", "hPtZZ", 2000, 0 , 500);
    
    // MZ1 vs MZ2
    TH2F *scatterHist = new TH2F("scatter","MZ1 vs MZ2",2000,0,500,2000,0,500);
    /*
    // indirect Z mass
    TH1F *hmz1 = new TH1F("hmz1", "hmz1", 2000, 0, 500);
    TH1F *hptz1 = new TH1F("hptz1", "hptz1", 2000, 0 , 500);
    TH1F *hmz2 = new TH1F("hmz2", "hmz2", 2000, 0, 500);
    TH1F *hptz2 = new TH1F("hptz2", "hptz2", 2000, 0 , 500);
    
    TH1F *hmzz = new TH1F("hmzz", "hmzz", 2000, 0, 500);
    TH1F *hptzz = new TH1F("hptzz", "hptzz", 2000, 0 , 500);
     */
    

    Long64_t nbytes = 0, nb = 0;
    for (Long64_t jentry=0; jentry<nentries;jentry++) {
        Long64_t ientry = LoadTree(jentry);
        if (ientry < 0) break;
        nb = fChain->GetEntry(jentry);   nbytes += nb;
        // if (Cut(ientry) < 0) continue;
        
        if(jentry % 1000 == 0) cout <<"Events processed: " << jentry << endl;
        
        vector<TLorentzVector> el, mu, Z;
        TLorentzVector Lep, Z1, Z2, ZZ;
        vector<TLorentzVector> ZZlep;
        
        for(int i=0; i!=npar; ++i) {
         
            Lep.SetPxPyPzE((*p_px)[i], (*p_py)[i], (*p_pz)[i], (*p_E)[i]);
            
            if ( fabs((*p_id)[i]) == 11 ) el.push_back(Lep);
            if ( fabs((*p_id)[i]) == 13 ) mu.push_back(Lep);
            if ( fabs((*p_id)[i]) == 23 ) Z.push_back(Lep);
            if ( fabs((*p_id)[i]) == 11 || fabs((*p_id)[i])==13 ) 
                ZZlep.push_back(Lep);
        }
        if( el.size()!=2 || mu.size()!=2 ) continue;
        Z1=Z[0]; Z2=Z[1];
        ZZ=Z1+Z2;	

        /*
        // indirect (from el & mu)
        TLorentzVector z1mass, z2mass, zzmass;
        z1mass = el[0] + el[1]; z2mass = mu[0] + mu[1];
        zzmass = z1mass + z2mass;
        */
        
        
        
        /*
        // sort the Zs (indirect selection) in order of the invariant mass
        float mz1 = 0., ptz1 = 0., mz2 = 0., ptz2 = 0.;
        float mzz = 0., ptzz = 0.;
        TLorentzVector ztemp;
        if (z1mass.M() < z2mass.M()) {
            ztemp = z1mass;
            z1mass = z2mass;
            z2mass = ztemp;
        }
        mz1 = z1mass.M(); ptz1 = z1mass.Pt();
        mz2 = z2mass.M(); ptz2 = z2mass.Pt();
        mzz = zzmass.M(); ptzz = zzmass.Pt();
         */
        
        CutFlow[0] = CutFlow[0] + evt_weight;
        
        // label el & mu
        
        // sort the leps in leading pt
        double pt1 = 0, pt2 = 0, pt3 = 0, pt4 = 0;
        int l1 = -1, l2 = -1, l3 = -1, l4 = -1;
        for (int i=0; i<4; i++) {
            if (ZZlep[i].Pt() > pt1) {
                pt1 = ZZlep[i].Pt();
                l1 = i;
            }
        }
        for (int i=0; i<4; i++) {
            if (ZZlep[i].Pt() > pt2 && ZZlep[i].Pt() < pt1 && i != l1) {
                pt2 = ZZlep[i].Pt();
                l2 = i;
            }
        }
        for (int i=0; i<4; i++) {
            if (ZZlep[i].Pt() > pt3 && ZZlep[i].Pt() < pt2 && i != l2) {
                pt3 = ZZlep[i].Pt();
                l3 = i;
            }
        }
        for (int i=0; i<4; i++) {
            if (ZZlep[i].Pt() > pt4 && ZZlep[i].Pt() < pt3 && i != l3) {
                pt4 = ZZlep[i].Pt();
                l4 = i;
            }
        }
        
        
        // sort the Zs (direct selection) in order of the invariant mass
        float MZ1 = 0., PtZ1 = 0., MZ2 = 0., PtZ2 = 0.;
        float MZZ = 0., PtZZ =0.;
        TLorentzVector Ztemp;
        if (Z1.M() < Z2.M()) {
            Ztemp = Z1;
            Z1 = Z2;
            Z2 = Ztemp;
        }
        MZ1 = Z1.M(); PtZ1 = Z1.Pt();
        MZ2 = Z2.M(); PtZ2 = Z2.Pt();
        MZZ = ZZ.M(); PtZZ = ZZ.Pt();
        //float weight = 1.;
        
    
        // make selections
        //### leading Z mass cut ###### 
        bool Pass_MZ1 = MZ1>50 && MZ1<106;
        
        //### secondary Z mass cut ######
        bool Pass_MZ2 = false;
        if(MZZ<120) Pass_MZ2 = MZ2 > 17.5;
        else if(MZZ<130) Pass_MZ2 = MZ2 > 17.5 + 5./10.*(MZZ-120.);
        else if(MZZ<150) Pass_MZ2 = MZ2 > 22.5 + 7.5/20.*(MZZ-130.);
        else if(MZZ<160) Pass_MZ2 = MZ2 > 30.;
        else if(MZZ<165) Pass_MZ2 = MZ2 > 30. + 5./5.*(MZZ-160.);
        else if(MZZ<180) Pass_MZ2 = MZ2 > 35. + 5./15.*(MZZ-165.);
        else if(MZZ<190) Pass_MZ2 = MZ2 > 40. + 10./10.*(MZZ-180.);
        else Pass_MZ2 = MZ2 > 50;
        Pass_MZ2 = Pass_MZ2 && MZ2<115;
        
        
        //### Pt cut #####
        bool Pass_Pt = false;
        for (int i=0; i<4; i++) {
            if (ZZlep[i].Pt() == el[0].Pt() || ZZlep[i].Pt() == el[1].Pt()) {
                Pass_Pt = pt1 > 20 && pt2 > 15 && pt3 > 10 && pt4 > 7;
            }
            else if (ZZlep[i].Pt() == mu[0].Pt() || ZZlep[i].Pt() == mu[1].Pt()) {
                Pass_Pt = pt1 > 20 && pt2 > 15 && pt3 > 10 && pt4 > 6;
            }
        }
        

        //### eta cut #####
        bool Pass_Eta = fabs(el[0].Eta()) < 2.47 && fabs(el[1].Eta()) < 2.47 
                         && fabs(mu[0].Eta()) < 2.7 && fabs(mu[1].Eta()) < 2.7;

        
        //### dR cut ######
        bool Pass_dR = el[0].DeltaR(el[1]) > 0.1 && mu[0].DeltaR(mu[1]) > 0.1 
                && el[0].DeltaR(mu[0]) > 0.2 && el[0].DeltaR(mu[1]) > 0.2 
                && el[1].DeltaR(mu[0]) > 0.2 && el[1].DeltaR(mu[1]) > 0.2;
         
                    
        // fill histogram
        if (Pass_MZ1) {
            CutFlow[1] = CutFlow[1] + evt_weight;
            if (Pass_MZ2) {
                CutFlow[2] = CutFlow[2] + evt_weight;
                if (Pass_Pt) {
                    CutFlow[3] = CutFlow[3] + evt_weight;
                    if (Pass_Eta) {
                        CutFlow[4] = CutFlow[4] + evt_weight;
                        if (Pass_dR) {
                            CutFlow[5] = CutFlow[5] + evt_weight;
                            
                            hpt1->Fill(ZZlep[l1].Pt(), evt_weight);
                            hpt2->Fill(ZZlep[l2].Pt(), evt_weight);
                            hpt3->Fill(ZZlep[l3].Pt(), evt_weight);
                            hpt4->Fill(ZZlep[l4].Pt(), evt_weight);
                            
                            hEta1->Fill(ZZlep[l1].Eta(), evt_weight);
                            hEta2->Fill(ZZlep[l2].Eta(), evt_weight);
                            hEta3->Fill(ZZlep[l3].Eta(), evt_weight);
                            hEta4->Fill(ZZlep[l4].Eta(), evt_weight);
                            
                            hPhi1->Fill(ZZlep[l1].Phi(), evt_weight);
                            hPhi2->Fill(ZZlep[l2].Phi(), evt_weight);
                            hPhi3->Fill(ZZlep[l3].Phi(), evt_weight);
                            hPhi4->Fill(ZZlep[l4].Phi(), evt_weight);
                            
                            // direct
                            hMZ1->Fill(MZ1, evt_weight);
                            hPtZ1->Fill(PtZ1, evt_weight);
                            hMZ2->Fill(MZ2, evt_weight);
                            hPtZ2->Fill(PtZ2, evt_weight);
                            
                            hMZZ->Fill(MZZ, evt_weight);
                            hPtZZ->Fill(PtZZ, evt_weight);
                            
                            scatterHist->Fill(MZ1, MZ2, evt_weight);
                        }
                    }
                }
                

            }
        }

    }
    
    cout <<"Total:CutMZ1:CutMZ2:CutPt:CutEta:CutdR: "<<CutFlow[0]<<":"
        <<CutFlow[1]<<":"<<CutFlow[2]<<":"<<CutFlow[3]<<":"<<CutFlow[4]<<":"
        <<CutFlow[5]<<endl;
    
    gROOT->SetMacroPath("/afs/atlas.umich.edu/home/lailinxu/data18a/CommonTool/atlas_plot_style/atlasstyle-00-03-01");
    gROOT->LoadMacro("AtlasStyle.C");
    gROOT->ProcessLine("SetAtlasStyle()");
    
    // plot pt & eta to .png files
    TCanvas *c1 = new TCanvas("c1", "pt");
    TCanvas *c2 = new TCanvas("c2", "eta");
    TCanvas *c3 = new TCanvas("c3", "phi");
    
    gStyle->SetPadLeftMargin(0.15);
    gStyle->SetPadRightMargin(0.10);
    gStyle->SetPadTopMargin(0.05);
    gStyle->SetPadBottomMargin(0.15);
    
    c1->cd();
    c1->Divide(2,2);
    //pt1
    c1->cd(1);
    hpt1->GetXaxis()->SetTitle("Lep1 Pt[GeV]");
    hpt1->SetLineColor(kRed);
    hpt1->SetLineWidth(2);
    hpt1->Draw();
    //pt2
    c1->cd(2);
    hpt2->GetXaxis()->SetTitle("Lep2 Pt[GeV]");
    hpt2->SetLineColor(kRed);
    hpt2->SetLineWidth(2);
    hpt2->Draw();
    //pt3
    c1->cd(3);
    hpt3->GetXaxis()->SetTitle("Lep3 Pt[GeV]");
    hpt3->SetLineColor(kRed);
    hpt3->SetLineWidth(2);
    hpt3->Draw();
    //pt4
    c1->cd(4);
    hpt4->GetXaxis()->SetTitle("Lep4 Pt[GeV]");
    hpt4->SetLineColor(kRed);
    hpt4->SetLineWidth(2);
    hpt4->Draw();
    c1->Print("CT10_Pt.png");
    
    c2->cd();
    c2->Divide(2,2);
    //eta1
    c2->cd(1);
    hEta1->GetXaxis()->SetTitle("Lep1 Eta[GeV]");
    hEta1->SetLineColor(kGreen);
    hEta1->SetLineWidth(2);
    hEta1->Draw();
    //eta2
    c2->cd(2);
    hEta2->GetXaxis()->SetTitle("Lep2 Eta[GeV]");
    hEta2->SetLineColor(kGreen);
    hEta2->SetLineWidth(2);
    hEta2->Draw();
    //eta3
    c2->cd(3);
    hEta3->GetXaxis()->SetTitle("Lep3 Eta[GeV]");
    hEta3->SetLineColor(kGreen);
    hEta3->SetLineWidth(2);
    hEta3->Draw();
    //eta4
    c2->cd(4);
    hEta4->GetXaxis()->SetTitle("Lep4 Eta[GeV]");
    hEta4->SetLineColor(kGreen);
    hEta4->SetLineWidth(2);
    hEta4->Draw();
    c2->Print("CT10_Eta.png");
    
    c3->cd();
    c3->Divide(2,2);
    //Phi1
    c3->cd(1);
    hPhi1->GetXaxis()->SetTitle("Lep1 Phi[GeV]");
    hPhi1->SetLineColor(kBlue);
    hPhi1->SetLineWidth(2);
    hPhi1->Draw();
    //Phi2
    c3->cd(2);
    hPhi2->GetXaxis()->SetTitle("Lep2 Phi[GeV]");
    hPhi2->SetLineColor(kBlue);
    hPhi2->SetLineWidth(2);
    hPhi2->Draw();
    //Phi3
    c3->cd(3);
    hPhi3->GetXaxis()->SetTitle("Lep3 Phi[GeV]");
    hPhi3->SetLineColor(kBlue);
    hPhi3->SetLineWidth(2);
    hPhi3->Draw();
    //Phi4
    c3->cd(4);
    hPhi4->GetXaxis()->SetTitle("Lep4 Phi[GeV]");
    hPhi4->SetLineColor(kBlue);
    hPhi4->SetLineWidth(2);
    hPhi4->Draw();
    c3->Print("CT10_Phi.png");
    
    fout->Write();
    fout->Close();
    
    FILE * output = fopen("cutflow.txt", "w");
    double cutEff = 0.;
    char CutSteps[6][30] = {"Total", "CutMZ1", "CutMZ2", "CutPt", "CutEta", "CutdR"};
    for (int i=0; i<6; i++) {
        if (i == 0) cutEff = 1.;
        else if (CutFlow[0] !=0 ) cutEff = CutFlow[i]/CutFlow[0];
        fprintf(output, "%-20s %-10.2f %-10.4f\n", CutSteps[i], CutFlow[i],
                cutEff);
    }
    
}
