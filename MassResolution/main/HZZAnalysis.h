//<HZZAnalysis.h>
//<The header file for analysis>
//<Yusheng Wu, 2011, Ann Arbor>

#ifndef HZZAnalysis_h
#define HZZAnalysis_h

//<Common Header>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TLorentzVector.h>
#include <TRandom3.h>
#include <TH1F.h>
#include <TH2F.h>
#include <iomanip>
#include <string>
#include "D3PDAnalysisBase.h"
#include "AnalysisVar.h"
//<Parse good run list>
#include "GRLParser.h"
//<Pileup reweighting>
#include "TPileupReweighting.h"
//<Muon related>
#include "SmearingClass.h"
#include "AnalysisMuonEfficiencyScaleFactors.h"
#include "AnalysisMuonConfigurableScaleFactors.h"
//#include "CorrectCaloIso.h"
//<Electron related>
#include "EnergyRescaler.h"
#include "checkOQ.h"
#include "egammaSFclass.h"
#include "CaloIsoCorrection.h"
//#include "IsEMPlusPlusH4lDefs.h"
#include "MultiLeptonDefs.h"
//<Trigger Matching>
#include "MuonTriggerMatching.h"
#include "ElectronTriggerMatching.h"
#include "TriggerNavigationVariables.h"
//<Trigger SFs>
#include "LeptonTriggerSF.h"
//<ggF reweighting>
#include "ggFReweighting.h"
//<ZVertex reweighting>
#include "VertexPositionReweightingTool.h"
//<FSR related>
#include "FsrPhotons.h"

//<Predefined Constants>
const double PI=3.1415926;
const double ZMass=91.1876e3; //MeV
const double m_mass=105.658367; //MeV
const double e_mass = 0.510998910; //MeV
const double Unit_GeV = 1000.; //MeV

//<Object Class>
//<General, Muon, Electron, Jet, MET>
class OBJ{
    public:
        double E,Et;
        double p,pt,px,py,pz;
        double eta,phi,m;
        double d0,z0,d0err,z0err,d0sig,z0sig;
        double d0_old,z0_old,d0err_old,z0err_old,d0sig_old,z0sig_old;
        TLorentzVector L,Lori,Lcorr,LF;       
};        
class OBJ_MUON : public OBJ{
    public:
	bool hasPht, phtAdded;
	int index;
        double author,charge;
        double iscombined, isloose, ismedium, istight, istag, issa; 
        double caloId, caloLikelihood;
        int passhits_staco, passhits_calo, passhits_sa;
        double ptme, ptid, ptms, pt_corr, ptme_corr, ptid_corr;
        double etcone20, etcone30, etcone40, ptcone20, ptcone30, ptcone40, etcone20_corr, ptcone20_corr;
        double met_corrx, met_corry;
        double sf_loose, sf_calo;
        double npv;
        vector<int> fsr_index;
        vector<double> fsr_dR;
        vector<string> fsr_type;
        TLorentzVector L_me, L_id, Lcorr_me, Lcorr_id, LF_me, LF_id, LPht;
};
class OBJ_ELECTRON: public OBJ{
    public:
	bool hasPht, phtAdded;
        int index, source; //1: from Z, 2: from b/c, 3: from hadron, 4: from photon conversion, 5: unknown, 6: from W
        double charge, author;
        double isloose, ismedium, istight, isloosepp, ismediumpp, istightpp, islooseppzz, ismultilep;
        bool passOQ;
        double clE, clpt, cleta, clphi, trkpt, trketa, trkphi, pt2;
        double clE_corr, pt2_corr;
        double etcone20, etcone20_corr, etcone30, etcone40, ptcone20, ptcone30, ptcone40, ptcone20_corr;
        double met_corrx, met_corry;
        double sf_loosepp, sf_mediumpp, sf_tightpp;
        int npv;
        TLorentzVector Lcl,Ltrk,LPht; 
};       
class OBJ_JET : public OBJ{
    public:
        double pt_em, eta_em, phi_em, m_em;
        double isbad, jes, isugly, islooserbad;
        TLorentzVector LEM;
};
class OBJ_MET : public OBJ{
    public:
        double pt_corr,px_corr,py_corr;
        TLorentzVector L_RefFinal,L_Topo;
        TLorentzVector L_RefFinal_Corr,L_Topo_Corr;
};

//class for lepton pairs
class Pair {
    public: 
	bool addPht;
        int flavor; //0-electron, 1-muon
        vector<int> index;
        vector<int> charge;
        vector<TLorentzVector> lepton;
        TLorentzVector Z;
};

//class for quads, i.e. Z pairs
class Quad {
    public:
        vector<int> index;
        vector<Pair> pair;
        vector<TLorentzVector> alter_pairs;
        vector<TLorentzVector> lepton;
        vector<int> index_lep;
        vector<int> flavor_lep;
        vector<int> charge_lep;
        vector<double> ptcone20, etcone20, ptcone20_corr, etcone20_corr, d0sig, z0sig, d0, z0;
        TLorentzVector ZZ;
};


//<Analysis Class>
class HZZAnalysis : public D3PDAnalysisBase, public AnalysisVar {
public :

    //<Control Parameters and Variables>
    //<See details in AnalysisVar Class>
    TRandom3 *rnd;
    int NEVTS; //count total number of processed events    
    bool VERBOSE; //verbose or not
    string STREAM; //indicating event from which stream

    //<Placeholder for extra histograms>
    vector<TH1F*> histo1D_extra;
    vector<TH2F*> histo2D_extra;
    TH2F *PhPtVsdR;  
 
    //<Functions to Load Objects, "i" indicates the i-th object in an event>
    typedef enum {STACO, CALO} MUONTYPE; 
    void LoadMuon(OBJ_MUON& m, string SET, int i, double npv, MUONTYPE type); // type = STACO or Calo
    void LoadElectron(OBJ_ELECTRON& e, string SET, int i, int npv);
    void LoadJet(OBJ_JET& j, string SET, int i);
    void LoadMET(OBJ_MET& met, string SET, double corrx_add, double corry_add);        
    template <typename T> void AddPhotonLV(T& o, TLorentzVector Pht);
    template <typename T> void FSRPhoton(string str, T& o);
    pair<double, double> GausTest(vector<TLorentzVector> VLel, vector<OBJ_MUON> Vmu, int event, bool isData);
    double GetMassReso(Quad Higgs, bool isData);   
    void MCTruth(Quad Higgs, vector<OBJ_ELECTRON> goode, vector<double> APhtdR, vector<int> APhtGe, vector<bool> APhtB, int Event);
    void PrintDecay(int ind);
 
    //<Vectors for good selected objects>
    vector<OBJ_MUON> goodm,goodm_met;
    vector<OBJ_ELECTRON> goode,goode_met;
    vector<OBJ_JET> goodj;
 
    //<Additional Tools>
    GRLParser *grl4e, *grl2e2m, *grl4m;   
    Root::TPileupReweighting* pileup_reweight;
    MuonSmear::SmearingClass* mcp_smear;
    Analysis::AnalysisMuonConfigurableScaleFactors::Configuration config;
    Analysis::AnalysisMuonConfigurableScaleFactors* mcp_sf;
    Analysis::AnalysisMuonConfigurableScaleFactors* mcp_sf_sa;
    Analysis::AnalysisMuonConfigurableScaleFactors* mcp_sf_calo;
    //Analysis::AnalysisMuonEfficiencyScaleFactors* mcp_sf;
    //Analysis::AnalysisMuonEfficiencyScaleFactors* mcp_sf_sa;
    //Analysis::AnalysisMuonEfficiencyScaleFactors* mcp_sf_calo;
    eg2011::EnergyRescaler* egamma_smear;
    egammaOQ* egamma_OQ;
    egammaSFclass* egamma_sf;
    TriggerNavigationVariables* triggerNavigationVariables;
    MuonTriggerMatching* muonTriggerMatchTool;
    ElectronTriggerMatching* electronTriggerMatchTool;
    LeptonTriggerSF* m_leptonSF;
    ggFReweighting* ggF_reweight;
    VertexPositionReweightingTool* ZVertexTool;
    //CorrectCaloIso* etcone_cor;
    FsrPhotons* fsrphotons;

    //<Inherited from Base class>
    //<Seprate entry loading and event processing function>
    //<So that one can load once but run multiple configurations>
    HZZAnalysis(TTree * /*tree*/ =0) {}
    virtual ~HZZAnalysis() { }
    void    Begin(TTree *tree, string stream);
    bool    LoadEntry(long entry);
    bool    ProcessEntry(long entry, string set);
    void    Terminate();

};

#endif
