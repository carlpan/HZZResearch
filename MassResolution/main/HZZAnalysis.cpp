//<HZZAnalysis.C>
//<Analysis code>
//<Yusheng Wu, 2012, CERN>
//<Yutong Pan, 2012, rewritten for resolution calculation>

#include "Initialize.h"
#include <iostream>
#include <fstream>

//<--------------------->
//<Analysis Codes, Start>
//<--------------------->


//<Analysis::LoadEntry>
bool HZZAnalysis::LoadEntry(long entry) {
    fChain->GetEntry(entry);
}


//<Analysis::ProcessEntry>
bool HZZAnalysis::ProcessEntry(long entry, string set) {
    //cout << "point 1" << endl;
    //<Display Some Info to indicate current event>
    NEVTS++;

    if(RunNumber==0) return kTRUE;

    int npv2=0;
    for(int i=0; i<vxp_n; i++) {
        if(vxp_trk_n->at(i)>=2 && (vxp_type->at(i)==1 || vxp_type->at(i)==3)) {
            npv2++;
        }
    }

    // select four leptons
    int ind1,ind2,ind3,ind4,cnt=0;
    goode.clear();
    goodm.clear();
    bool found=false;

    if (Lep1Fla==0) {
      for (int el=0; el<el_n; el++) {
          OBJ_ELECTRON ele; LoadElectron(ele,set,el,npv2);
          if (ele.LF.Eta()==Lep1Eta && ele.LF.Phi()==Lep1Phi) {
              found=true; cnt++;
              goode.push_back(ele);
              ind1=0;
          }
      }
    }
    else {
        for (int mu=0; mu<mu_staco_n; mu++) {
            OBJ_MUON muon;
            LoadMuon(muon,set,mu,(double)npv2,STACO);
            if (muon.LF.Eta()==Lep1Eta && muon.LF.Phi()==Lep1Phi) {
                found=true;
                cnt++;
                goodm.push_back(muon);
                ind1=0;
            }
        }
        if (!found) {
            for (int mu=0; mu<mu_calo_n; mu++) {
                OBJ_MUON muon;
                LoadMuon(muon,set,mu,(double)npv2, CALO);
                if (muon.LF.Eta()==Lep1Eta && muon.LF.Phi()==Lep1Phi) {
                    found=true;
                    cnt++;
                    goodm.push_back(muon);
                    ind1=0;
                }
            }
        }
    }
    if (!found) {cout<<"ERROR: Did not find Lep1!!!"<<endl; exit(-1);}
    if (cnt!=1) {cout<<"ERROR: Found multople Lep1!!!"<<endl; exit(-1);}

    found=false; cnt=0;
    if (Lep2Fla==0) {
        for (int el=0; el<el_n; el++) {
            OBJ_ELECTRON ele;
            LoadElectron(ele,set,el,npv2);
            if (ele.LF.Eta()==Lep2Eta && ele.LF.Phi()==Lep2Phi) {
                found=true;
                cnt++;
                goode.push_back(ele);
                ind2=goode.size()-1;
            }
        }
    }
    else {
        for (int mu=0; mu<mu_staco_n; mu++) {
            OBJ_MUON muon;
            LoadMuon(muon,set,mu,(double)npv2,STACO);
            if (muon.LF.Eta()==Lep2Eta && muon.LF.Phi()==Lep2Phi) {
                found=true;
                cnt++;
                goodm.push_back(muon);
                ind2=goodm.size()-1;
            }
        }
        if (!found) {
            for (int mu=0; mu<mu_calo_n; mu++) {
                OBJ_MUON muon;
                LoadMuon(muon,set,mu,(double)npv2, CALO);
                if (muon.LF.Eta()==Lep2Eta && muon.LF.Phi()==Lep2Phi) {
                    found=true;
                    cnt++;
                    goodm.push_back(muon);
                    ind2=goodm.size()-1;
                }
            }
        }
    }
    if (!found) {cout<<"ERROR: Did not find Lep2!!!"<<endl; exit(-1);}
    if (cnt!=1) {cout<<"ERROR: Found multople Lep2!!!"<<endl; exit(-1);}

    found=false; cnt=0;
    if (Lep3Fla==0) {
        for (int el=0; el<el_n; el++) {
            OBJ_ELECTRON ele;
            LoadElectron(ele,set,el,npv2);
            if (ele.LF.Eta()==Lep3Eta && ele.LF.Phi()==Lep3Phi) {
                found=true;
                cnt++;
                goode.push_back(ele);
                ind3=goode.size()-1;
            }
        }
    }
    else {
        for (int mu=0; mu<mu_staco_n; mu++) {
            OBJ_MUON muon;
            LoadMuon(muon,set,mu,(double)npv2,STACO);
            if (muon.LF.Eta()==Lep3Eta && muon.LF.Phi()==Lep3Phi) {
                found=true;
                cnt++;
                goodm.push_back(muon);
                ind3=goodm.size()-1;
            }
        }
        if (!found) {
            for (int mu=0; mu<mu_calo_n; mu++) {
                OBJ_MUON muon;
                LoadMuon(muon,set,mu,(double)npv2, CALO);
                if (muon.LF.Eta()==Lep3Eta && muon.LF.Phi()==Lep3Phi) {
                    found=true;
                    cnt++;
                    goodm.push_back(muon);
                    ind3=goodm.size()-1;
                }
            }
        }
    }
    if (!found) {cout<<"ERROR: Did not find Lep3!!!"<<endl; exit(-1);}
    if (cnt!=1) {cout<<"ERROR: Found multople Lep3!!!"<<endl; exit(-1);}

    found=false; cnt=0;
    if (Lep4Fla==0) {
        for (int el=0; el<el_n; el++) {
            OBJ_ELECTRON ele;
            LoadElectron(ele,set,el,npv2);
            if (ele.LF.Eta()==Lep4Eta && ele.LF.Phi()==Lep4Phi) {
                found=true;
                cnt++;
                goode.push_back(ele);
                ind4=goode.size()-1;
            }
        }
    }
    else {
        for (int mu=0; mu<mu_staco_n; mu++) {
            OBJ_MUON muon;
            LoadMuon(muon,set,mu,(double)npv2,STACO);
            if (muon.LF.Eta()==Lep4Eta && muon.LF.Phi()==Lep4Phi) {
                found=true;
                cnt++;
                goodm.push_back(muon);
                ind4=goodm.size()-1;
            }
        }
        if (!found) {
            for (int mu=0; mu<mu_calo_n; mu++) {
                OBJ_MUON muon;
                LoadMuon(muon,set,mu,(double)npv2, CALO);
                if (muon.LF.Eta()==Lep4Eta && muon.LF.Phi()==Lep4Phi) {
                    found=true;
                    cnt++;
                    goodm.push_back(muon);
                    ind4=goodm.size()-1;
                }
            }
        }
    }
    if (!found) {cout<<"ERROR: Did not find Lep4!!!"<<endl; exit(-1);}
    if (cnt!=1) {cout<<"ERROR: Found multople Lep4!!!"<<endl; exit(-1);}



    // reconstructing Higgs bosons from four leptons
    Quad Higgs;
    
    Higgs.flavor_lep.push_back(Lep1Fla);
    Higgs.flavor_lep.push_back(Lep2Fla);
    Higgs.flavor_lep.push_back(Lep3Fla);
    Higgs.flavor_lep.push_back(Lep4Fla);

    if (Lep1Fla==0) Higgs.lepton.push_back(goode[ind1].LF); 
    else Higgs.lepton.push_back(goodm[ind1].LF);
    Higgs.index_lep.push_back(ind1);

    if (Lep2Fla==0) Higgs.lepton.push_back(goode[ind2].LF); 
    else Higgs.lepton.push_back(goodm[ind2].LF);
    Higgs.index_lep.push_back(ind2);

    if (Lep3Fla==0) Higgs.lepton.push_back(goode[ind3].LF); 
    else Higgs.lepton.push_back(goodm[ind3].LF);
    Higgs.index_lep.push_back(ind3);

    if (Lep4Fla==0) Higgs.lepton.push_back(goode[ind4].LF); 
    else Higgs.lepton.push_back(goodm[ind4].LF);
    Higgs.index_lep.push_back(ind4); 

    Higgs.ZZ = Higgs.lepton[0] + Higgs.lepton[1] + Higgs.lepton[2] + Higgs.lepton[3];



//    cout<<"Event Number: "<<EventNumber<<endl;
//    cout<<"Mass H/Z1/Z2: "<<MZZ<<"  "<<MZ1<<"  "<<MZ2<<endl;
//    cout<<"Lepton1 type/Pt/Eta: "<<Lep1Fla<<"  "<<Lep1Pt<<"  "<<Lep1Eta<<endl;
//    cout<<"Lepton2 type/Pt/Eta: "<<Lep2Fla<<"  "<<Lep2Pt<<"  "<<Lep2Eta<<endl;
//    cout<<"Lepton3 type/Pt/Eta: "<<Lep3Fla<<"  "<<Lep3Pt<<"  "<<Lep3Eta<<endl;
//    cout<<"Lepton4 type/Pt/Eta: "<<Lep4Fla<<"  "<<Lep4Pt<<"  "<<Lep4Eta<<endl;

    double Cres = GetMassReso(Higgs, true)/1000;
//    cout<<"FxnReso: "<<Cres<<endl;
 
    string type; 
    double Gsh;
    if (Higgs.flavor_lep[0]==0 && Higgs.flavor_lep[2]==0) {
      if (MZZ<300) Gsh = 2.801 - 0.05957*MZZ + pow(MZZ,2)*2.148e-4 - pow(MZZ,3)*2.45e-7;
      else Gsh = -2.23;
      type = "eeee";
    }	
    if (Higgs.flavor_lep[0]==0 && Higgs.flavor_lep[2]==1) {
      if (MZZ<180) Gsh = 0.2212 - 0.0111*MZZ - pow(MZZ,2)*3.06e-5; 
      else if (MZZ<300) Gsh = -.4086 -.003692*MZZ;
      else Gsh = -1.46;
      type = "eemm";
    }
    if (Higgs.flavor_lep[0]==1 && Higgs.flavor_lep[2]==0) {
      if (MZZ<300) Gsh = 0.6987 - 0.01758*MZZ + pow(MZZ,2)*2.825e-5; 
      else Gsh = -2.05;
      type = "mmee";
    }
    if (Higgs.flavor_lep[0]==1 && Higgs.flavor_lep[2]==1) {
      if (MZZ<350) Gsh = 0.2442 - 0.005866*MZZ + pow(MZZ,2)*6.523e-6;
      else Gsh = -1.05;
      type = "mmmm";
    }
//    cout<<"Gshift: "<<Gsh<<endl;
//    cout<<"Total Resolution: "<<sqrt(pow(Gsh,2) + pow(Cres,2))<<endl<<endl<<endl;

/*      if (Higgs.flavor_lep[0]==1 && Higgs.flavor_lep[2]==0 && MZZ < 160) { 
	cout<<type<<" "<<MZZ<<" "<<Cres<<" "<<Gsh<<endl;
    	cout<<"Lepton1 type/Pt/Eta: "<<Lep1Fla<<"  "<<Lep1Pt<<"  "<<Lep1Eta<<endl;
    	cout<<"Lepton2 type/Pt/Eta: "<<Lep2Fla<<"  "<<Lep2Pt<<"  "<<Lep2Eta<<endl;
    	cout<<"Lepton3 type/Pt/Eta: "<<Lep3Fla<<"  "<<Lep3Pt<<"  "<<Lep3Eta<<endl;
    	cout<<"Lepton4 type/Pt/Eta: "<<Lep4Fla<<"  "<<Lep4Pt<<"  "<<Lep4Eta<<endl<<endl;
      }*/

    //if (Higgs.flavor_lep[0]==1 && Higgs.flavor_lep[2]==1) cout<<RunNumber<<" "<<EventNumber<<" "<<MZZ<<" "<<sqrt(pow(Gsh,2) + pow(Cres,2))<<" "<<MZ1<<" "<<MZ2<<" "<<Lep1Pt<<" "<<Lep2Pt<<" "<<Lep3Pt<<" "<<Lep4Pt<<" "<<Lep1Eta<<" "<<Lep2Eta<<" "<<Lep3Eta<<" "<<Lep4Eta<<" "<<Cres<<" "<<Gsh<<endl;
    cout<<type<<" "<<MZZ<<" "<<sqrt(pow(Gsh,2) + pow(Cres,2))/MZZ<<endl;
    return true;
}


//<Analysis::SlaveTerminate>
void HZZAnalysis::Terminate() {

    //<Write ROOT Files>
    TreeFile->Write();
    HistoFile->cd();
    HistoFile->Write();
    TreeFile->Close();
    HistoFile->Close();

    //<Cut Flow Output>
    for(int set=0; set<(int)SETNAME.size(); set++) {
        for(int i=0; i<(int)CHN.size(); i++) {
            string chn = CHN[i];
            string filename = "log_eff_" + chn + "_" + SETNAME[set] + ".txt";
            ofstream file(filename.c_str());
            if(file.is_open()) {
                for(int j=0; j<(int)STEP_cut.size(); j++) {
                    string cut = STEP_cut[j];
                    file<<cut<<"="<<CNT_cut[SETNAME[set]][chn][cut].num<<
                        "+/-"<<CNT_cut[SETNAME[set]][chn][cut].err<<endl;
                }
                file.close();
            }
            else {
                cout<<"Can not open file "<<filename<<endl;
                exit(-1);
            }    
        }

        //<Object Output>
        string filename_obj = "log_eff_obj_" +  SETNAME[set] + ".txt";
        ofstream file_obj(filename_obj.c_str());
        MapType2_Counting::iterator it;
        for(it=CNT_obj[SETNAME[set]].begin(); it!=CNT_obj[SETNAME[set]].end(); it++) {
            string obj=(*it).first;
            for(int i=0; i<(int)STEP_obj[obj].size(); i++) {
                string cut=STEP_obj[obj][i];
                file_obj<<obj<<"_"<<cut<<"="<<CNT_obj[SETNAME[set]][obj][cut].num
                    <<"+/-"<<CNT_obj[SETNAME[set]][obj][cut].err<<endl;
            }
        }
    }//for:set

    cout<<"Total Process Number of Events: "<<NEVTS<<endl;
}


//<------------------->
//<Analysis Codes, END>
//<------------------->

