//<Initialize.h>
//<Initialization for analysis>
//<Yusheng Wu, 2012, CERN>

#include "PhysicsObject.h"
#include <iostream>
#include <fstream>

//<-------------------------->
//<Analysis Codes, Initialize>
//<-------------------------->


//<Analysis::Begin>
//<Initialize variables, histograms, trees before acutal event loop>
void HZZAnalysis::Begin(TTree *tree, string stream) {
    
    //<------------------->
    //<Overall setting map>
    //<------------------->

    //<common variables>
    STREAM = stream;
    NEVTS=0;
    VERBOSE=false;

    //<Common setting + Cutvalues>
    //<Don't put spaces in the strings>
    //<For domcwt: 0-no weight, 1- only MC+Pileup, 2- MC+Pileup+SF, 3- All:MC+Pileup+SF+triggerSF>
    //SETNAME.push_back("NOM1");
    //InitSetting(SETTING, "NOM1", "docorr=0,domcwt=0,dotree=1,doclone=1,dohistogram=1");
    //SETNAME.push_back("NOM2");
    //InitSetting(SETTING, "NOM2", "docorr=1,domcwt=0,dotree=1,doclone=1,dohistogram=1");
    //SETNAME.push_back("NOM3");
    //InitSetting(SETTING, "NOM3", "docorr=1,domcwt=1,dotree=1,doclone=1,dohistogram=1");
    //SETNAME.push_back("NOM4");
    //InitSetting(SETTING, "NOM4", "docorr=1,domcwt=2,dotree=1,doclone=1,dohistogram=1");
    //SETNAME.push_back("NOM5");
    //InitSetting(SETTING, "NOM5", "docorr=1,domcwt=3,dotree=1,doclone=1,dohistogram=1");
    SETNAME.push_back("TNOM");
    InitSetting(SETTING, "TNOM", "docorr=1,domcwt=3,dotree=1,doclone=1,dohistogram=1");
    //SETNAME.push_back("physics");
    //InitSetting(SETTING, "physics", "docorr=1,domcwt=3,dotree=1,doclone=1,dohistogram=1");

    //<-------------------------------------------->
    //<Set up cuts, variables, histograms and trees>
    //<-------------------------------------------->

    //<Define Cut Sequences, then initialize Counting Variables and Flags>
    //<CNT_XXX,FLAG_XXX maps will be available then>
    //<Be caution, there should be no space in the string>
    //<An "incl" channel must be set>
    InitStrVec(CHN,"eeee,eemm,mmee,mmmm,incl");
    InitSTEP(STEP_cut,"D3PD,GRL,LAr,PV,Trigger,2Lep,4Lep,Quad,Kine,TrigMatch,Z1,Z2,DR,JPsiVeto,OneQuad,TrackIso,CaloIso,IP");
    InitSTEP(STEP_obj,"mu","All,ID,Pt,Eta,Hits,D0,Z0,CaloRM");
    InitSTEP(STEP_obj,"ele","All,Author,ID,eOverlap,Pt,Eta,OQ,IP,mOverlap");
    InitSTEP(STEP_obj,"vtx","All,Has3Trks");
    CreateCountingMap();
    
    //<Variables to be calculated in analysis and filled in Trees>
    //<InitVar->NameList,HistogramRange,CutStepToFillHistogram,Option>
    //InitVar("Z_Mee,Z_Mmm",5000,0,5000,-6);
    //InitVar("MZ1,MZ2,MZZ",5000,0,5000,13);
    //InitVar("Z1Eta,Z1Phi,Z2Eta,Z2Phi,dR,dPhi",2000,-20,20,13);

    InitVar("N_vx",50,0,50,2);
    InitVar("NPhtF",50,0,50,17);
    InitVar("DMZZ,DMZZG",120,-30,30);
    InitVar("Z_Mee,Z_Mmm,MCZ1,MCZ2",5000,0,5000,5);
    InitVar("Zee_Lep1_Pt,Zee_Lep2_Pt,Zmm_Lep1_Pt,Zmm_Lep2_Pt",5000,0,5000,5);
    InitVar("Zee_Lep1_Eta,Zee_Lep2_Eta,Zmm_Lep1_Eta,Zmm_Lep2_Eta",2000,-20,20,5);
    InitVar("Zee_Lep1_Phi,Zee_Lep2_Phi,Zmm_Lep1_Phi,Zmm_Lep2_Phi",2000,-20,20,5);
    InitVar("MZ1,MZ2,MZZ,MZ1G,MZ2G,MZZG",5000,0,5000,13);
    InitVar("Z1Eta,Z1Phi,Z2Eta,Z2Phi,dRZZ,dPhiZZ",2000,-20,20,13);
    InitVar("Z1Pt,Z2Pt,ZZPt",5000,0,5000,13);
    InitVar("LepPt,Lep1Pt,Lep2Pt,Lep3Pt,Lep4Pt",1000,-10,1000,13);
    InitVar("LepEta,Lep1Eta,Lep2Eta,Lep3Eta,Lep4Eta",2000,-20,20,13);
    InitVar("LepPhi,Lep1Phi,Lep2Phi,Lep3Phi,Lep4Phi",2000,-20,20,13);
    InitVar("Lep1Fla,Lep2Fla,Lep3Fla,Lep4Fla",10,-5,5,17);
    InitVar("Lep1Charge,Lep2Charge,Lep3Charge,Lep4Charge",10,-5,5,17);
    InitVar("Lep1CaloIso,Lep2CaloIso,Lep3CaloIso,Lep4CaloIso",1000,-1,1,17);
    InitVar("Lep1TrkIso,Lep2TrkIso,Lep3TrkIso,Lep4TrkIso",1000,0,-1,17);
    InitVar("Lep1d0,Lep2d0,Lep3d0,Lep4d0",5000,0,10,17);
    InitVar("Lep1z0,Lep2z0,Lep3z0,Lep4z0",5000,0,10,17);
    InitVar("Lep1d0Sig,Lep2d0Sig,Lep3d0Sig,Lep4d0Sig",5000,0,10,17);
    InitVar("Lep1z0Sig,Lep2z0Sig,Lep3z0Sig,Lep4z0Sig",5000,0,10,17);
    InitVar("MReso,MSmUReso,MSmCReso",1000,0,10,17);
    // Add variables of the leptons
    //    InitVar("mu1_pt,mu2_pt,mu3_pt,mu4_pt,e1_pt,e2_pt,e3_pt,e4_pt", 5000,0,5000,6);
    //    InitVar("mu1_eta,mu2_eta,mu3_eta,mu4_eta,e1_eta,e2_eta,e3_eta,e4_eta", 2000,-20,20,6);
    //    InitVar("mu1_phi,mu2_phi,mu3_phi,mu4_phi,e1_phi,e2_phi,e3_phi,e4_phi", 2000,-20,20,6);
    InitVar("dd0_max,dd0_min,dz0_max,dz0_min", 5000,0,10,13);
    InitVar("dR_min",5000,0,10,17);
    InitVar("Pt1,Pt2,Pt3,Pt4",1000,0,1000,6);
    InitVar("Eta1,Eta2,Eta3,Eta4",200,-5,5,6);
    InitVar("Phi1,Phi2,Phi3,Phi4",200,-5,5,6);
    InitVar("dEtaZ1,dEtaZ2,dPhiZ1,dPhiZ2,dRZ1,dRZ2",1000,-10,10,13);
    InitVar("dPt", 2000,0,20,6,InHistoOnly,1);   // |mu_me_pt-mu_id_pt|/mu_id_pt
    InitVar("epht_pt,mpht_pt",2000,0,200,17,InHistoOnly,1);  
    InitVar("epht_eta,mpht_eta",2000,-10,10,17,InHistoOnly,1);  
    InitVar("epht_dRm,mpht_dRm",1000,0,1,17,InHistoOnly,1);  
    InitVar("epht_rat,mpht_rat",1000,0,1,17,InHistoOnly,1);  

    //    InitVar("dphi_mu,dR_mu", 2000,-20,20,6);
    // Add variables to store lepton source

    //<2D Histograms>
    //Init2DHelper("WL_Pt",100,0,500,"MET_Et",100,0,500,11);    
    //<Additional Histogram>        

    //<Trees and Root Files>   
    CreateAllFiles("HZZAnalysis"); //will generate Analysis + _tree.root / _histo.root
    
    PhPtVsdR = new TH2F("PhPtVsdR","",100,0,1,100,0,100);
       
    //<Initialize Varaibles and Histograms>
    //<Map histo1D and Var will be created to use>
    CreateTreeVarHistoMap();    

    //<Add variables to trees>
    fChain->LoadTree(0);
    for(int i=0; i<(int)SETNAME.size(); i++) {
        if(SETTING[SETNAME[i]]["dotree"]==0) continue;
        TreeFile->cd();   
        if(SETTING[SETNAME[i]]["doclone"]==1) {
            Tree[SETNAME[i]] = (TTree *)fChain->GetTree()->CloneTree(0);
            Tree[SETNAME[i]]->SetNameTitle(SETNAME[i].c_str(),SETNAME[i].c_str());
        }
        else
            Tree[SETNAME[i]] = new TTree(SETNAME[i].c_str(),SETNAME[i].c_str());
        AddVarIntoTree(Tree[SETNAME[i]]);        
    }

    //<----------------------->
    //<Set up additional tools>
    //<----------------------->

    //TRandom
    rnd = new TRandom3();

    //Setup GRL
    if(STREAM!="MC") {
        grl4e = new GRLParser();
        grl4e->ReadGRL("side/grl4e.list");
        grl4m = new GRLParser();
        grl4m->ReadGRL("side/grl4m.list");
        grl2e2m = new GRLParser();
        grl2e2m->ReadGRL("side/grl2e2m.list");
    }

    //ZVertex reweighting
    ZVertexTool= new VertexPositionReweightingTool(VertexPositionReweightingTool::MC12a,"/atlas/data18a/bili/work/ZZ/tools/SVNPackages/Packages/egammaAnalysisUtils/share/zvtx_weights_2011_2012.root");

    //ggF reweighting
    ggF_reweight = new ggFReweighting("PowHeg",500, "Mean", "/atlas/data18a/bili/work/ZZ/tools/SVNPackages/Packages/ggFReweighting/", "mc11");

    //pileup reweighting
    pileup_reweight = new Root::TPileupReweighting("PILEUP");
    pileup_reweight->SetUnrepresentedDataAction(2); //Keep the unpresented data
    pileup_reweight->AddConfigFile("/atlas/data18a/bili/work/GRL/MuHisto/MC12a.prw.root");
    //pileup_reweight->AddConfigFile("/atlas/data18a/bili/work/ZZ/tools/SVNPackages/Packages/PileupReweighting-00-02-05/share/mc12a_defaults.prw.root");
    pileup_reweight->SetDataScaleFactors(1/1.11);
    pileup_reweight->AddLumiCalcFile("/atlas/data18a/bili/work/GRL/MuHisto/ilumicalc_2012_period_AllYear_Higgs_4l_2e2mu.root");
    pileup_reweight->SetDefaultChannel(160156);
    pileup_reweight->initialize();

    //mcp related
    mcp_smear = new MuonSmear::SmearingClass("Data12","staco","pT","Rel17.2_preliminary","/atlas/data18a/bili/work/ZZ/tools/SVNPackages/Packages/MuonMomentumCorrections/share/");
    mcp_smear->UseScale(1);   
    mcp_smear->UseImprovedCombine(); 
    vector<double> int_lum = pileup_reweight->getIntegratedLumiVector();
    //mcp_sf = new Analysis::AnalysisMuonEfficiencyScaleFactors("STACO_CB_plus_ST",int_lum,"MeV","/atlas/data18a/bili/work/ZZ/tools/SVNPackages/Packages/MuonEfficiencyCorrections/share/");
    //mcp_sf_cb = new Analysis::AnalysisMuonEfficiencyScaleFactors("STACO_CB",int_lum,"MeV","/atlas/data18a/bili/work/ZZ/tools/SVNPackages/Packages/MuonEfficiencyCorrections/share/");
    //mcp_sf_calo = new Analysis::AnalysisMuonEfficiencyScaleFactors("CaloTag",int_lum,"MeV","/atlas/data18a/bili/work/ZZ/tools/SVNPackages/Packages/MuonEfficiencyCorrections/share/");
    //Analysis::AnalysisMuonConfigurableScaleFactors::Configuration config;
    config = Analysis::AnalysisMuonConfigurableScaleFactors::AverageOverPeriods;
    mcp_sf = new Analysis::AnalysisMuonConfigurableScaleFactors("/atlas/data18a/bili/work/ZZ/tools/SVNPackages/Packages/MuonEfficiencyCorrections/share/","STACO_CB_plus_ST_2012_SF.txt","MeV",config);
    mcp_sf->Initialise();
    mcp_sf_sa = new Analysis::AnalysisMuonConfigurableScaleFactors("/atlas/data18a/bili/work/ZZ/tools/SVNPackages/Packages/MuonEfficiencyCorrections/share/","STACO_CB_plus_ST_2012_SFms.txt","MeV",config);
    mcp_sf_sa->Initialise();
    mcp_sf_calo = new Analysis::AnalysisMuonConfigurableScaleFactors("/atlas/data18a/bili/work/ZZ/tools/SVNPackages/Packages/MuonEfficiencyCorrections/share/","CaloTag_2012_SF.txt","MeV",config);
    mcp_sf_calo->Initialise();

    //egamma related
    egamma_smear = new eg2011::EnergyRescaler();
    egamma_smear->useDefaultCalibConstants("2012");
    egamma_OQ = new egammaOQ();
    egamma_sf = new egammaSFclass();
    fsrphotons = new FsrPhotons();

    //lepton trigger SF
    //m_leptonSF = new LeptonTriggerSF("/atlas/data18a/bili/work/ZZ/tools/SVNPackages/Packages/TrigMuonEfficiency/share/");
    m_leptonSF = new LeptonTriggerSF(2012,"/atlas/data18a/bili/work/ZZ/tools/SVNPackages/Packages/TrigMuonEfficiency/share","muon_trigger_sf_2012.root");


    //trigger matching
    triggerNavigationVariables = new TriggerNavigationVariables();
    triggerNavigationVariables->set_trig_DB_SMK(trig_DB_SMK);
    triggerNavigationVariables->set_trig_Nav_n(trig_Nav_n);
    triggerNavigationVariables->set_trig_Nav_chain_ChainId(trig_Nav_chain_ChainId);
    triggerNavigationVariables->set_trig_Nav_chain_RoIType(trig_Nav_chain_RoIType);
    triggerNavigationVariables->set_trig_Nav_chain_RoIIndex(trig_Nav_chain_RoIIndex);
/* electron */
    triggerNavigationVariables->set_trig_RoI_EF_e_egammaContainer_egamma_Electrons(trig_RoI_EF_e_egammaContainer_egamma_Electrons);
    triggerNavigationVariables->set_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus(trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus);
    triggerNavigationVariables->set_trig_EF_el_n(trig_EF_el_n);
    triggerNavigationVariables->set_trig_EF_el_eta(trig_EF_el_eta);
    triggerNavigationVariables->set_trig_EF_el_phi(trig_EF_el_phi);

    /* muon */
    triggerNavigationVariables->set_trig_RoI_EF_mu_Muon_ROI(trig_RoI_EF_mu_Muon_ROI);
    triggerNavigationVariables->set_trig_RoI_EF_mu_TrigMuonEFInfoContainer(trig_RoI_EF_mu_TrigMuonEFInfoContainer);
    triggerNavigationVariables->set_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus(trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus);
    triggerNavigationVariables->set_trig_RoI_L2_mu_CombinedMuonFeature(trig_RoI_L2_mu_CombinedMuonFeature);
    triggerNavigationVariables->set_trig_RoI_L2_mu_CombinedMuonFeatureStatus(trig_RoI_L2_mu_CombinedMuonFeatureStatus);
    triggerNavigationVariables->set_trig_RoI_L2_mu_MuonFeature(trig_RoI_L2_mu_MuonFeature);
    triggerNavigationVariables->set_trig_RoI_L2_mu_Muon_ROI(trig_RoI_L2_mu_Muon_ROI);
    triggerNavigationVariables->set_trig_EF_trigmuonef_track_CB_pt(trig_EF_trigmuonef_track_CB_pt);
    triggerNavigationVariables->set_trig_EF_trigmuonef_track_CB_eta(trig_EF_trigmuonef_track_CB_eta);
    triggerNavigationVariables->set_trig_EF_trigmuonef_track_CB_phi(trig_EF_trigmuonef_track_CB_phi);
    triggerNavigationVariables->set_trig_EF_trigmuonef_track_SA_pt(trig_EF_trigmuonef_track_SA_pt);
    triggerNavigationVariables->set_trig_EF_trigmuonef_track_SA_eta(trig_EF_trigmuonef_track_SA_eta);
    triggerNavigationVariables->set_trig_EF_trigmuonef_track_SA_phi(trig_EF_trigmuonef_track_SA_phi);
    triggerNavigationVariables->set_trig_EF_trigmugirl_track_CB_pt(trig_EF_trigmugirl_track_CB_pt);
    triggerNavigationVariables->set_trig_EF_trigmugirl_track_CB_eta(trig_EF_trigmugirl_track_CB_eta);
    triggerNavigationVariables->set_trig_EF_trigmugirl_track_CB_phi(trig_EF_trigmugirl_track_CB_phi);
    triggerNavigationVariables->set_trig_L2_combmuonfeature_eta(trig_L2_combmuonfeature_eta);
    triggerNavigationVariables->set_trig_L2_combmuonfeature_phi(trig_L2_combmuonfeature_phi);
    triggerNavigationVariables->set_trig_L2_muonfeature_eta(trig_L2_muonfeature_eta);
    triggerNavigationVariables->set_trig_L2_muonfeature_phi(trig_L2_muonfeature_phi);
    triggerNavigationVariables->set_trig_L1_mu_eta(trig_L1_mu_eta);
    triggerNavigationVariables->set_trig_L1_mu_phi(trig_L1_mu_phi);
    triggerNavigationVariables->set_trig_L1_mu_thrName(trig_L1_mu_thrName);
    //for 2012 isolated trigger
    triggerNavigationVariables->set_trig_RoI_EF_mu_TrigMuonEFIsolationContainer(trig_RoI_EF_mu_TrigMuonEFIsolationContainer);
    triggerNavigationVariables->set_trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus(trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus);

    cout<<trig_L1_mu_thrName<<endl;

    if (not triggerNavigationVariables->isValid()) {
        std::cerr << "VARIABLES NOT CORRECTLY SET\n";
    }
    muonTriggerMatchTool = new MuonTriggerMatching(triggerNavigationVariables);
    electronTriggerMatchTool = new ElectronTriggerMatching(triggerNavigationVariables);

    //<-------------->
    //<Other settings>
    //<-------------->
    //...
}

