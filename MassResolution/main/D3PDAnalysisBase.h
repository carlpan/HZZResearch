//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jul 10 18:10:11 2012 by ROOT version 5.28/00a
// from TTree NOM/NOM
// found on file: data12_tree_result.root
//////////////////////////////////////////////////////////

#ifndef D3PDAnalysisBase_h
#define D3PDAnalysisBase_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <vector>
using namespace std;
class D3PDAnalysisBase : public TSelector {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain

   // Declaration of leaf types
   Bool_t          EF_2e12Tvh_loose1;
   Bool_t          EF_2mu13;
   Bool_t          EF_e12Tvh_medium1_mu8;
   Bool_t          EF_e24vhi_loose1_mu8;
   Bool_t          EF_e24vhi_medium1;
   Bool_t          EF_e60_medium1;
   Bool_t          EF_mu18_tight_mu8_EFFS;
   Bool_t          EF_mu24i_tight;
   Bool_t          EF_mu36_tight;
   UInt_t          RunNumber;
   UInt_t          EventNumber;
   UInt_t          lbn;
   UInt_t          bcid;
   Float_t         averageIntPerXing;
   UInt_t          larError;
   Int_t           el_n;
   vector<float>   *el_E;
   vector<float>   *el_Et;
   vector<float>   *el_pt;
   vector<float>   *el_m;
   vector<float>   *el_eta;
   vector<float>   *el_phi;
   vector<float>   *el_px;
   vector<float>   *el_py;
   vector<float>   *el_pz;
   vector<float>   *el_charge;
   vector<int>     *el_author;
   vector<unsigned int> *el_isEM;
   vector<unsigned int> *el_isEMLoose;
   vector<unsigned int> *el_isEMMedium;
   vector<unsigned int> *el_isEMTight;
   vector<unsigned int> *el_OQ;
   vector<int>     *el_convFlag;
   vector<int>     *el_isConv;
   vector<int>     *el_nConv;
   vector<int>     *el_nSingleTrackConv;
   vector<int>     *el_nDoubleTrackConv;
   vector<int>     *el_mediumWithoutTrack;
   vector<int>     *el_mediumIsoWithoutTrack;
   vector<int>     *el_tightWithoutTrack;
   vector<int>     *el_tightIsoWithoutTrack;
   vector<int>     *el_loose;
   vector<int>     *el_looseIso;
   vector<int>     *el_medium;
   vector<int>     *el_mediumIso;
   vector<int>     *el_tight;
   vector<int>     *el_tightIso;
   vector<int>     *el_loosePP;
   vector<int>     *el_loosePPIso;
   vector<int>     *el_mediumPP;
   vector<int>     *el_mediumPPIso;
   vector<int>     *el_tightPP;
   vector<int>     *el_tightPPIso;
   vector<int>     *el_goodOQ;
   vector<float>   *el_Ethad;
   vector<float>   *el_Ethad1;
   vector<float>   *el_f1;
   vector<float>   *el_f1core;
   vector<float>   *el_Emins1;
   vector<float>   *el_fside;
   vector<float>   *el_Emax2;
   vector<float>   *el_ws3;
   vector<float>   *el_wstot;
   vector<float>   *el_emaxs1;
   vector<float>   *el_deltaEs;
   vector<float>   *el_E233;
   vector<float>   *el_E237;
   vector<float>   *el_E277;
   vector<float>   *el_weta2;
   vector<float>   *el_f3;
   vector<float>   *el_f3core;
   vector<float>   *el_rphiallcalo;
   vector<float>   *el_Etcone45;
   vector<float>   *el_Etcone15;
   vector<float>   *el_Etcone20;
   vector<float>   *el_Etcone25;
   vector<float>   *el_Etcone30;
   vector<float>   *el_Etcone35;
   vector<float>   *el_Etcone40;
   vector<float>   *el_ptcone20;
   vector<float>   *el_ptcone30;
   vector<float>   *el_ptcone40;
   vector<float>   *el_nucone20;
   vector<float>   *el_nucone30;
   vector<float>   *el_nucone40;
   vector<float>   *el_Etcone15_pt_corrected;
   vector<float>   *el_Etcone20_pt_corrected;
   vector<float>   *el_Etcone25_pt_corrected;
   vector<float>   *el_Etcone30_pt_corrected;
   vector<float>   *el_Etcone35_pt_corrected;
   vector<float>   *el_Etcone40_pt_corrected;
   vector<float>   *el_convanglematch;
   vector<float>   *el_convtrackmatch;
   vector<int>     *el_hasconv;
   vector<float>   *el_convvtxx;
   vector<float>   *el_convvtxy;
   vector<float>   *el_convvtxz;
   vector<float>   *el_Rconv;
   vector<float>   *el_zconv;
   vector<float>   *el_convvtxchi2;
   vector<float>   *el_pt1conv;
   vector<int>     *el_convtrk1nBLHits;
   vector<int>     *el_convtrk1nPixHits;
   vector<int>     *el_convtrk1nSCTHits;
   vector<int>     *el_convtrk1nTRTHits;
   vector<float>   *el_pt2conv;
   vector<int>     *el_convtrk2nBLHits;
   vector<int>     *el_convtrk2nPixHits;
   vector<int>     *el_convtrk2nSCTHits;
   vector<int>     *el_convtrk2nTRTHits;
   vector<float>   *el_ptconv;
   vector<float>   *el_pzconv;
   vector<float>   *el_pos7;
   vector<float>   *el_etacorrmag;
   vector<float>   *el_deltaeta1;
   vector<float>   *el_deltaeta2;
   vector<float>   *el_deltaphi2;
   vector<float>   *el_deltaphiRescaled;
   vector<float>   *el_deltaPhiFromLast;
   vector<float>   *el_deltaPhiRot;
   vector<float>   *el_expectHitInBLayer;
   vector<float>   *el_trackd0_physics;
   vector<float>   *el_etaSampling1;
   vector<float>   *el_reta;
   vector<float>   *el_rphi;
   vector<float>   *el_topoEtcone20;
   vector<float>   *el_topoEtcone30;
   vector<float>   *el_topoEtcone40;
   vector<float>   *el_EtringnoisedR03sig2;
   vector<float>   *el_EtringnoisedR03sig3;
   vector<float>   *el_EtringnoisedR03sig4;
   vector<double>  *el_isolationlikelihoodjets;
   vector<double>  *el_isolationlikelihoodhqelectrons;
   vector<double>  *el_electronweight;
   vector<double>  *el_electronbgweight;
   vector<double>  *el_softeweight;
   vector<double>  *el_softebgweight;
   vector<double>  *el_neuralnet;
   vector<double>  *el_Hmatrix;
   vector<double>  *el_Hmatrix5;
   vector<double>  *el_adaboost;
   vector<double>  *el_softeneuralnet;
   vector<double>  *el_ringernn;
   vector<float>   *el_zvertex;
   vector<float>   *el_errz;
   vector<float>   *el_etap;
   vector<float>   *el_depth;
   vector<int>     *el_refittedTrack_n;
   vector<vector<int> > *el_refittedTrack_author;
   vector<vector<float> > *el_refittedTrack_chi2;
   vector<vector<int> > *el_refittedTrack_hasBrem;
   vector<vector<float> > *el_refittedTrack_bremRadius;
   vector<vector<float> > *el_refittedTrack_bremZ;
   vector<vector<float> > *el_refittedTrack_bremRadiusErr;
   vector<vector<float> > *el_refittedTrack_bremZErr;
   vector<vector<int> > *el_refittedTrack_bremFitStatus;
   vector<vector<float> > *el_refittedTrack_qoverp;
   vector<vector<float> > *el_refittedTrack_d0;
   vector<vector<float> > *el_refittedTrack_z0;
   vector<vector<float> > *el_refittedTrack_theta;
   vector<vector<float> > *el_refittedTrack_phi;
   vector<vector<float> > *el_refittedTrack_LMqoverp;
   vector<vector<float> > *el_refittedTrack_covd0;
   vector<vector<float> > *el_refittedTrack_covz0;
   vector<vector<float> > *el_refittedTrack_covphi;
   vector<vector<float> > *el_refittedTrack_covtheta;
   vector<vector<float> > *el_refittedTrack_covqoverp;
   vector<vector<float> > *el_refittedTrack_covd0z0;
   vector<vector<float> > *el_refittedTrack_covz0phi;
   vector<vector<float> > *el_refittedTrack_covz0theta;
   vector<vector<float> > *el_refittedTrack_covz0qoverp;
   vector<vector<float> > *el_refittedTrack_covd0phi;
   vector<vector<float> > *el_refittedTrack_covd0theta;
   vector<vector<float> > *el_refittedTrack_covd0qoverp;
   vector<vector<float> > *el_refittedTrack_covphitheta;
   vector<vector<float> > *el_refittedTrack_covphiqoverp;
   vector<vector<float> > *el_refittedTrack_covthetaqoverp;
   vector<float>   *el_Es0;
   vector<float>   *el_etas0;
   vector<float>   *el_phis0;
   vector<float>   *el_Es1;
   vector<float>   *el_etas1;
   vector<float>   *el_phis1;
   vector<float>   *el_Es2;
   vector<float>   *el_etas2;
   vector<float>   *el_phis2;
   vector<float>   *el_Es3;
   vector<float>   *el_etas3;
   vector<float>   *el_phis3;
   vector<float>   *el_E_PreSamplerB;
   vector<float>   *el_E_EMB1;
   vector<float>   *el_E_EMB2;
   vector<float>   *el_E_EMB3;
   vector<float>   *el_E_PreSamplerE;
   vector<float>   *el_E_EME1;
   vector<float>   *el_E_EME2;
   vector<float>   *el_E_EME3;
   vector<float>   *el_E_HEC0;
   vector<float>   *el_E_HEC1;
   vector<float>   *el_E_HEC2;
   vector<float>   *el_E_HEC3;
   vector<float>   *el_E_TileBar0;
   vector<float>   *el_E_TileBar1;
   vector<float>   *el_E_TileBar2;
   vector<float>   *el_E_TileGap1;
   vector<float>   *el_E_TileGap2;
   vector<float>   *el_E_TileGap3;
   vector<float>   *el_E_TileExt0;
   vector<float>   *el_E_TileExt1;
   vector<float>   *el_E_TileExt2;
   vector<float>   *el_E_FCAL0;
   vector<float>   *el_E_FCAL1;
   vector<float>   *el_E_FCAL2;
   vector<float>   *el_cl_E;
   vector<float>   *el_cl_pt;
   vector<float>   *el_cl_eta;
   vector<float>   *el_cl_phi;
   vector<float>   *el_firstEdens;
   vector<float>   *el_cellmaxfrac;
   vector<float>   *el_longitudinal;
   vector<float>   *el_secondlambda;
   vector<float>   *el_lateral;
   vector<float>   *el_secondR;
   vector<float>   *el_centerlambda;
   vector<float>   *el_rawcl_Es0;
   vector<float>   *el_rawcl_etas0;
   vector<float>   *el_rawcl_phis0;
   vector<float>   *el_rawcl_Es1;
   vector<float>   *el_rawcl_etas1;
   vector<float>   *el_rawcl_phis1;
   vector<float>   *el_rawcl_Es2;
   vector<float>   *el_rawcl_etas2;
   vector<float>   *el_rawcl_phis2;
   vector<float>   *el_rawcl_Es3;
   vector<float>   *el_rawcl_etas3;
   vector<float>   *el_rawcl_phis3;
   vector<float>   *el_rawcl_E;
   vector<float>   *el_rawcl_pt;
   vector<float>   *el_rawcl_eta;
   vector<float>   *el_rawcl_phi;
   vector<vector<float> > *el_rings_E;
   vector<float>   *el_trackd0;
   vector<float>   *el_trackz0;
   vector<float>   *el_trackphi;
   vector<float>   *el_tracktheta;
   vector<float>   *el_trackqoverp;
   vector<float>   *el_trackpt;
   vector<float>   *el_tracketa;
   vector<float>   *el_trackcov_d0;
   vector<float>   *el_trackcov_z0;
   vector<float>   *el_trackcov_phi;
   vector<float>   *el_trackcov_theta;
   vector<float>   *el_trackcov_qoverp;
   vector<float>   *el_trackcov_d0_z0;
   vector<float>   *el_trackcov_d0_phi;
   vector<float>   *el_trackcov_d0_theta;
   vector<float>   *el_trackcov_d0_qoverp;
   vector<float>   *el_trackcov_z0_phi;
   vector<float>   *el_trackcov_z0_theta;
   vector<float>   *el_trackcov_z0_qoverp;
   vector<float>   *el_trackcov_phi_theta;
   vector<float>   *el_trackcov_phi_qoverp;
   vector<float>   *el_trackcov_theta_qoverp;
   vector<float>   *el_trackfitchi2;
   vector<int>     *el_trackfitndof;
   vector<int>     *el_nBLHits;
   vector<int>     *el_nPixHits;
   vector<int>     *el_nSCTHits;
   vector<int>     *el_nTRTHits;
   vector<int>     *el_nTRTHighTHits;
   vector<int>     *el_nPixHoles;
   vector<int>     *el_nSCTHoles;
   vector<int>     *el_nTRTHoles;
   vector<int>     *el_nPixelDeadSensors;
   vector<int>     *el_nSCTDeadSensors;
   vector<int>     *el_nBLSharedHits;
   vector<int>     *el_nPixSharedHits;
   vector<int>     *el_nSCTSharedHits;
   vector<int>     *el_nBLayerSplitHits;
   vector<int>     *el_nPixSplitHits;
   vector<int>     *el_nBLayerOutliers;
   vector<int>     *el_nPixelOutliers;
   vector<int>     *el_nSCTOutliers;
   vector<int>     *el_nTRTOutliers;
   vector<int>     *el_nTRTHighTOutliers;
   vector<int>     *el_nContribPixelLayers;
   vector<int>     *el_nGangedPixels;
   vector<int>     *el_nGangedFlaggedFakes;
   vector<int>     *el_nPixelSpoiltHits;
   vector<int>     *el_nSCTDoubleHoles;
   vector<int>     *el_nSCTSpoiltHits;
   vector<int>     *el_expectBLayerHit;
   vector<int>     *el_nSiHits;
   vector<float>   *el_TRTHighTHitsRatio;
   vector<float>   *el_TRTHighTOutliersRatio;
   vector<float>   *el_pixeldEdx;
   vector<int>     *el_nGoodHitsPixeldEdx;
   vector<float>   *el_massPixeldEdx;
   vector<vector<float> > *el_likelihoodsPixeldEdx;
   vector<float>   *el_eProbabilityComb;
   vector<float>   *el_eProbabilityHT;
   vector<float>   *el_eProbabilityToT;
   vector<float>   *el_eProbabilityBrem;
   vector<float>   *el_vertweight;
   vector<float>   *el_vertx;
   vector<float>   *el_verty;
   vector<float>   *el_vertz;
   vector<float>   *el_trackd0beam;
   vector<float>   *el_trackz0beam;
   vector<float>   *el_tracksigd0beam;
   vector<float>   *el_tracksigz0beam;
   vector<float>   *el_trackd0pv;
   vector<float>   *el_trackz0pv;
   vector<float>   *el_tracksigd0pv;
   vector<float>   *el_tracksigz0pv;
   vector<float>   *el_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *el_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *el_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *el_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *el_trackd0pvunbiased;
   vector<float>   *el_trackz0pvunbiased;
   vector<float>   *el_tracksigd0pvunbiased;
   vector<float>   *el_tracksigz0pvunbiased;
   vector<float>   *el_Unrefittedtrack_d0;
   vector<float>   *el_Unrefittedtrack_z0;
   vector<float>   *el_Unrefittedtrack_phi;
   vector<float>   *el_Unrefittedtrack_theta;
   vector<float>   *el_Unrefittedtrack_qoverp;
   vector<float>   *el_Unrefittedtrack_pt;
   vector<float>   *el_Unrefittedtrack_eta;
   vector<int>     *el_hastrack;
   vector<float>   *el_deltaEmax2;
   vector<float>   *el_calibHitsShowerDepth;
   vector<unsigned int> *el_isIso;
   vector<float>   *el_mvaptcone20;
   vector<float>   *el_mvaptcone30;
   vector<float>   *el_mvaptcone40;
   vector<float>   *el_CaloPointing_eta;
   vector<float>   *el_CaloPointing_sigma_eta;
   vector<float>   *el_CaloPointing_zvertex;
   vector<float>   *el_CaloPointing_sigma_zvertex;
   vector<float>   *el_HPV_eta;
   vector<float>   *el_HPV_sigma_eta;
   vector<float>   *el_HPV_zvertex;
   vector<float>   *el_HPV_sigma_zvertex;
   vector<float>   *el_topoEtcone60;
   vector<float>   *el_ES0_real;
   vector<float>   *el_ES1_real;
   vector<float>   *el_ES2_real;
   vector<float>   *el_ES3_real;
   vector<float>   *el_EcellS0;
   vector<float>   *el_etacellS0;
   vector<float>   *el_Etcone40_ED_corrected;
   vector<float>   *el_Etcone40_corrected;
   vector<float>   *el_topoEtcone20_corrected;
   vector<float>   *el_topoEtcone30_corrected;
   vector<float>   *el_topoEtcone40_corrected;
   vector<float>   *el_ED_median;
   vector<float>   *el_ED_sigma;
   vector<float>   *el_ED_Njets;
   vector<float>   *el_jet_dr;
   vector<float>   *el_jet_E;
   vector<float>   *el_jet_pt;
   vector<float>   *el_jet_m;
   vector<float>   *el_jet_eta;
   vector<float>   *el_jet_phi;
   vector<int>     *el_jet_matched;
   vector<float>   *el_EF_dr;
   vector<int>     *el_EF_index;
   Int_t           ph_n;
   vector<float>   *ph_E;
   vector<float>   *ph_Et;
   vector<float>   *ph_pt;
   vector<float>   *ph_m;
   vector<float>   *ph_eta;
   vector<float>   *ph_phi;
   vector<float>   *ph_px;
   vector<float>   *ph_py;
   vector<float>   *ph_pz;
   vector<int>     *ph_author;
   vector<int>     *ph_isRecovered;
   vector<unsigned int> *ph_isEM;
   vector<unsigned int> *ph_isEMLoose;
   vector<unsigned int> *ph_isEMMedium;
   vector<unsigned int> *ph_isEMTight;
   vector<unsigned int> *ph_OQ;
   vector<int>     *ph_convFlag;
   vector<int>     *ph_isConv;
   vector<int>     *ph_nConv;
   vector<int>     *ph_nSingleTrackConv;
   vector<int>     *ph_nDoubleTrackConv;
   vector<int>     *ph_loose;
   vector<int>     *ph_looseIso;
   vector<int>     *ph_tight;
   vector<int>     *ph_tightIso;
   vector<int>     *ph_looseAR;
   vector<int>     *ph_looseARIso;
   vector<int>     *ph_tightAR;
   vector<int>     *ph_tightARIso;
   vector<int>     *ph_goodOQ;
   vector<float>   *ph_Ethad;
   vector<float>   *ph_Ethad1;
   vector<float>   *ph_E033;
   vector<float>   *ph_f1;
   vector<float>   *ph_f1core;
   vector<float>   *ph_Emins1;
   vector<float>   *ph_fside;
   vector<float>   *ph_Emax2;
   vector<float>   *ph_ws3;
   vector<float>   *ph_wstot;
   vector<float>   *ph_E132;
   vector<float>   *ph_E1152;
   vector<float>   *ph_emaxs1;
   vector<float>   *ph_deltaEs;
   vector<float>   *ph_E233;
   vector<float>   *ph_E237;
   vector<float>   *ph_E277;
   vector<float>   *ph_weta2;
   vector<float>   *ph_f3;
   vector<float>   *ph_f3core;
   vector<float>   *ph_rphiallcalo;
   vector<float>   *ph_Etcone45;
   vector<float>   *ph_Etcone15;
   vector<float>   *ph_Etcone20;
   vector<float>   *ph_Etcone25;
   vector<float>   *ph_Etcone30;
   vector<float>   *ph_Etcone35;
   vector<float>   *ph_Etcone40;
   vector<float>   *ph_ptcone20;
   vector<float>   *ph_ptcone30;
   vector<float>   *ph_ptcone40;
   vector<float>   *ph_nucone20;
   vector<float>   *ph_nucone30;
   vector<float>   *ph_nucone40;
   vector<float>   *ph_Etcone15_pt_corrected;
   vector<float>   *ph_Etcone20_pt_corrected;
   vector<float>   *ph_Etcone25_pt_corrected;
   vector<float>   *ph_Etcone30_pt_corrected;
   vector<float>   *ph_Etcone35_pt_corrected;
   vector<float>   *ph_Etcone40_pt_corrected;
   vector<float>   *ph_convanglematch;
   vector<float>   *ph_convtrackmatch;
   vector<int>     *ph_hasconv;
   vector<float>   *ph_convvtxx;
   vector<float>   *ph_convvtxy;
   vector<float>   *ph_convvtxz;
   vector<float>   *ph_Rconv;
   vector<float>   *ph_zconv;
   vector<float>   *ph_convvtxchi2;
   vector<float>   *ph_pt1conv;
   vector<int>     *ph_convtrk1nBLHits;
   vector<int>     *ph_convtrk1nPixHits;
   vector<int>     *ph_convtrk1nSCTHits;
   vector<int>     *ph_convtrk1nTRTHits;
   vector<float>   *ph_pt2conv;
   vector<int>     *ph_convtrk2nBLHits;
   vector<int>     *ph_convtrk2nPixHits;
   vector<int>     *ph_convtrk2nSCTHits;
   vector<int>     *ph_convtrk2nTRTHits;
   vector<float>   *ph_ptconv;
   vector<float>   *ph_pzconv;
   vector<float>   *ph_reta;
   vector<float>   *ph_rphi;
   vector<float>   *ph_topoEtcone20;
   vector<float>   *ph_topoEtcone30;
   vector<float>   *ph_topoEtcone40;
   vector<float>   *ph_EtringnoisedR03sig2;
   vector<float>   *ph_EtringnoisedR03sig3;
   vector<float>   *ph_EtringnoisedR03sig4;
   vector<double>  *ph_isolationlikelihoodjets;
   vector<double>  *ph_isolationlikelihoodhqelectrons;
   vector<double>  *ph_loglikelihood;
   vector<double>  *ph_photonweight;
   vector<double>  *ph_photonbgweight;
   vector<double>  *ph_neuralnet;
   vector<double>  *ph_Hmatrix;
   vector<double>  *ph_Hmatrix5;
   vector<double>  *ph_adaboost;
   vector<double>  *ph_ringernn;
   vector<float>   *ph_zvertex;
   vector<float>   *ph_errz;
   vector<float>   *ph_etap;
   vector<float>   *ph_depth;
   vector<float>   *ph_cl_E;
   vector<float>   *ph_cl_pt;
   vector<float>   *ph_cl_eta;
   vector<float>   *ph_cl_phi;
   vector<float>   *ph_Es0;
   vector<float>   *ph_etas0;
   vector<float>   *ph_phis0;
   vector<float>   *ph_Es1;
   vector<float>   *ph_etas1;
   vector<float>   *ph_phis1;
   vector<float>   *ph_Es2;
   vector<float>   *ph_etas2;
   vector<float>   *ph_phis2;
   vector<float>   *ph_Es3;
   vector<float>   *ph_etas3;
   vector<float>   *ph_phis3;
   vector<float>   *ph_rawcl_Es0;
   vector<float>   *ph_rawcl_etas0;
   vector<float>   *ph_rawcl_phis0;
   vector<float>   *ph_rawcl_Es1;
   vector<float>   *ph_rawcl_etas1;
   vector<float>   *ph_rawcl_phis1;
   vector<float>   *ph_rawcl_Es2;
   vector<float>   *ph_rawcl_etas2;
   vector<float>   *ph_rawcl_phis2;
   vector<float>   *ph_rawcl_Es3;
   vector<float>   *ph_rawcl_etas3;
   vector<float>   *ph_rawcl_phis3;
   vector<float>   *ph_rawcl_E;
   vector<float>   *ph_rawcl_pt;
   vector<float>   *ph_rawcl_eta;
   vector<float>   *ph_rawcl_phi;
   vector<float>   *ph_convMatchDeltaEta1;
   vector<float>   *ph_convMatchDeltaEta2;
   vector<float>   *ph_convMatchDeltaPhi1;
   vector<float>   *ph_convMatchDeltaPhi2;
   vector<vector<float> > *ph_rings_E;
   vector<int>     *ph_vx_n;
   vector<vector<float> > *ph_vx_x;
   vector<vector<float> > *ph_vx_y;
   vector<vector<float> > *ph_vx_z;
   vector<vector<float> > *ph_vx_px;
   vector<vector<float> > *ph_vx_py;
   vector<vector<float> > *ph_vx_pz;
   vector<vector<float> > *ph_vx_E;
   vector<vector<float> > *ph_vx_m;
   vector<vector<int> > *ph_vx_nTracks;
   vector<vector<float> > *ph_vx_sumPt;
   vector<vector<vector<float> > > *ph_vx_convTrk_weight;
   vector<vector<int> > *ph_vx_convTrk_n;
   vector<vector<vector<int> > > *ph_vx_convTrk_fitter;
   vector<vector<vector<int> > > *ph_vx_convTrk_patternReco1;
   vector<vector<vector<int> > > *ph_vx_convTrk_patternReco2;
   vector<vector<vector<int> > > *ph_vx_convTrk_trackProperties;
   vector<vector<vector<int> > > *ph_vx_convTrk_particleHypothesis;
   vector<vector<vector<int> > > *ph_vx_convTrk_nBLHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTHighTHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixelDeadSensors;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTDeadSensors;
   vector<vector<vector<int> > > *ph_vx_convTrk_nBLSharedHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixSharedHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTSharedHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nBLayerSplitHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixSplitHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nBLayerOutliers;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixelOutliers;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTOutliers;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTOutliers;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTHighTOutliers;
   vector<vector<vector<int> > > *ph_vx_convTrk_nContribPixelLayers;
   vector<vector<vector<int> > > *ph_vx_convTrk_nGangedPixels;
   vector<vector<vector<int> > > *ph_vx_convTrk_nGangedFlaggedFakes;
   vector<vector<vector<int> > > *ph_vx_convTrk_nPixelSpoiltHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTDoubleHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSCTSpoiltHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTDeadStraws;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTRTTubeHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nOutliersOnTrack;
   vector<vector<vector<int> > > *ph_vx_convTrk_standardDeviationOfChi2OS;
   vector<vector<vector<int> > > *ph_vx_convTrk_expectBLayerHit;
   vector<vector<vector<int> > > *ph_vx_convTrk_nMDTHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nCSCEtaHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nCSCPhiHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nRPCEtaHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nRPCPhiHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTGCEtaHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTGCPhiHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nMdtHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nCscEtaHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nCscPhiHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nRpcEtaHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nRpcPhiHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTgcEtaHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nTgcPhiHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_nHits;
   vector<vector<vector<int> > > *ph_vx_convTrk_nHoles;
   vector<vector<vector<int> > > *ph_vx_convTrk_hitPattern;
   vector<vector<vector<int> > > *ph_vx_convTrk_nSiHits;
   vector<vector<vector<float> > > *ph_vx_convTrk_TRTHighTHitsRatio;
   vector<vector<vector<float> > > *ph_vx_convTrk_TRTHighTOutliersRatio;
   vector<vector<vector<float> > > *ph_vx_convTrk_eProbabilityComb;
   vector<vector<vector<float> > > *ph_vx_convTrk_eProbabilityHT;
   vector<vector<vector<float> > > *ph_vx_convTrk_eProbabilityToT;
   vector<vector<vector<float> > > *ph_vx_convTrk_eProbabilityBrem;
   vector<vector<vector<float> > > *ph_vx_convTrk_chi2;
   vector<vector<vector<int> > > *ph_vx_convTrk_ndof;
   vector<float>   *ph_deltaEmax2;
   vector<float>   *ph_calibHitsShowerDepth;
   vector<unsigned int> *ph_isIso;
   vector<float>   *ph_mvaptcone20;
   vector<float>   *ph_mvaptcone30;
   vector<float>   *ph_mvaptcone40;
   vector<float>   *ph_topoEtcone60;
   vector<vector<float> > *ph_vx_Chi2;
   vector<vector<float> > *ph_vx_Dcottheta;
   vector<vector<float> > *ph_vx_Dphi;
   vector<vector<float> > *ph_vx_Dist;
   vector<vector<float> > *ph_vx_DR1R2;
   vector<float>   *ph_CaloPointing_eta;
   vector<float>   *ph_CaloPointing_sigma_eta;
   vector<float>   *ph_CaloPointing_zvertex;
   vector<float>   *ph_CaloPointing_sigma_zvertex;
   vector<float>   *ph_HPV_eta;
   vector<float>   *ph_HPV_sigma_eta;
   vector<float>   *ph_HPV_zvertex;
   vector<float>   *ph_HPV_sigma_zvertex;
   vector<int>     *ph_NN_passes;
   vector<float>   *ph_NN_discriminant;
   vector<float>   *ph_ES0_real;
   vector<float>   *ph_ES1_real;
   vector<float>   *ph_ES2_real;
   vector<float>   *ph_ES3_real;
   vector<float>   *ph_EcellS0;
   vector<float>   *ph_etacellS0;
   vector<float>   *ph_Etcone40_ED_corrected;
   vector<float>   *ph_Etcone40_corrected;
   vector<float>   *ph_topoEtcone20_corrected;
   vector<float>   *ph_topoEtcone30_corrected;
   vector<float>   *ph_topoEtcone40_corrected;
   vector<float>   *ph_ED_median;
   vector<float>   *ph_ED_sigma;
   vector<float>   *ph_ED_Njets;
   vector<float>   *ph_convIP;
   vector<float>   *ph_convIPRev;
   vector<float>   *ph_jet_dr;
   vector<float>   *ph_jet_E;
   vector<float>   *ph_jet_pt;
   vector<float>   *ph_jet_m;
   vector<float>   *ph_jet_eta;
   vector<float>   *ph_jet_phi;
   vector<int>     *ph_jet_matched;
   vector<float>   *ph_topodr;
   vector<float>   *ph_topopt;
   vector<float>   *ph_topoeta;
   vector<float>   *ph_topophi;
   vector<int>     *ph_topomatched;
   vector<float>   *ph_topoEMdr;
   vector<float>   *ph_topoEMpt;
   vector<float>   *ph_topoEMeta;
   vector<float>   *ph_topoEMphi;
   vector<int>     *ph_topoEMmatched;
   vector<int>     *ph_el_index;
   vector<float>   *ph_EF_dr;
   vector<int>     *ph_EF_index;
   vector<float>   *ph_L2_dr;
   vector<int>     *ph_L2_index;
   vector<float>   *ph_L1_dr;
   vector<int>     *ph_L1_index;
   Int_t           mu_staco_n;
   vector<float>   *mu_staco_E;
   vector<float>   *mu_staco_pt;
   vector<float>   *mu_staco_m;
   vector<float>   *mu_staco_eta;
   vector<float>   *mu_staco_phi;
   vector<float>   *mu_staco_px;
   vector<float>   *mu_staco_py;
   vector<float>   *mu_staco_pz;
   vector<float>   *mu_staco_charge;
   vector<unsigned short> *mu_staco_allauthor;
   vector<int>     *mu_staco_author;
   vector<float>   *mu_staco_beta;
   vector<float>   *mu_staco_isMuonLikelihood;
   vector<float>   *mu_staco_matchchi2;
   vector<int>     *mu_staco_matchndof;
   vector<float>   *mu_staco_etcone20;
   vector<float>   *mu_staco_etcone30;
   vector<float>   *mu_staco_etcone40;
   vector<float>   *mu_staco_nucone20;
   vector<float>   *mu_staco_nucone30;
   vector<float>   *mu_staco_nucone40;
   vector<float>   *mu_staco_ptcone20;
   vector<float>   *mu_staco_ptcone30;
   vector<float>   *mu_staco_ptcone40;
   vector<float>   *mu_staco_scatteringCurvatureSignificance;
   vector<float>   *mu_staco_scatteringNeighbourSignificance;
   vector<float>   *mu_staco_momentumBalanceSignificance;
   vector<float>   *mu_staco_energyLossPar;
   vector<float>   *mu_staco_energyLossErr;
   vector<float>   *mu_staco_etCore;
   vector<float>   *mu_staco_energyLossType;
   vector<unsigned short> *mu_staco_caloMuonIdTag;
   vector<double>  *mu_staco_caloLRLikelihood;
   vector<int>     *mu_staco_bestMatch;
   vector<int>     *mu_staco_isStandAloneMuon;
   vector<int>     *mu_staco_isCombinedMuon;
   vector<int>     *mu_staco_isLowPtReconstructedMuon;
   vector<int>     *mu_staco_isSegmentTaggedMuon;
   vector<int>     *mu_staco_isCaloMuonId;
   vector<int>     *mu_staco_alsoFoundByLowPt;
   vector<int>     *mu_staco_alsoFoundByCaloMuonId;
   vector<int>     *mu_staco_isSiliconAssociatedForwardMuon;
   vector<int>     *mu_staco_loose;
   vector<int>     *mu_staco_medium;
   vector<int>     *mu_staco_tight;
   vector<float>   *mu_staco_d0_exPV;
   vector<float>   *mu_staco_z0_exPV;
   vector<float>   *mu_staco_phi_exPV;
   vector<float>   *mu_staco_theta_exPV;
   vector<float>   *mu_staco_qoverp_exPV;
   vector<float>   *mu_staco_cb_d0_exPV;
   vector<float>   *mu_staco_cb_z0_exPV;
   vector<float>   *mu_staco_cb_phi_exPV;
   vector<float>   *mu_staco_cb_theta_exPV;
   vector<float>   *mu_staco_cb_qoverp_exPV;
   vector<float>   *mu_staco_id_d0_exPV;
   vector<float>   *mu_staco_id_z0_exPV;
   vector<float>   *mu_staco_id_phi_exPV;
   vector<float>   *mu_staco_id_theta_exPV;
   vector<float>   *mu_staco_id_qoverp_exPV;
   vector<float>   *mu_staco_me_d0_exPV;
   vector<float>   *mu_staco_me_z0_exPV;
   vector<float>   *mu_staco_me_phi_exPV;
   vector<float>   *mu_staco_me_theta_exPV;
   vector<float>   *mu_staco_me_qoverp_exPV;
   vector<float>   *mu_staco_ie_d0_exPV;
   vector<float>   *mu_staco_ie_z0_exPV;
   vector<float>   *mu_staco_ie_phi_exPV;
   vector<float>   *mu_staco_ie_theta_exPV;
   vector<float>   *mu_staco_ie_qoverp_exPV;
   vector<vector<int> > *mu_staco_SpaceTime_detID;
   vector<vector<float> > *mu_staco_SpaceTime_t;
   vector<vector<float> > *mu_staco_SpaceTime_tError;
   vector<vector<float> > *mu_staco_SpaceTime_weight;
   vector<vector<float> > *mu_staco_SpaceTime_x;
   vector<vector<float> > *mu_staco_SpaceTime_y;
   vector<vector<float> > *mu_staco_SpaceTime_z;
   vector<float>   *mu_staco_cov_d0_exPV;
   vector<float>   *mu_staco_cov_z0_exPV;
   vector<float>   *mu_staco_cov_phi_exPV;
   vector<float>   *mu_staco_cov_theta_exPV;
   vector<float>   *mu_staco_cov_qoverp_exPV;
   vector<float>   *mu_staco_cov_d0_z0_exPV;
   vector<float>   *mu_staco_cov_d0_phi_exPV;
   vector<float>   *mu_staco_cov_d0_theta_exPV;
   vector<float>   *mu_staco_cov_d0_qoverp_exPV;
   vector<float>   *mu_staco_cov_z0_phi_exPV;
   vector<float>   *mu_staco_cov_z0_theta_exPV;
   vector<float>   *mu_staco_cov_z0_qoverp_exPV;
   vector<float>   *mu_staco_cov_phi_theta_exPV;
   vector<float>   *mu_staco_cov_phi_qoverp_exPV;
   vector<float>   *mu_staco_cov_theta_qoverp_exPV;
   vector<float>   *mu_staco_id_cov_d0_exPV;
   vector<float>   *mu_staco_id_cov_z0_exPV;
   vector<float>   *mu_staco_id_cov_phi_exPV;
   vector<float>   *mu_staco_id_cov_theta_exPV;
   vector<float>   *mu_staco_id_cov_qoverp_exPV;
   vector<float>   *mu_staco_id_cov_d0_z0_exPV;
   vector<float>   *mu_staco_id_cov_d0_phi_exPV;
   vector<float>   *mu_staco_id_cov_d0_theta_exPV;
   vector<float>   *mu_staco_id_cov_d0_qoverp_exPV;
   vector<float>   *mu_staco_id_cov_z0_phi_exPV;
   vector<float>   *mu_staco_id_cov_z0_theta_exPV;
   vector<float>   *mu_staco_id_cov_z0_qoverp_exPV;
   vector<float>   *mu_staco_id_cov_phi_theta_exPV;
   vector<float>   *mu_staco_id_cov_phi_qoverp_exPV;
   vector<float>   *mu_staco_id_cov_theta_qoverp_exPV;
   vector<float>   *mu_staco_me_cov_d0_exPV;
   vector<float>   *mu_staco_me_cov_z0_exPV;
   vector<float>   *mu_staco_me_cov_phi_exPV;
   vector<float>   *mu_staco_me_cov_theta_exPV;
   vector<float>   *mu_staco_me_cov_qoverp_exPV;
   vector<float>   *mu_staco_me_cov_d0_z0_exPV;
   vector<float>   *mu_staco_me_cov_d0_phi_exPV;
   vector<float>   *mu_staco_me_cov_d0_theta_exPV;
   vector<float>   *mu_staco_me_cov_d0_qoverp_exPV;
   vector<float>   *mu_staco_me_cov_z0_phi_exPV;
   vector<float>   *mu_staco_me_cov_z0_theta_exPV;
   vector<float>   *mu_staco_me_cov_z0_qoverp_exPV;
   vector<float>   *mu_staco_me_cov_phi_theta_exPV;
   vector<float>   *mu_staco_me_cov_phi_qoverp_exPV;
   vector<float>   *mu_staco_me_cov_theta_qoverp_exPV;
   vector<float>   *mu_staco_ms_d0;
   vector<float>   *mu_staco_ms_z0;
   vector<float>   *mu_staco_ms_phi;
   vector<float>   *mu_staco_ms_theta;
   vector<float>   *mu_staco_ms_qoverp;
   vector<float>   *mu_staco_id_d0;
   vector<float>   *mu_staco_id_z0;
   vector<float>   *mu_staco_id_phi;
   vector<float>   *mu_staco_id_theta;
   vector<float>   *mu_staco_id_qoverp;
   vector<float>   *mu_staco_me_d0;
   vector<float>   *mu_staco_me_z0;
   vector<float>   *mu_staco_me_phi;
   vector<float>   *mu_staco_me_theta;
   vector<float>   *mu_staco_me_qoverp;
   vector<float>   *mu_staco_ie_d0;
   vector<float>   *mu_staco_ie_z0;
   vector<float>   *mu_staco_ie_phi;
   vector<float>   *mu_staco_ie_theta;
   vector<float>   *mu_staco_ie_qoverp;
   vector<int>     *mu_staco_nOutliersOnTrack;
   vector<int>     *mu_staco_nBLHits;
   vector<int>     *mu_staco_nPixHits;
   vector<int>     *mu_staco_nSCTHits;
   vector<int>     *mu_staco_nTRTHits;
   vector<int>     *mu_staco_nTRTHighTHits;
   vector<int>     *mu_staco_nBLSharedHits;
   vector<int>     *mu_staco_nPixSharedHits;
   vector<int>     *mu_staco_nPixHoles;
   vector<int>     *mu_staco_nSCTSharedHits;
   vector<int>     *mu_staco_nSCTHoles;
   vector<int>     *mu_staco_nTRTOutliers;
   vector<int>     *mu_staco_nTRTHighTOutliers;
   vector<int>     *mu_staco_nGangedPixels;
   vector<int>     *mu_staco_nPixelDeadSensors;
   vector<int>     *mu_staco_nSCTDeadSensors;
   vector<int>     *mu_staco_nTRTDeadStraws;
   vector<int>     *mu_staco_expectBLayerHit;
   vector<int>     *mu_staco_nMDTHits;
   vector<int>     *mu_staco_nMDTHoles;
   vector<int>     *mu_staco_nCSCEtaHits;
   vector<int>     *mu_staco_nCSCEtaHoles;
   vector<int>     *mu_staco_nCSCUnspoiledEtaHits;
   vector<int>     *mu_staco_nCSCPhiHits;
   vector<int>     *mu_staco_nCSCPhiHoles;
   vector<int>     *mu_staco_nRPCEtaHits;
   vector<int>     *mu_staco_nRPCEtaHoles;
   vector<int>     *mu_staco_nRPCPhiHits;
   vector<int>     *mu_staco_nRPCPhiHoles;
   vector<int>     *mu_staco_nTGCEtaHits;
   vector<int>     *mu_staco_nTGCEtaHoles;
   vector<int>     *mu_staco_nTGCPhiHits;
   vector<int>     *mu_staco_nTGCPhiHoles;
   vector<int>     *mu_staco_nprecisionLayers;
   vector<int>     *mu_staco_nprecisionHoleLayers;
   vector<int>     *mu_staco_nphiLayers;
   vector<int>     *mu_staco_ntrigEtaLayers;
   vector<int>     *mu_staco_nphiHoleLayers;
   vector<int>     *mu_staco_ntrigEtaHoleLayers;
   vector<int>     *mu_staco_nMDTBIHits;
   vector<int>     *mu_staco_nMDTBMHits;
   vector<int>     *mu_staco_nMDTBOHits;
   vector<int>     *mu_staco_nMDTBEEHits;
   vector<int>     *mu_staco_nMDTBIS78Hits;
   vector<int>     *mu_staco_nMDTEIHits;
   vector<int>     *mu_staco_nMDTEMHits;
   vector<int>     *mu_staco_nMDTEOHits;
   vector<int>     *mu_staco_nMDTEEHits;
   vector<int>     *mu_staco_nRPCLayer1EtaHits;
   vector<int>     *mu_staco_nRPCLayer2EtaHits;
   vector<int>     *mu_staco_nRPCLayer3EtaHits;
   vector<int>     *mu_staco_nRPCLayer1PhiHits;
   vector<int>     *mu_staco_nRPCLayer2PhiHits;
   vector<int>     *mu_staco_nRPCLayer3PhiHits;
   vector<int>     *mu_staco_nTGCLayer1EtaHits;
   vector<int>     *mu_staco_nTGCLayer2EtaHits;
   vector<int>     *mu_staco_nTGCLayer3EtaHits;
   vector<int>     *mu_staco_nTGCLayer4EtaHits;
   vector<int>     *mu_staco_nTGCLayer1PhiHits;
   vector<int>     *mu_staco_nTGCLayer2PhiHits;
   vector<int>     *mu_staco_nTGCLayer3PhiHits;
   vector<int>     *mu_staco_nTGCLayer4PhiHits;
   vector<int>     *mu_staco_barrelSectors;
   vector<int>     *mu_staco_endcapSectors;
   vector<float>   *mu_staco_trackd0;
   vector<float>   *mu_staco_trackz0;
   vector<float>   *mu_staco_trackphi;
   vector<float>   *mu_staco_tracktheta;
   vector<float>   *mu_staco_trackqoverp;
   vector<float>   *mu_staco_trackcov_d0;
   vector<float>   *mu_staco_trackcov_z0;
   vector<float>   *mu_staco_trackcov_phi;
   vector<float>   *mu_staco_trackcov_theta;
   vector<float>   *mu_staco_trackcov_qoverp;
   vector<float>   *mu_staco_trackcov_d0_z0;
   vector<float>   *mu_staco_trackcov_d0_phi;
   vector<float>   *mu_staco_trackcov_d0_theta;
   vector<float>   *mu_staco_trackcov_d0_qoverp;
   vector<float>   *mu_staco_trackcov_z0_phi;
   vector<float>   *mu_staco_trackcov_z0_theta;
   vector<float>   *mu_staco_trackcov_z0_qoverp;
   vector<float>   *mu_staco_trackcov_phi_theta;
   vector<float>   *mu_staco_trackcov_phi_qoverp;
   vector<float>   *mu_staco_trackcov_theta_qoverp;
   vector<float>   *mu_staco_trackfitchi2;
   vector<int>     *mu_staco_trackfitndof;
   vector<int>     *mu_staco_hastrack;
   vector<float>   *mu_staco_trackd0beam;
   vector<float>   *mu_staco_trackz0beam;
   vector<float>   *mu_staco_tracksigd0beam;
   vector<float>   *mu_staco_tracksigz0beam;
   vector<float>   *mu_staco_trackd0pv;
   vector<float>   *mu_staco_trackz0pv;
   vector<float>   *mu_staco_tracksigd0pv;
   vector<float>   *mu_staco_tracksigz0pv;
   vector<float>   *mu_staco_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *mu_staco_trackd0pvunbiased;
   vector<float>   *mu_staco_trackz0pvunbiased;
   vector<float>   *mu_staco_tracksigd0pvunbiased;
   vector<float>   *mu_staco_tracksigz0pvunbiased;
   vector<int>     *mu_staco_EFCB_index;
   vector<int>     *mu_staco_EFMG_index;
   vector<int>     *mu_staco_EFME_index;
   Int_t           mu_calo_n;
   vector<float>   *mu_calo_E;
   vector<float>   *mu_calo_pt;
   vector<float>   *mu_calo_m;
   vector<float>   *mu_calo_eta;
   vector<float>   *mu_calo_phi;
   vector<float>   *mu_calo_px;
   vector<float>   *mu_calo_py;
   vector<float>   *mu_calo_pz;
   vector<float>   *mu_calo_charge;
   vector<unsigned short> *mu_calo_allauthor;
   vector<int>     *mu_calo_author;
   vector<float>   *mu_calo_beta;
   vector<float>   *mu_calo_isMuonLikelihood;
   vector<float>   *mu_calo_matchchi2;
   vector<int>     *mu_calo_matchndof;
   vector<float>   *mu_calo_etcone20;
   vector<float>   *mu_calo_etcone30;
   vector<float>   *mu_calo_etcone40;
   vector<float>   *mu_calo_nucone20;
   vector<float>   *mu_calo_nucone30;
   vector<float>   *mu_calo_nucone40;
   vector<float>   *mu_calo_ptcone20;
   vector<float>   *mu_calo_ptcone30;
   vector<float>   *mu_calo_ptcone40;
   vector<float>   *mu_calo_scatteringCurvatureSignificance;
   vector<float>   *mu_calo_scatteringNeighbourSignificance;
   vector<float>   *mu_calo_momentumBalanceSignificance;
   vector<float>   *mu_calo_energyLossPar;
   vector<float>   *mu_calo_energyLossErr;
   vector<float>   *mu_calo_etCore;
   vector<float>   *mu_calo_energyLossType;
   vector<unsigned short> *mu_calo_caloMuonIdTag;
   vector<double>  *mu_calo_caloLRLikelihood;
   vector<int>     *mu_calo_bestMatch;
   vector<int>     *mu_calo_isStandAloneMuon;
   vector<int>     *mu_calo_isCombinedMuon;
   vector<int>     *mu_calo_isLowPtReconstructedMuon;
   vector<int>     *mu_calo_isSegmentTaggedMuon;
   vector<int>     *mu_calo_isCaloMuonId;
   vector<int>     *mu_calo_alsoFoundByLowPt;
   vector<int>     *mu_calo_alsoFoundByCaloMuonId;
   vector<int>     *mu_calo_isSiliconAssociatedForwardMuon;
   vector<int>     *mu_calo_loose;
   vector<int>     *mu_calo_medium;
   vector<int>     *mu_calo_tight;
   vector<float>   *mu_calo_d0_exPV;
   vector<float>   *mu_calo_z0_exPV;
   vector<float>   *mu_calo_phi_exPV;
   vector<float>   *mu_calo_theta_exPV;
   vector<float>   *mu_calo_qoverp_exPV;
   vector<float>   *mu_calo_cb_d0_exPV;
   vector<float>   *mu_calo_cb_z0_exPV;
   vector<float>   *mu_calo_cb_phi_exPV;
   vector<float>   *mu_calo_cb_theta_exPV;
   vector<float>   *mu_calo_cb_qoverp_exPV;
   vector<float>   *mu_calo_id_d0_exPV;
   vector<float>   *mu_calo_id_z0_exPV;
   vector<float>   *mu_calo_id_phi_exPV;
   vector<float>   *mu_calo_id_theta_exPV;
   vector<float>   *mu_calo_id_qoverp_exPV;
   vector<float>   *mu_calo_me_d0_exPV;
   vector<float>   *mu_calo_me_z0_exPV;
   vector<float>   *mu_calo_me_phi_exPV;
   vector<float>   *mu_calo_me_theta_exPV;
   vector<float>   *mu_calo_me_qoverp_exPV;
   vector<float>   *mu_calo_ie_d0_exPV;
   vector<float>   *mu_calo_ie_z0_exPV;
   vector<float>   *mu_calo_ie_phi_exPV;
   vector<float>   *mu_calo_ie_theta_exPV;
   vector<float>   *mu_calo_ie_qoverp_exPV;
   vector<vector<int> > *mu_calo_SpaceTime_detID;
   vector<vector<float> > *mu_calo_SpaceTime_t;
   vector<vector<float> > *mu_calo_SpaceTime_tError;
   vector<vector<float> > *mu_calo_SpaceTime_weight;
   vector<vector<float> > *mu_calo_SpaceTime_x;
   vector<vector<float> > *mu_calo_SpaceTime_y;
   vector<vector<float> > *mu_calo_SpaceTime_z;
   vector<float>   *mu_calo_cov_d0_exPV;
   vector<float>   *mu_calo_cov_z0_exPV;
   vector<float>   *mu_calo_cov_phi_exPV;
   vector<float>   *mu_calo_cov_theta_exPV;
   vector<float>   *mu_calo_cov_qoverp_exPV;
   vector<float>   *mu_calo_cov_d0_z0_exPV;
   vector<float>   *mu_calo_cov_d0_phi_exPV;
   vector<float>   *mu_calo_cov_d0_theta_exPV;
   vector<float>   *mu_calo_cov_d0_qoverp_exPV;
   vector<float>   *mu_calo_cov_z0_phi_exPV;
   vector<float>   *mu_calo_cov_z0_theta_exPV;
   vector<float>   *mu_calo_cov_z0_qoverp_exPV;
   vector<float>   *mu_calo_cov_phi_theta_exPV;
   vector<float>   *mu_calo_cov_phi_qoverp_exPV;
   vector<float>   *mu_calo_cov_theta_qoverp_exPV;
   vector<float>   *mu_calo_id_cov_d0_exPV;
   vector<float>   *mu_calo_id_cov_z0_exPV;
   vector<float>   *mu_calo_id_cov_phi_exPV;
   vector<float>   *mu_calo_id_cov_theta_exPV;
   vector<float>   *mu_calo_id_cov_qoverp_exPV;
   vector<float>   *mu_calo_id_cov_d0_z0_exPV;
   vector<float>   *mu_calo_id_cov_d0_phi_exPV;
   vector<float>   *mu_calo_id_cov_d0_theta_exPV;
   vector<float>   *mu_calo_id_cov_d0_qoverp_exPV;
   vector<float>   *mu_calo_id_cov_z0_phi_exPV;
   vector<float>   *mu_calo_id_cov_z0_theta_exPV;
   vector<float>   *mu_calo_id_cov_z0_qoverp_exPV;
   vector<float>   *mu_calo_id_cov_phi_theta_exPV;
   vector<float>   *mu_calo_id_cov_phi_qoverp_exPV;
   vector<float>   *mu_calo_id_cov_theta_qoverp_exPV;
   vector<float>   *mu_calo_me_cov_d0_exPV;
   vector<float>   *mu_calo_me_cov_z0_exPV;
   vector<float>   *mu_calo_me_cov_phi_exPV;
   vector<float>   *mu_calo_me_cov_theta_exPV;
   vector<float>   *mu_calo_me_cov_qoverp_exPV;
   vector<float>   *mu_calo_me_cov_d0_z0_exPV;
   vector<float>   *mu_calo_me_cov_d0_phi_exPV;
   vector<float>   *mu_calo_me_cov_d0_theta_exPV;
   vector<float>   *mu_calo_me_cov_d0_qoverp_exPV;
   vector<float>   *mu_calo_me_cov_z0_phi_exPV;
   vector<float>   *mu_calo_me_cov_z0_theta_exPV;
   vector<float>   *mu_calo_me_cov_z0_qoverp_exPV;
   vector<float>   *mu_calo_me_cov_phi_theta_exPV;
   vector<float>   *mu_calo_me_cov_phi_qoverp_exPV;
   vector<float>   *mu_calo_me_cov_theta_qoverp_exPV;
   vector<float>   *mu_calo_ms_d0;
   vector<float>   *mu_calo_ms_z0;
   vector<float>   *mu_calo_ms_phi;
   vector<float>   *mu_calo_ms_theta;
   vector<float>   *mu_calo_ms_qoverp;
   vector<float>   *mu_calo_id_d0;
   vector<float>   *mu_calo_id_z0;
   vector<float>   *mu_calo_id_phi;
   vector<float>   *mu_calo_id_theta;
   vector<float>   *mu_calo_id_qoverp;
   vector<float>   *mu_calo_me_d0;
   vector<float>   *mu_calo_me_z0;
   vector<float>   *mu_calo_me_phi;
   vector<float>   *mu_calo_me_theta;
   vector<float>   *mu_calo_me_qoverp;
   vector<float>   *mu_calo_ie_d0;
   vector<float>   *mu_calo_ie_z0;
   vector<float>   *mu_calo_ie_phi;
   vector<float>   *mu_calo_ie_theta;
   vector<float>   *mu_calo_ie_qoverp;
   vector<int>     *mu_calo_nOutliersOnTrack;
   vector<int>     *mu_calo_nBLHits;
   vector<int>     *mu_calo_nPixHits;
   vector<int>     *mu_calo_nSCTHits;
   vector<int>     *mu_calo_nTRTHits;
   vector<int>     *mu_calo_nTRTHighTHits;
   vector<int>     *mu_calo_nBLSharedHits;
   vector<int>     *mu_calo_nPixSharedHits;
   vector<int>     *mu_calo_nPixHoles;
   vector<int>     *mu_calo_nSCTSharedHits;
   vector<int>     *mu_calo_nSCTHoles;
   vector<int>     *mu_calo_nTRTOutliers;
   vector<int>     *mu_calo_nTRTHighTOutliers;
   vector<int>     *mu_calo_nGangedPixels;
   vector<int>     *mu_calo_nPixelDeadSensors;
   vector<int>     *mu_calo_nSCTDeadSensors;
   vector<int>     *mu_calo_nTRTDeadStraws;
   vector<int>     *mu_calo_expectBLayerHit;
   vector<int>     *mu_calo_nMDTHits;
   vector<int>     *mu_calo_nMDTHoles;
   vector<int>     *mu_calo_nCSCEtaHits;
   vector<int>     *mu_calo_nCSCEtaHoles;
   vector<int>     *mu_calo_nCSCUnspoiledEtaHits;
   vector<int>     *mu_calo_nCSCPhiHits;
   vector<int>     *mu_calo_nCSCPhiHoles;
   vector<int>     *mu_calo_nRPCEtaHits;
   vector<int>     *mu_calo_nRPCEtaHoles;
   vector<int>     *mu_calo_nRPCPhiHits;
   vector<int>     *mu_calo_nRPCPhiHoles;
   vector<int>     *mu_calo_nTGCEtaHits;
   vector<int>     *mu_calo_nTGCEtaHoles;
   vector<int>     *mu_calo_nTGCPhiHits;
   vector<int>     *mu_calo_nTGCPhiHoles;
   vector<int>     *mu_calo_nprecisionLayers;
   vector<int>     *mu_calo_nprecisionHoleLayers;
   vector<int>     *mu_calo_nphiLayers;
   vector<int>     *mu_calo_ntrigEtaLayers;
   vector<int>     *mu_calo_nphiHoleLayers;
   vector<int>     *mu_calo_ntrigEtaHoleLayers;
   vector<int>     *mu_calo_nMDTBIHits;
   vector<int>     *mu_calo_nMDTBMHits;
   vector<int>     *mu_calo_nMDTBOHits;
   vector<int>     *mu_calo_nMDTBEEHits;
   vector<int>     *mu_calo_nMDTBIS78Hits;
   vector<int>     *mu_calo_nMDTEIHits;
   vector<int>     *mu_calo_nMDTEMHits;
   vector<int>     *mu_calo_nMDTEOHits;
   vector<int>     *mu_calo_nMDTEEHits;
   vector<int>     *mu_calo_nRPCLayer1EtaHits;
   vector<int>     *mu_calo_nRPCLayer2EtaHits;
   vector<int>     *mu_calo_nRPCLayer3EtaHits;
   vector<int>     *mu_calo_nRPCLayer1PhiHits;
   vector<int>     *mu_calo_nRPCLayer2PhiHits;
   vector<int>     *mu_calo_nRPCLayer3PhiHits;
   vector<int>     *mu_calo_nTGCLayer1EtaHits;
   vector<int>     *mu_calo_nTGCLayer2EtaHits;
   vector<int>     *mu_calo_nTGCLayer3EtaHits;
   vector<int>     *mu_calo_nTGCLayer4EtaHits;
   vector<int>     *mu_calo_nTGCLayer1PhiHits;
   vector<int>     *mu_calo_nTGCLayer2PhiHits;
   vector<int>     *mu_calo_nTGCLayer3PhiHits;
   vector<int>     *mu_calo_nTGCLayer4PhiHits;
   vector<int>     *mu_calo_barrelSectors;
   vector<int>     *mu_calo_endcapSectors;
   vector<float>   *mu_calo_trackd0;
   vector<float>   *mu_calo_trackz0;
   vector<float>   *mu_calo_trackphi;
   vector<float>   *mu_calo_tracktheta;
   vector<float>   *mu_calo_trackqoverp;
   vector<float>   *mu_calo_trackcov_d0;
   vector<float>   *mu_calo_trackcov_z0;
   vector<float>   *mu_calo_trackcov_phi;
   vector<float>   *mu_calo_trackcov_theta;
   vector<float>   *mu_calo_trackcov_qoverp;
   vector<float>   *mu_calo_trackcov_d0_z0;
   vector<float>   *mu_calo_trackcov_d0_phi;
   vector<float>   *mu_calo_trackcov_d0_theta;
   vector<float>   *mu_calo_trackcov_d0_qoverp;
   vector<float>   *mu_calo_trackcov_z0_phi;
   vector<float>   *mu_calo_trackcov_z0_theta;
   vector<float>   *mu_calo_trackcov_z0_qoverp;
   vector<float>   *mu_calo_trackcov_phi_theta;
   vector<float>   *mu_calo_trackcov_phi_qoverp;
   vector<float>   *mu_calo_trackcov_theta_qoverp;
   vector<float>   *mu_calo_trackfitchi2;
   vector<int>     *mu_calo_trackfitndof;
   vector<int>     *mu_calo_hastrack;
   vector<float>   *mu_calo_trackd0beam;
   vector<float>   *mu_calo_trackz0beam;
   vector<float>   *mu_calo_tracksigd0beam;
   vector<float>   *mu_calo_tracksigz0beam;
   vector<float>   *mu_calo_trackd0pv;
   vector<float>   *mu_calo_trackz0pv;
   vector<float>   *mu_calo_tracksigd0pv;
   vector<float>   *mu_calo_tracksigz0pv;
   vector<float>   *mu_calo_trackIPEstimate_d0_biasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_z0_biasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_sigd0_biasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_sigz0_biasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_d0_unbiasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_z0_unbiasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased;
   vector<float>   *mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased;
   vector<float>   *mu_calo_trackd0pvunbiased;
   vector<float>   *mu_calo_trackz0pvunbiased;
   vector<float>   *mu_calo_tracksigd0pvunbiased;
   vector<float>   *mu_calo_tracksigz0pvunbiased;
   vector<int>     *mu_calo_EFCB_index;
   vector<int>     *mu_calo_EFMG_index;
   vector<int>     *mu_calo_EFME_index;
   Float_t         MET_RefFinal_phi;
   Float_t         MET_RefFinal_et;
   Float_t         MET_RefFinal_sumet;
   Float_t         MET_RefFinal_etx_CentralReg;
   Float_t         MET_RefFinal_ety_CentralReg;
   Float_t         MET_RefFinal_sumet_CentralReg;
   Float_t         MET_RefFinal_etx_EndcapRegion;
   Float_t         MET_RefFinal_ety_EndcapRegion;
   Float_t         MET_RefFinal_sumet_EndcapRegion;
   Float_t         MET_RefFinal_etx_ForwardReg;
   Float_t         MET_RefFinal_ety_ForwardReg;
   Float_t         MET_RefFinal_sumet_ForwardReg;
   Float_t         MET_MuonBoy_phi;
   Float_t         MET_MuonBoy_et;
   Float_t         MET_RefMuon_Track_phi;
   Float_t         MET_RefMuon_Track_et;
   Float_t         MET_LocHadTopo_etx_CentralReg;
   Float_t         MET_LocHadTopo_ety_CentralReg;
   Float_t         MET_LocHadTopo_etx_EndcapRegion;
   Float_t         MET_LocHadTopo_ety_EndcapRegion;
   Float_t         MET_LocHadTopo_etx_ForwardReg;
   Float_t         MET_LocHadTopo_ety_ForwardReg;
   Int_t           vxp_n;
   vector<float>   *vxp_x;
   vector<float>   *vxp_y;
   vector<float>   *vxp_z;
   vector<float>   *vxp_cov_x;
   vector<float>   *vxp_cov_y;
   vector<float>   *vxp_cov_z;
   vector<float>   *vxp_cov_xy;
   vector<float>   *vxp_cov_xz;
   vector<float>   *vxp_cov_yz;
   vector<int>     *vxp_type;
   vector<float>   *vxp_chi2;
   vector<int>     *vxp_ndof;
   vector<float>   *vxp_px;
   vector<float>   *vxp_py;
   vector<float>   *vxp_pz;
   vector<float>   *vxp_E;
   vector<float>   *vxp_m;
   vector<int>     *vxp_nTracks;
   vector<float>   *vxp_sumPt;
   vector<vector<float> > *vxp_trk_weight;
   vector<int>     *vxp_trk_n;
   vector<vector<int> > *vxp_trk_index;
   UInt_t          trig_DB_SMK;
   vector<float>   *trig_L1_mu_eta;
   vector<float>   *trig_L1_mu_phi;
   vector<string>  *trig_L1_mu_thrName;
   vector<float>   *trig_L2_muonfeature_eta;
   vector<float>   *trig_L2_muonfeature_phi;
   vector<float>   *trig_L2_combmuonfeature_eta;
   vector<float>   *trig_L2_combmuonfeature_phi;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_pt;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_eta;
   vector<vector<float> > *trig_EF_trigmuonef_track_SA_phi;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_pt;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_eta;
   vector<vector<float> > *trig_EF_trigmuonef_track_CB_phi;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_pt;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_eta;
   vector<vector<float> > *trig_EF_trigmugirl_track_CB_phi;
   Int_t           trig_Nav_n;
   vector<short>   *trig_Nav_chain_ChainId;
   vector<vector<int> > *trig_Nav_chain_RoIType;
   vector<vector<int> > *trig_Nav_chain_RoIIndex;
   vector<int>     *trig_RoI_L2_mu_MuonFeature;
   vector<int>     *trig_RoI_L2_mu_CombinedMuonFeature;
   vector<int>     *trig_RoI_L2_mu_CombinedMuonFeatureStatus;
   vector<int>     *trig_RoI_L2_mu_Muon_ROI;
   vector<int>     *trig_RoI_EF_mu_Muon_ROI;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainer;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFIsolationContainer;
   vector<vector<int> > *trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus;
   Int_t           trig_EF_el_n;
   vector<float>   *trig_EF_el_eta;
   vector<float>   *trig_EF_el_phi;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_Electrons;
   vector<vector<int> > *trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus;
   Double_t        Eta1;
   Double_t        Eta2;
   Double_t        Eta3;
   Double_t        Eta4;
   Double_t        Lep1CaloIso;
   Double_t        Lep1Charge;
   Double_t        Lep1Eta;
   Double_t        Lep1Fla;
   Double_t        Lep1Phi;
   Double_t        Lep1Pt;
   Double_t        Lep1TrkIso;
   Double_t        Lep1d0;
   Double_t        Lep1d0Sig;
   Double_t        Lep1z0;
   Double_t        Lep1z0Sig;
   Double_t        Lep2CaloIso;
   Double_t        Lep2Charge;
   Double_t        Lep2Eta;
   Double_t        Lep2Fla;
   Double_t        Lep2Phi;
   Double_t        Lep2Pt;
   Double_t        Lep2TrkIso;
   Double_t        Lep2d0;
   Double_t        Lep2d0Sig;
   Double_t        Lep2z0;
   Double_t        Lep2z0Sig;
   Double_t        Lep3CaloIso;
   Double_t        Lep3Charge;
   Double_t        Lep3Eta;
   Double_t        Lep3Fla;
   Double_t        Lep3Phi;
   Double_t        Lep3Pt;
   Double_t        Lep3TrkIso;
   Double_t        Lep3d0;
   Double_t        Lep3d0Sig;
   Double_t        Lep3z0;
   Double_t        Lep3z0Sig;
   Double_t        Lep4CaloIso;
   Double_t        Lep4Charge;
   Double_t        Lep4Eta;
   Double_t        Lep4Fla;
   Double_t        Lep4Phi;
   Double_t        Lep4Pt;
   Double_t        Lep4TrkIso;
   Double_t        Lep4d0;
   Double_t        Lep4d0Sig;
   Double_t        Lep4z0;
   Double_t        Lep4z0Sig;
   Double_t        LepEta;
   Double_t        LepPhi;
   Double_t        LepPt;
   Double_t        MZ1;
   Double_t        MZ2;
   Double_t        MZZ;
   Double_t        N_vx;
   Double_t        Phi1;
   Double_t        Phi2;
   Double_t        Phi3;
   Double_t        Phi4;
   Double_t        Pt1;
   Double_t        Pt2;
   Double_t        Pt3;
   Double_t        Pt4;
   Double_t        Z1Eta;
   Double_t        Z1Phi;
   Double_t        Z1Pt;
   Double_t        Z2Eta;
   Double_t        Z2Phi;
   Double_t        Z2Pt;
   Double_t        ZZPt;
   Double_t        Z_Mee;
   Double_t        Z_Mmm;
   Double_t        Zee_Lep1_Eta;
   Double_t        Zee_Lep1_Phi;
   Double_t        Zee_Lep1_Pt;
   Double_t        Zee_Lep2_Eta;
   Double_t        Zee_Lep2_Phi;
   Double_t        Zee_Lep2_Pt;
   Double_t        Zmm_Lep1_Eta;
   Double_t        Zmm_Lep1_Phi;
   Double_t        Zmm_Lep1_Pt;
   Double_t        Zmm_Lep2_Eta;
   Double_t        Zmm_Lep2_Phi;
   Double_t        Zmm_Lep2_Pt;
   Double_t        dEtaZ1;
   Double_t        dEtaZ2;
   Double_t        dPhiZ1;
   Double_t        dPhiZ2;
   Double_t        dPhiZZ;
   vector<double>  *dPt;
   Double_t        dRZ1;
   Double_t        dRZ2;
   Double_t        dRZZ;
   Double_t        dR_min;
   Double_t        dd0_max;
   Double_t        dd0_min;
   Double_t        dz0_max;
   Double_t        dz0_min;
   Int_t           FLAG_eeee_2Lep;
   Int_t           FLAG_eeee_4Lep;
   Int_t           FLAG_eeee_CaloIso;
   Int_t           FLAG_eeee_D3PD;
   Int_t           FLAG_eeee_DR;
   Int_t           FLAG_eeee_GRL;
   Int_t           FLAG_eeee_IP;
   Int_t           FLAG_eeee_JPsiVeto;
   Int_t           FLAG_eeee_Kine;
   Int_t           FLAG_eeee_LAr;
   Int_t           FLAG_eeee_OneQuad;
   Int_t           FLAG_eeee_PV;
   Int_t           FLAG_eeee_Quad;
   Int_t           FLAG_eeee_TrackIso;
   Int_t           FLAG_eeee_TrigMatch;
   Int_t           FLAG_eeee_Trigger;
   Int_t           FLAG_eeee_Z1;
   Int_t           FLAG_eeee_Z2;
   Int_t           FLAG_eemm_2Lep;
   Int_t           FLAG_eemm_4Lep;
   Int_t           FLAG_eemm_CaloIso;
   Int_t           FLAG_eemm_D3PD;
   Int_t           FLAG_eemm_DR;
   Int_t           FLAG_eemm_GRL;
   Int_t           FLAG_eemm_IP;
   Int_t           FLAG_eemm_JPsiVeto;
   Int_t           FLAG_eemm_Kine;
   Int_t           FLAG_eemm_LAr;
   Int_t           FLAG_eemm_OneQuad;
   Int_t           FLAG_eemm_PV;
   Int_t           FLAG_eemm_Quad;
   Int_t           FLAG_eemm_TrackIso;
   Int_t           FLAG_eemm_TrigMatch;
   Int_t           FLAG_eemm_Trigger;
   Int_t           FLAG_eemm_Z1;
   Int_t           FLAG_eemm_Z2;
   Int_t           FLAG_incl_2Lep;
   Int_t           FLAG_incl_4Lep;
   Int_t           FLAG_incl_CaloIso;
   Int_t           FLAG_incl_D3PD;
   Int_t           FLAG_incl_DR;
   Int_t           FLAG_incl_GRL;
   Int_t           FLAG_incl_IP;
   Int_t           FLAG_incl_JPsiVeto;
   Int_t           FLAG_incl_Kine;
   Int_t           FLAG_incl_LAr;
   Int_t           FLAG_incl_OneQuad;
   Int_t           FLAG_incl_PV;
   Int_t           FLAG_incl_Quad;
   Int_t           FLAG_incl_TrackIso;
   Int_t           FLAG_incl_TrigMatch;
   Int_t           FLAG_incl_Trigger;
   Int_t           FLAG_incl_Z1;
   Int_t           FLAG_incl_Z2;
   Int_t           FLAG_mmee_2Lep;
   Int_t           FLAG_mmee_4Lep;
   Int_t           FLAG_mmee_CaloIso;
   Int_t           FLAG_mmee_D3PD;
   Int_t           FLAG_mmee_DR;
   Int_t           FLAG_mmee_GRL;
   Int_t           FLAG_mmee_IP;
   Int_t           FLAG_mmee_JPsiVeto;
   Int_t           FLAG_mmee_Kine;
   Int_t           FLAG_mmee_LAr;
   Int_t           FLAG_mmee_OneQuad;
   Int_t           FLAG_mmee_PV;
   Int_t           FLAG_mmee_Quad;
   Int_t           FLAG_mmee_TrackIso;
   Int_t           FLAG_mmee_TrigMatch;
   Int_t           FLAG_mmee_Trigger;
   Int_t           FLAG_mmee_Z1;
   Int_t           FLAG_mmee_Z2;
   Int_t           FLAG_mmmm_2Lep;
   Int_t           FLAG_mmmm_4Lep;
   Int_t           FLAG_mmmm_CaloIso;
   Int_t           FLAG_mmmm_D3PD;
   Int_t           FLAG_mmmm_DR;
   Int_t           FLAG_mmmm_GRL;
   Int_t           FLAG_mmmm_IP;
   Int_t           FLAG_mmmm_JPsiVeto;
   Int_t           FLAG_mmmm_Kine;
   Int_t           FLAG_mmmm_LAr;
   Int_t           FLAG_mmmm_OneQuad;
   Int_t           FLAG_mmmm_PV;
   Int_t           FLAG_mmmm_Quad;
   Int_t           FLAG_mmmm_TrackIso;
   Int_t           FLAG_mmmm_TrigMatch;
   Int_t           FLAG_mmmm_Trigger;
   Int_t           FLAG_mmmm_Z1;
   Int_t           FLAG_mmmm_Z2;

   // List of branches
   TBranch        *b_EF_2e12Tvh_loose1;   //!
   TBranch        *b_EF_2mu13;   //!
   TBranch        *b_EF_e12Tvh_medium1_mu8;   //!
   TBranch        *b_EF_e24vhi_loose1_mu8;   //!
   TBranch        *b_EF_e24vhi_medium1;   //!
   TBranch        *b_EF_e60_medium1;   //!
   TBranch        *b_EF_mu18_tight_mu8_EFFS;   //!
   TBranch        *b_EF_mu24i_tight;   //!
   TBranch        *b_EF_mu36_tight;   //!
   TBranch        *b_RunNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_lbn;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_averageIntPerXing;   //!
   TBranch        *b_larError;   //!
   TBranch        *b_el_n;   //!
   TBranch        *b_el_E;   //!
   TBranch        *b_el_Et;   //!
   TBranch        *b_el_pt;   //!
   TBranch        *b_el_m;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_el_px;   //!
   TBranch        *b_el_py;   //!
   TBranch        *b_el_pz;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_author;   //!
   TBranch        *b_el_isEM;   //!
   TBranch        *b_el_isEMLoose;   //!
   TBranch        *b_el_isEMMedium;   //!
   TBranch        *b_el_isEMTight;   //!
   TBranch        *b_el_OQ;   //!
   TBranch        *b_el_convFlag;   //!
   TBranch        *b_el_isConv;   //!
   TBranch        *b_el_nConv;   //!
   TBranch        *b_el_nSingleTrackConv;   //!
   TBranch        *b_el_nDoubleTrackConv;   //!
   TBranch        *b_el_mediumWithoutTrack;   //!
   TBranch        *b_el_mediumIsoWithoutTrack;   //!
   TBranch        *b_el_tightWithoutTrack;   //!
   TBranch        *b_el_tightIsoWithoutTrack;   //!
   TBranch        *b_el_loose;   //!
   TBranch        *b_el_looseIso;   //!
   TBranch        *b_el_medium;   //!
   TBranch        *b_el_mediumIso;   //!
   TBranch        *b_el_tight;   //!
   TBranch        *b_el_tightIso;   //!
   TBranch        *b_el_loosePP;   //!
   TBranch        *b_el_loosePPIso;   //!
   TBranch        *b_el_mediumPP;   //!
   TBranch        *b_el_mediumPPIso;   //!
   TBranch        *b_el_tightPP;   //!
   TBranch        *b_el_tightPPIso;   //!
   TBranch        *b_el_goodOQ;   //!
   TBranch        *b_el_Ethad;   //!
   TBranch        *b_el_Ethad1;   //!
   TBranch        *b_el_f1;   //!
   TBranch        *b_el_f1core;   //!
   TBranch        *b_el_Emins1;   //!
   TBranch        *b_el_fside;   //!
   TBranch        *b_el_Emax2;   //!
   TBranch        *b_el_ws3;   //!
   TBranch        *b_el_wstot;   //!
   TBranch        *b_el_emaxs1;   //!
   TBranch        *b_el_deltaEs;   //!
   TBranch        *b_el_E233;   //!
   TBranch        *b_el_E237;   //!
   TBranch        *b_el_E277;   //!
   TBranch        *b_el_weta2;   //!
   TBranch        *b_el_f3;   //!
   TBranch        *b_el_f3core;   //!
   TBranch        *b_el_rphiallcalo;   //!
   TBranch        *b_el_Etcone45;   //!
   TBranch        *b_el_Etcone15;   //!
   TBranch        *b_el_Etcone20;   //!
   TBranch        *b_el_Etcone25;   //!
   TBranch        *b_el_Etcone30;   //!
   TBranch        *b_el_Etcone35;   //!
   TBranch        *b_el_Etcone40;   //!
   TBranch        *b_el_ptcone20;   //!
   TBranch        *b_el_ptcone30;   //!
   TBranch        *b_el_ptcone40;   //!
   TBranch        *b_el_nucone20;   //!
   TBranch        *b_el_nucone30;   //!
   TBranch        *b_el_nucone40;   //!
   TBranch        *b_el_Etcone15_pt_corrected;   //!
   TBranch        *b_el_Etcone20_pt_corrected;   //!
   TBranch        *b_el_Etcone25_pt_corrected;   //!
   TBranch        *b_el_Etcone30_pt_corrected;   //!
   TBranch        *b_el_Etcone35_pt_corrected;   //!
   TBranch        *b_el_Etcone40_pt_corrected;   //!
   TBranch        *b_el_convanglematch;   //!
   TBranch        *b_el_convtrackmatch;   //!
   TBranch        *b_el_hasconv;   //!
   TBranch        *b_el_convvtxx;   //!
   TBranch        *b_el_convvtxy;   //!
   TBranch        *b_el_convvtxz;   //!
   TBranch        *b_el_Rconv;   //!
   TBranch        *b_el_zconv;   //!
   TBranch        *b_el_convvtxchi2;   //!
   TBranch        *b_el_pt1conv;   //!
   TBranch        *b_el_convtrk1nBLHits;   //!
   TBranch        *b_el_convtrk1nPixHits;   //!
   TBranch        *b_el_convtrk1nSCTHits;   //!
   TBranch        *b_el_convtrk1nTRTHits;   //!
   TBranch        *b_el_pt2conv;   //!
   TBranch        *b_el_convtrk2nBLHits;   //!
   TBranch        *b_el_convtrk2nPixHits;   //!
   TBranch        *b_el_convtrk2nSCTHits;   //!
   TBranch        *b_el_convtrk2nTRTHits;   //!
   TBranch        *b_el_ptconv;   //!
   TBranch        *b_el_pzconv;   //!
   TBranch        *b_el_pos7;   //!
   TBranch        *b_el_etacorrmag;   //!
   TBranch        *b_el_deltaeta1;   //!
   TBranch        *b_el_deltaeta2;   //!
   TBranch        *b_el_deltaphi2;   //!
   TBranch        *b_el_deltaphiRescaled;   //!
   TBranch        *b_el_deltaPhiFromLast;   //!
   TBranch        *b_el_deltaPhiRot;   //!
   TBranch        *b_el_expectHitInBLayer;   //!
   TBranch        *b_el_trackd0_physics;   //!
   TBranch        *b_el_etaSampling1;   //!
   TBranch        *b_el_reta;   //!
   TBranch        *b_el_rphi;   //!
   TBranch        *b_el_topoEtcone20;   //!
   TBranch        *b_el_topoEtcone30;   //!
   TBranch        *b_el_topoEtcone40;   //!
   TBranch        *b_el_EtringnoisedR03sig2;   //!
   TBranch        *b_el_EtringnoisedR03sig3;   //!
   TBranch        *b_el_EtringnoisedR03sig4;   //!
   TBranch        *b_el_isolationlikelihoodjets;   //!
   TBranch        *b_el_isolationlikelihoodhqelectrons;   //!
   TBranch        *b_el_electronweight;   //!
   TBranch        *b_el_electronbgweight;   //!
   TBranch        *b_el_softeweight;   //!
   TBranch        *b_el_softebgweight;   //!
   TBranch        *b_el_neuralnet;   //!
   TBranch        *b_el_Hmatrix;   //!
   TBranch        *b_el_Hmatrix5;   //!
   TBranch        *b_el_adaboost;   //!
   TBranch        *b_el_softeneuralnet;   //!
   TBranch        *b_el_ringernn;   //!
   TBranch        *b_el_zvertex;   //!
   TBranch        *b_el_errz;   //!
   TBranch        *b_el_etap;   //!
   TBranch        *b_el_depth;   //!
   TBranch        *b_el_refittedTrack_n;   //!
   TBranch        *b_el_refittedTrack_author;   //!
   TBranch        *b_el_refittedTrack_chi2;   //!
   TBranch        *b_el_refittedTrack_hasBrem;   //!
   TBranch        *b_el_refittedTrack_bremRadius;   //!
   TBranch        *b_el_refittedTrack_bremZ;   //!
   TBranch        *b_el_refittedTrack_bremRadiusErr;   //!
   TBranch        *b_el_refittedTrack_bremZErr;   //!
   TBranch        *b_el_refittedTrack_bremFitStatus;   //!
   TBranch        *b_el_refittedTrack_qoverp;   //!
   TBranch        *b_el_refittedTrack_d0;   //!
   TBranch        *b_el_refittedTrack_z0;   //!
   TBranch        *b_el_refittedTrack_theta;   //!
   TBranch        *b_el_refittedTrack_phi;   //!
   TBranch        *b_el_refittedTrack_LMqoverp;   //!
   TBranch        *b_el_refittedTrack_covd0;   //!
   TBranch        *b_el_refittedTrack_covz0;   //!
   TBranch        *b_el_refittedTrack_covphi;   //!
   TBranch        *b_el_refittedTrack_covtheta;   //!
   TBranch        *b_el_refittedTrack_covqoverp;   //!
   TBranch        *b_el_refittedTrack_covd0z0;   //!
   TBranch        *b_el_refittedTrack_covz0phi;   //!
   TBranch        *b_el_refittedTrack_covz0theta;   //!
   TBranch        *b_el_refittedTrack_covz0qoverp;   //!
   TBranch        *b_el_refittedTrack_covd0phi;   //!
   TBranch        *b_el_refittedTrack_covd0theta;   //!
   TBranch        *b_el_refittedTrack_covd0qoverp;   //!
   TBranch        *b_el_refittedTrack_covphitheta;   //!
   TBranch        *b_el_refittedTrack_covphiqoverp;   //!
   TBranch        *b_el_refittedTrack_covthetaqoverp;   //!
   TBranch        *b_el_Es0;   //!
   TBranch        *b_el_etas0;   //!
   TBranch        *b_el_phis0;   //!
   TBranch        *b_el_Es1;   //!
   TBranch        *b_el_etas1;   //!
   TBranch        *b_el_phis1;   //!
   TBranch        *b_el_Es2;   //!
   TBranch        *b_el_etas2;   //!
   TBranch        *b_el_phis2;   //!
   TBranch        *b_el_Es3;   //!
   TBranch        *b_el_etas3;   //!
   TBranch        *b_el_phis3;   //!
   TBranch        *b_el_E_PreSamplerB;   //!
   TBranch        *b_el_E_EMB1;   //!
   TBranch        *b_el_E_EMB2;   //!
   TBranch        *b_el_E_EMB3;   //!
   TBranch        *b_el_E_PreSamplerE;   //!
   TBranch        *b_el_E_EME1;   //!
   TBranch        *b_el_E_EME2;   //!
   TBranch        *b_el_E_EME3;   //!
   TBranch        *b_el_E_HEC0;   //!
   TBranch        *b_el_E_HEC1;   //!
   TBranch        *b_el_E_HEC2;   //!
   TBranch        *b_el_E_HEC3;   //!
   TBranch        *b_el_E_TileBar0;   //!
   TBranch        *b_el_E_TileBar1;   //!
   TBranch        *b_el_E_TileBar2;   //!
   TBranch        *b_el_E_TileGap1;   //!
   TBranch        *b_el_E_TileGap2;   //!
   TBranch        *b_el_E_TileGap3;   //!
   TBranch        *b_el_E_TileExt0;   //!
   TBranch        *b_el_E_TileExt1;   //!
   TBranch        *b_el_E_TileExt2;   //!
   TBranch        *b_el_E_FCAL0;   //!
   TBranch        *b_el_E_FCAL1;   //!
   TBranch        *b_el_E_FCAL2;   //!
   TBranch        *b_el_cl_E;   //!
   TBranch        *b_el_cl_pt;   //!
   TBranch        *b_el_cl_eta;   //!
   TBranch        *b_el_cl_phi;   //!
   TBranch        *b_el_firstEdens;   //!
   TBranch        *b_el_cellmaxfrac;   //!
   TBranch        *b_el_longitudinal;   //!
   TBranch        *b_el_secondlambda;   //!
   TBranch        *b_el_lateral;   //!
   TBranch        *b_el_secondR;   //!
   TBranch        *b_el_centerlambda;   //!
   TBranch        *b_el_rawcl_Es0;   //!
   TBranch        *b_el_rawcl_etas0;   //!
   TBranch        *b_el_rawcl_phis0;   //!
   TBranch        *b_el_rawcl_Es1;   //!
   TBranch        *b_el_rawcl_etas1;   //!
   TBranch        *b_el_rawcl_phis1;   //!
   TBranch        *b_el_rawcl_Es2;   //!
   TBranch        *b_el_rawcl_etas2;   //!
   TBranch        *b_el_rawcl_phis2;   //!
   TBranch        *b_el_rawcl_Es3;   //!
   TBranch        *b_el_rawcl_etas3;   //!
   TBranch        *b_el_rawcl_phis3;   //!
   TBranch        *b_el_rawcl_E;   //!
   TBranch        *b_el_rawcl_pt;   //!
   TBranch        *b_el_rawcl_eta;   //!
   TBranch        *b_el_rawcl_phi;   //!
   TBranch        *b_el_rings_E;   //!
   TBranch        *b_el_trackd0;   //!
   TBranch        *b_el_trackz0;   //!
   TBranch        *b_el_trackphi;   //!
   TBranch        *b_el_tracktheta;   //!
   TBranch        *b_el_trackqoverp;   //!
   TBranch        *b_el_trackpt;   //!
   TBranch        *b_el_tracketa;   //!
   TBranch        *b_el_trackcov_d0;   //!
   TBranch        *b_el_trackcov_z0;   //!
   TBranch        *b_el_trackcov_phi;   //!
   TBranch        *b_el_trackcov_theta;   //!
   TBranch        *b_el_trackcov_qoverp;   //!
   TBranch        *b_el_trackcov_d0_z0;   //!
   TBranch        *b_el_trackcov_d0_phi;   //!
   TBranch        *b_el_trackcov_d0_theta;   //!
   TBranch        *b_el_trackcov_d0_qoverp;   //!
   TBranch        *b_el_trackcov_z0_phi;   //!
   TBranch        *b_el_trackcov_z0_theta;   //!
   TBranch        *b_el_trackcov_z0_qoverp;   //!
   TBranch        *b_el_trackcov_phi_theta;   //!
   TBranch        *b_el_trackcov_phi_qoverp;   //!
   TBranch        *b_el_trackcov_theta_qoverp;   //!
   TBranch        *b_el_trackfitchi2;   //!
   TBranch        *b_el_trackfitndof;   //!
   TBranch        *b_el_nBLHits;   //!
   TBranch        *b_el_nPixHits;   //!
   TBranch        *b_el_nSCTHits;   //!
   TBranch        *b_el_nTRTHits;   //!
   TBranch        *b_el_nTRTHighTHits;   //!
   TBranch        *b_el_nPixHoles;   //!
   TBranch        *b_el_nSCTHoles;   //!
   TBranch        *b_el_nTRTHoles;   //!
   TBranch        *b_el_nPixelDeadSensors;   //!
   TBranch        *b_el_nSCTDeadSensors;   //!
   TBranch        *b_el_nBLSharedHits;   //!
   TBranch        *b_el_nPixSharedHits;   //!
   TBranch        *b_el_nSCTSharedHits;   //!
   TBranch        *b_el_nBLayerSplitHits;   //!
   TBranch        *b_el_nPixSplitHits;   //!
   TBranch        *b_el_nBLayerOutliers;   //!
   TBranch        *b_el_nPixelOutliers;   //!
   TBranch        *b_el_nSCTOutliers;   //!
   TBranch        *b_el_nTRTOutliers;   //!
   TBranch        *b_el_nTRTHighTOutliers;   //!
   TBranch        *b_el_nContribPixelLayers;   //!
   TBranch        *b_el_nGangedPixels;   //!
   TBranch        *b_el_nGangedFlaggedFakes;   //!
   TBranch        *b_el_nPixelSpoiltHits;   //!
   TBranch        *b_el_nSCTDoubleHoles;   //!
   TBranch        *b_el_nSCTSpoiltHits;   //!
   TBranch        *b_el_expectBLayerHit;   //!
   TBranch        *b_el_nSiHits;   //!
   TBranch        *b_el_TRTHighTHitsRatio;   //!
   TBranch        *b_el_TRTHighTOutliersRatio;   //!
   TBranch        *b_el_pixeldEdx;   //!
   TBranch        *b_el_nGoodHitsPixeldEdx;   //!
   TBranch        *b_el_massPixeldEdx;   //!
   TBranch        *b_el_likelihoodsPixeldEdx;   //!
   TBranch        *b_el_eProbabilityComb;   //!
   TBranch        *b_el_eProbabilityHT;   //!
   TBranch        *b_el_eProbabilityToT;   //!
   TBranch        *b_el_eProbabilityBrem;   //!
   TBranch        *b_el_vertweight;   //!
   TBranch        *b_el_vertx;   //!
   TBranch        *b_el_verty;   //!
   TBranch        *b_el_vertz;   //!
   TBranch        *b_el_trackd0beam;   //!
   TBranch        *b_el_trackz0beam;   //!
   TBranch        *b_el_tracksigd0beam;   //!
   TBranch        *b_el_tracksigz0beam;   //!
   TBranch        *b_el_trackd0pv;   //!
   TBranch        *b_el_trackz0pv;   //!
   TBranch        *b_el_tracksigd0pv;   //!
   TBranch        *b_el_tracksigz0pv;   //!
   TBranch        *b_el_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_el_trackd0pvunbiased;   //!
   TBranch        *b_el_trackz0pvunbiased;   //!
   TBranch        *b_el_tracksigd0pvunbiased;   //!
   TBranch        *b_el_tracksigz0pvunbiased;   //!
   TBranch        *b_el_Unrefittedtrack_d0;   //!
   TBranch        *b_el_Unrefittedtrack_z0;   //!
   TBranch        *b_el_Unrefittedtrack_phi;   //!
   TBranch        *b_el_Unrefittedtrack_theta;   //!
   TBranch        *b_el_Unrefittedtrack_qoverp;   //!
   TBranch        *b_el_Unrefittedtrack_pt;   //!
   TBranch        *b_el_Unrefittedtrack_eta;   //!
   TBranch        *b_el_hastrack;   //!
   TBranch        *b_el_deltaEmax2;   //!
   TBranch        *b_el_calibHitsShowerDepth;   //!
   TBranch        *b_el_isIso;   //!
   TBranch        *b_el_mvaptcone20;   //!
   TBranch        *b_el_mvaptcone30;   //!
   TBranch        *b_el_mvaptcone40;   //!
   TBranch        *b_el_CaloPointing_eta;   //!
   TBranch        *b_el_CaloPointing_sigma_eta;   //!
   TBranch        *b_el_CaloPointing_zvertex;   //!
   TBranch        *b_el_CaloPointing_sigma_zvertex;   //!
   TBranch        *b_el_HPV_eta;   //!
   TBranch        *b_el_HPV_sigma_eta;   //!
   TBranch        *b_el_HPV_zvertex;   //!
   TBranch        *b_el_HPV_sigma_zvertex;   //!
   TBranch        *b_el_topoEtcone60;   //!
   TBranch        *b_el_ES0_real;   //!
   TBranch        *b_el_ES1_real;   //!
   TBranch        *b_el_ES2_real;   //!
   TBranch        *b_el_ES3_real;   //!
   TBranch        *b_el_EcellS0;   //!
   TBranch        *b_el_etacellS0;   //!
   TBranch        *b_el_Etcone40_ED_corrected;   //!
   TBranch        *b_el_Etcone40_corrected;   //!
   TBranch        *b_el_topoEtcone20_corrected;   //!
   TBranch        *b_el_topoEtcone30_corrected;   //!
   TBranch        *b_el_topoEtcone40_corrected;   //!
   TBranch        *b_el_ED_median;   //!
   TBranch        *b_el_ED_sigma;   //!
   TBranch        *b_el_ED_Njets;   //!
   TBranch        *b_el_jet_dr;   //!
   TBranch        *b_el_jet_E;   //!
   TBranch        *b_el_jet_pt;   //!
   TBranch        *b_el_jet_m;   //!
   TBranch        *b_el_jet_eta;   //!
   TBranch        *b_el_jet_phi;   //!
   TBranch        *b_el_jet_matched;   //!
   TBranch        *b_el_EF_dr;   //!
   TBranch        *b_el_EF_index;   //!
   TBranch        *b_ph_n;   //!
   TBranch        *b_ph_E;   //!
   TBranch        *b_ph_Et;   //!
   TBranch        *b_ph_pt;   //!
   TBranch        *b_ph_m;   //!
   TBranch        *b_ph_eta;   //!
   TBranch        *b_ph_phi;   //!
   TBranch        *b_ph_px;   //!
   TBranch        *b_ph_py;   //!
   TBranch        *b_ph_pz;   //!
   TBranch        *b_ph_author;   //!
   TBranch        *b_ph_isRecovered;   //!
   TBranch        *b_ph_isEM;   //!
   TBranch        *b_ph_isEMLoose;   //!
   TBranch        *b_ph_isEMMedium;   //!
   TBranch        *b_ph_isEMTight;   //!
   TBranch        *b_ph_OQ;   //!
   TBranch        *b_ph_convFlag;   //!
   TBranch        *b_ph_isConv;   //!
   TBranch        *b_ph_nConv;   //!
   TBranch        *b_ph_nSingleTrackConv;   //!
   TBranch        *b_ph_nDoubleTrackConv;   //!
   TBranch        *b_ph_loose;   //!
   TBranch        *b_ph_looseIso;   //!
   TBranch        *b_ph_tight;   //!
   TBranch        *b_ph_tightIso;   //!
   TBranch        *b_ph_looseAR;   //!
   TBranch        *b_ph_looseARIso;   //!
   TBranch        *b_ph_tightAR;   //!
   TBranch        *b_ph_tightARIso;   //!
   TBranch        *b_ph_goodOQ;   //!
   TBranch        *b_ph_Ethad;   //!
   TBranch        *b_ph_Ethad1;   //!
   TBranch        *b_ph_E033;   //!
   TBranch        *b_ph_f1;   //!
   TBranch        *b_ph_f1core;   //!
   TBranch        *b_ph_Emins1;   //!
   TBranch        *b_ph_fside;   //!
   TBranch        *b_ph_Emax2;   //!
   TBranch        *b_ph_ws3;   //!
   TBranch        *b_ph_wstot;   //!
   TBranch        *b_ph_E132;   //!
   TBranch        *b_ph_E1152;   //!
   TBranch        *b_ph_emaxs1;   //!
   TBranch        *b_ph_deltaEs;   //!
   TBranch        *b_ph_E233;   //!
   TBranch        *b_ph_E237;   //!
   TBranch        *b_ph_E277;   //!
   TBranch        *b_ph_weta2;   //!
   TBranch        *b_ph_f3;   //!
   TBranch        *b_ph_f3core;   //!
   TBranch        *b_ph_rphiallcalo;   //!
   TBranch        *b_ph_Etcone45;   //!
   TBranch        *b_ph_Etcone15;   //!
   TBranch        *b_ph_Etcone20;   //!
   TBranch        *b_ph_Etcone25;   //!
   TBranch        *b_ph_Etcone30;   //!
   TBranch        *b_ph_Etcone35;   //!
   TBranch        *b_ph_Etcone40;   //!
   TBranch        *b_ph_ptcone20;   //!
   TBranch        *b_ph_ptcone30;   //!
   TBranch        *b_ph_ptcone40;   //!
   TBranch        *b_ph_nucone20;   //!
   TBranch        *b_ph_nucone30;   //!
   TBranch        *b_ph_nucone40;   //!
   TBranch        *b_ph_Etcone15_pt_corrected;   //!
   TBranch        *b_ph_Etcone20_pt_corrected;   //!
   TBranch        *b_ph_Etcone25_pt_corrected;   //!
   TBranch        *b_ph_Etcone30_pt_corrected;   //!
   TBranch        *b_ph_Etcone35_pt_corrected;   //!
   TBranch        *b_ph_Etcone40_pt_corrected;   //!
   TBranch        *b_ph_convanglematch;   //!
   TBranch        *b_ph_convtrackmatch;   //!
   TBranch        *b_ph_hasconv;   //!
   TBranch        *b_ph_convvtxx;   //!
   TBranch        *b_ph_convvtxy;   //!
   TBranch        *b_ph_convvtxz;   //!
   TBranch        *b_ph_Rconv;   //!
   TBranch        *b_ph_zconv;   //!
   TBranch        *b_ph_convvtxchi2;   //!
   TBranch        *b_ph_pt1conv;   //!
   TBranch        *b_ph_convtrk1nBLHits;   //!
   TBranch        *b_ph_convtrk1nPixHits;   //!
   TBranch        *b_ph_convtrk1nSCTHits;   //!
   TBranch        *b_ph_convtrk1nTRTHits;   //!
   TBranch        *b_ph_pt2conv;   //!
   TBranch        *b_ph_convtrk2nBLHits;   //!
   TBranch        *b_ph_convtrk2nPixHits;   //!
   TBranch        *b_ph_convtrk2nSCTHits;   //!
   TBranch        *b_ph_convtrk2nTRTHits;   //!
   TBranch        *b_ph_ptconv;   //!
   TBranch        *b_ph_pzconv;   //!
   TBranch        *b_ph_reta;   //!
   TBranch        *b_ph_rphi;   //!
   TBranch        *b_ph_topoEtcone20;   //!
   TBranch        *b_ph_topoEtcone30;   //!
   TBranch        *b_ph_topoEtcone40;   //!
   TBranch        *b_ph_EtringnoisedR03sig2;   //!
   TBranch        *b_ph_EtringnoisedR03sig3;   //!
   TBranch        *b_ph_EtringnoisedR03sig4;   //!
   TBranch        *b_ph_isolationlikelihoodjets;   //!
   TBranch        *b_ph_isolationlikelihoodhqelectrons;   //!
   TBranch        *b_ph_loglikelihood;   //!
   TBranch        *b_ph_photonweight;   //!
   TBranch        *b_ph_photonbgweight;   //!
   TBranch        *b_ph_neuralnet;   //!
   TBranch        *b_ph_Hmatrix;   //!
   TBranch        *b_ph_Hmatrix5;   //!
   TBranch        *b_ph_adaboost;   //!
   TBranch        *b_ph_ringernn;   //!
   TBranch        *b_ph_zvertex;   //!
   TBranch        *b_ph_errz;   //!
   TBranch        *b_ph_etap;   //!
   TBranch        *b_ph_depth;   //!
   TBranch        *b_ph_cl_E;   //!
   TBranch        *b_ph_cl_pt;   //!
   TBranch        *b_ph_cl_eta;   //!
   TBranch        *b_ph_cl_phi;   //!
   TBranch        *b_ph_Es0;   //!
   TBranch        *b_ph_etas0;   //!
   TBranch        *b_ph_phis0;   //!
   TBranch        *b_ph_Es1;   //!
   TBranch        *b_ph_etas1;   //!
   TBranch        *b_ph_phis1;   //!
   TBranch        *b_ph_Es2;   //!
   TBranch        *b_ph_etas2;   //!
   TBranch        *b_ph_phis2;   //!
   TBranch        *b_ph_Es3;   //!
   TBranch        *b_ph_etas3;   //!
   TBranch        *b_ph_phis3;   //!
   TBranch        *b_ph_rawcl_Es0;   //!
   TBranch        *b_ph_rawcl_etas0;   //!
   TBranch        *b_ph_rawcl_phis0;   //!
   TBranch        *b_ph_rawcl_Es1;   //!
   TBranch        *b_ph_rawcl_etas1;   //!
   TBranch        *b_ph_rawcl_phis1;   //!
   TBranch        *b_ph_rawcl_Es2;   //!
   TBranch        *b_ph_rawcl_etas2;   //!
   TBranch        *b_ph_rawcl_phis2;   //!
   TBranch        *b_ph_rawcl_Es3;   //!
   TBranch        *b_ph_rawcl_etas3;   //!
   TBranch        *b_ph_rawcl_phis3;   //!
   TBranch        *b_ph_rawcl_E;   //!
   TBranch        *b_ph_rawcl_pt;   //!
   TBranch        *b_ph_rawcl_eta;   //!
   TBranch        *b_ph_rawcl_phi;   //!
   TBranch        *b_ph_convMatchDeltaEta1;   //!
   TBranch        *b_ph_convMatchDeltaEta2;   //!
   TBranch        *b_ph_convMatchDeltaPhi1;   //!
   TBranch        *b_ph_convMatchDeltaPhi2;   //!
   TBranch        *b_ph_rings_E;   //!
   TBranch        *b_ph_vx_n;   //!
   TBranch        *b_ph_vx_x;   //!
   TBranch        *b_ph_vx_y;   //!
   TBranch        *b_ph_vx_z;   //!
   TBranch        *b_ph_vx_px;   //!
   TBranch        *b_ph_vx_py;   //!
   TBranch        *b_ph_vx_pz;   //!
   TBranch        *b_ph_vx_E;   //!
   TBranch        *b_ph_vx_m;   //!
   TBranch        *b_ph_vx_nTracks;   //!
   TBranch        *b_ph_vx_sumPt;   //!
   TBranch        *b_ph_vx_convTrk_weight;   //!
   TBranch        *b_ph_vx_convTrk_n;   //!
   TBranch        *b_ph_vx_convTrk_fitter;   //!
   TBranch        *b_ph_vx_convTrk_patternReco1;   //!
   TBranch        *b_ph_vx_convTrk_patternReco2;   //!
   TBranch        *b_ph_vx_convTrk_trackProperties;   //!
   TBranch        *b_ph_vx_convTrk_particleHypothesis;   //!
   TBranch        *b_ph_vx_convTrk_nBLHits;   //!
   TBranch        *b_ph_vx_convTrk_nPixHits;   //!
   TBranch        *b_ph_vx_convTrk_nSCTHits;   //!
   TBranch        *b_ph_vx_convTrk_nTRTHits;   //!
   TBranch        *b_ph_vx_convTrk_nTRTHighTHits;   //!
   TBranch        *b_ph_vx_convTrk_nPixHoles;   //!
   TBranch        *b_ph_vx_convTrk_nSCTHoles;   //!
   TBranch        *b_ph_vx_convTrk_nTRTHoles;   //!
   TBranch        *b_ph_vx_convTrk_nPixelDeadSensors;   //!
   TBranch        *b_ph_vx_convTrk_nSCTDeadSensors;   //!
   TBranch        *b_ph_vx_convTrk_nBLSharedHits;   //!
   TBranch        *b_ph_vx_convTrk_nPixSharedHits;   //!
   TBranch        *b_ph_vx_convTrk_nSCTSharedHits;   //!
   TBranch        *b_ph_vx_convTrk_nBLayerSplitHits;   //!
   TBranch        *b_ph_vx_convTrk_nPixSplitHits;   //!
   TBranch        *b_ph_vx_convTrk_nBLayerOutliers;   //!
   TBranch        *b_ph_vx_convTrk_nPixelOutliers;   //!
   TBranch        *b_ph_vx_convTrk_nSCTOutliers;   //!
   TBranch        *b_ph_vx_convTrk_nTRTOutliers;   //!
   TBranch        *b_ph_vx_convTrk_nTRTHighTOutliers;   //!
   TBranch        *b_ph_vx_convTrk_nContribPixelLayers;   //!
   TBranch        *b_ph_vx_convTrk_nGangedPixels;   //!
   TBranch        *b_ph_vx_convTrk_nGangedFlaggedFakes;   //!
   TBranch        *b_ph_vx_convTrk_nPixelSpoiltHits;   //!
   TBranch        *b_ph_vx_convTrk_nSCTDoubleHoles;   //!
   TBranch        *b_ph_vx_convTrk_nSCTSpoiltHits;   //!
   TBranch        *b_ph_vx_convTrk_nTRTDeadStraws;   //!
   TBranch        *b_ph_vx_convTrk_nTRTTubeHits;   //!
   TBranch        *b_ph_vx_convTrk_nOutliersOnTrack;   //!
   TBranch        *b_ph_vx_convTrk_standardDeviationOfChi2OS;   //!
   TBranch        *b_ph_vx_convTrk_expectBLayerHit;   //!
   TBranch        *b_ph_vx_convTrk_nMDTHits;   //!
   TBranch        *b_ph_vx_convTrk_nCSCEtaHits;   //!
   TBranch        *b_ph_vx_convTrk_nCSCPhiHits;   //!
   TBranch        *b_ph_vx_convTrk_nRPCEtaHits;   //!
   TBranch        *b_ph_vx_convTrk_nRPCPhiHits;   //!
   TBranch        *b_ph_vx_convTrk_nTGCEtaHits;   //!
   TBranch        *b_ph_vx_convTrk_nTGCPhiHits;   //!
   TBranch        *b_ph_vx_convTrk_nMdtHoles;   //!
   TBranch        *b_ph_vx_convTrk_nCscEtaHoles;   //!
   TBranch        *b_ph_vx_convTrk_nCscPhiHoles;   //!
   TBranch        *b_ph_vx_convTrk_nRpcEtaHoles;   //!
   TBranch        *b_ph_vx_convTrk_nRpcPhiHoles;   //!
   TBranch        *b_ph_vx_convTrk_nTgcEtaHoles;   //!
   TBranch        *b_ph_vx_convTrk_nTgcPhiHoles;   //!
   TBranch        *b_ph_vx_convTrk_nHits;   //!
   TBranch        *b_ph_vx_convTrk_nHoles;   //!
   TBranch        *b_ph_vx_convTrk_hitPattern;   //!
   TBranch        *b_ph_vx_convTrk_nSiHits;   //!
   TBranch        *b_ph_vx_convTrk_TRTHighTHitsRatio;   //!
   TBranch        *b_ph_vx_convTrk_TRTHighTOutliersRatio;   //!
   TBranch        *b_ph_vx_convTrk_eProbabilityComb;   //!
   TBranch        *b_ph_vx_convTrk_eProbabilityHT;   //!
   TBranch        *b_ph_vx_convTrk_eProbabilityToT;   //!
   TBranch        *b_ph_vx_convTrk_eProbabilityBrem;   //!
   TBranch        *b_ph_vx_convTrk_chi2;   //!
   TBranch        *b_ph_vx_convTrk_ndof;   //!
   TBranch        *b_ph_deltaEmax2;   //!
   TBranch        *b_ph_calibHitsShowerDepth;   //!
   TBranch        *b_ph_isIso;   //!
   TBranch        *b_ph_mvaptcone20;   //!
   TBranch        *b_ph_mvaptcone30;   //!
   TBranch        *b_ph_mvaptcone40;   //!
   TBranch        *b_ph_topoEtcone60;   //!
   TBranch        *b_ph_vx_Chi2;   //!
   TBranch        *b_ph_vx_Dcottheta;   //!
   TBranch        *b_ph_vx_Dphi;   //!
   TBranch        *b_ph_vx_Dist;   //!
   TBranch        *b_ph_vx_DR1R2;   //!
   TBranch        *b_ph_CaloPointing_eta;   //!
   TBranch        *b_ph_CaloPointing_sigma_eta;   //!
   TBranch        *b_ph_CaloPointing_zvertex;   //!
   TBranch        *b_ph_CaloPointing_sigma_zvertex;   //!
   TBranch        *b_ph_HPV_eta;   //!
   TBranch        *b_ph_HPV_sigma_eta;   //!
   TBranch        *b_ph_HPV_zvertex;   //!
   TBranch        *b_ph_HPV_sigma_zvertex;   //!
   TBranch        *b_ph_NN_passes;   //!
   TBranch        *b_ph_NN_discriminant;   //!
   TBranch        *b_ph_ES0_real;   //!
   TBranch        *b_ph_ES1_real;   //!
   TBranch        *b_ph_ES2_real;   //!
   TBranch        *b_ph_ES3_real;   //!
   TBranch        *b_ph_EcellS0;   //!
   TBranch        *b_ph_etacellS0;   //!
   TBranch        *b_ph_Etcone40_ED_corrected;   //!
   TBranch        *b_ph_Etcone40_corrected;   //!
   TBranch        *b_ph_topoEtcone20_corrected;   //!
   TBranch        *b_ph_topoEtcone30_corrected;   //!
   TBranch        *b_ph_topoEtcone40_corrected;   //!
   TBranch        *b_ph_ED_median;   //!
   TBranch        *b_ph_ED_sigma;   //!
   TBranch        *b_ph_ED_Njets;   //!
   TBranch        *b_ph_convIP;   //!
   TBranch        *b_ph_convIPRev;   //!
   TBranch        *b_ph_jet_dr;   //!
   TBranch        *b_ph_jet_E;   //!
   TBranch        *b_ph_jet_pt;   //!
   TBranch        *b_ph_jet_m;   //!
   TBranch        *b_ph_jet_eta;   //!
   TBranch        *b_ph_jet_phi;   //!
   TBranch        *b_ph_jet_matched;   //!
   TBranch        *b_ph_topodr;   //!
   TBranch        *b_ph_topopt;   //!
   TBranch        *b_ph_topoeta;   //!
   TBranch        *b_ph_topophi;   //!
   TBranch        *b_ph_topomatched;   //!
   TBranch        *b_ph_topoEMdr;   //!
   TBranch        *b_ph_topoEMpt;   //!
   TBranch        *b_ph_topoEMeta;   //!
   TBranch        *b_ph_topoEMphi;   //!
   TBranch        *b_ph_topoEMmatched;   //!
   TBranch        *b_ph_el_index;   //!
   TBranch        *b_ph_EF_dr;   //!
   TBranch        *b_ph_EF_index;   //!
   TBranch        *b_ph_L2_dr;   //!
   TBranch        *b_ph_L2_index;   //!
   TBranch        *b_ph_L1_dr;   //!
   TBranch        *b_ph_L1_index;   //!
   TBranch        *b_mu_staco_n;   //!
   TBranch        *b_mu_staco_E;   //!
   TBranch        *b_mu_staco_pt;   //!
   TBranch        *b_mu_staco_m;   //!
   TBranch        *b_mu_staco_eta;   //!
   TBranch        *b_mu_staco_phi;   //!
   TBranch        *b_mu_staco_px;   //!
   TBranch        *b_mu_staco_py;   //!
   TBranch        *b_mu_staco_pz;   //!
   TBranch        *b_mu_staco_charge;   //!
   TBranch        *b_mu_staco_allauthor;   //!
   TBranch        *b_mu_staco_author;   //!
   TBranch        *b_mu_staco_beta;   //!
   TBranch        *b_mu_staco_isMuonLikelihood;   //!
   TBranch        *b_mu_staco_matchchi2;   //!
   TBranch        *b_mu_staco_matchndof;   //!
   TBranch        *b_mu_staco_etcone20;   //!
   TBranch        *b_mu_staco_etcone30;   //!
   TBranch        *b_mu_staco_etcone40;   //!
   TBranch        *b_mu_staco_nucone20;   //!
   TBranch        *b_mu_staco_nucone30;   //!
   TBranch        *b_mu_staco_nucone40;   //!
   TBranch        *b_mu_staco_ptcone20;   //!
   TBranch        *b_mu_staco_ptcone30;   //!
   TBranch        *b_mu_staco_ptcone40;   //!
   TBranch        *b_mu_staco_scatteringCurvatureSignificance;   //!
   TBranch        *b_mu_staco_scatteringNeighbourSignificance;   //!
   TBranch        *b_mu_staco_momentumBalanceSignificance;   //!
   TBranch        *b_mu_staco_energyLossPar;   //!
   TBranch        *b_mu_staco_energyLossErr;   //!
   TBranch        *b_mu_staco_etCore;   //!
   TBranch        *b_mu_staco_energyLossType;   //!
   TBranch        *b_mu_staco_caloMuonIdTag;   //!
   TBranch        *b_mu_staco_caloLRLikelihood;   //!
   TBranch        *b_mu_staco_bestMatch;   //!
   TBranch        *b_mu_staco_isStandAloneMuon;   //!
   TBranch        *b_mu_staco_isCombinedMuon;   //!
   TBranch        *b_mu_staco_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_staco_isSegmentTaggedMuon;   //!
   TBranch        *b_mu_staco_isCaloMuonId;   //!
   TBranch        *b_mu_staco_alsoFoundByLowPt;   //!
   TBranch        *b_mu_staco_alsoFoundByCaloMuonId;   //!
   TBranch        *b_mu_staco_isSiliconAssociatedForwardMuon;   //!
   TBranch        *b_mu_staco_loose;   //!
   TBranch        *b_mu_staco_medium;   //!
   TBranch        *b_mu_staco_tight;   //!
   TBranch        *b_mu_staco_d0_exPV;   //!
   TBranch        *b_mu_staco_z0_exPV;   //!
   TBranch        *b_mu_staco_phi_exPV;   //!
   TBranch        *b_mu_staco_theta_exPV;   //!
   TBranch        *b_mu_staco_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cb_d0_exPV;   //!
   TBranch        *b_mu_staco_cb_z0_exPV;   //!
   TBranch        *b_mu_staco_cb_phi_exPV;   //!
   TBranch        *b_mu_staco_cb_theta_exPV;   //!
   TBranch        *b_mu_staco_cb_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_d0_exPV;   //!
   TBranch        *b_mu_staco_id_z0_exPV;   //!
   TBranch        *b_mu_staco_id_phi_exPV;   //!
   TBranch        *b_mu_staco_id_theta_exPV;   //!
   TBranch        *b_mu_staco_id_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_d0_exPV;   //!
   TBranch        *b_mu_staco_me_z0_exPV;   //!
   TBranch        *b_mu_staco_me_phi_exPV;   //!
   TBranch        *b_mu_staco_me_theta_exPV;   //!
   TBranch        *b_mu_staco_me_qoverp_exPV;   //!
   TBranch        *b_mu_staco_ie_d0_exPV;   //!
   TBranch        *b_mu_staco_ie_z0_exPV;   //!
   TBranch        *b_mu_staco_ie_phi_exPV;   //!
   TBranch        *b_mu_staco_ie_theta_exPV;   //!
   TBranch        *b_mu_staco_ie_qoverp_exPV;   //!
   TBranch        *b_mu_staco_SpaceTime_detID;   //!
   TBranch        *b_mu_staco_SpaceTime_t;   //!
   TBranch        *b_mu_staco_SpaceTime_tError;   //!
   TBranch        *b_mu_staco_SpaceTime_weight;   //!
   TBranch        *b_mu_staco_SpaceTime_x;   //!
   TBranch        *b_mu_staco_SpaceTime_y;   //!
   TBranch        *b_mu_staco_SpaceTime_z;   //!
   TBranch        *b_mu_staco_cov_d0_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_staco_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_staco_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_cov_d0_exPV;   //!
   TBranch        *b_mu_staco_id_cov_z0_exPV;   //!
   TBranch        *b_mu_staco_id_cov_phi_exPV;   //!
   TBranch        *b_mu_staco_id_cov_theta_exPV;   //!
   TBranch        *b_mu_staco_id_cov_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_staco_id_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_staco_id_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_staco_id_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_staco_id_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_staco_id_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_staco_id_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_staco_id_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_cov_d0_exPV;   //!
   TBranch        *b_mu_staco_me_cov_z0_exPV;   //!
   TBranch        *b_mu_staco_me_cov_phi_exPV;   //!
   TBranch        *b_mu_staco_me_cov_theta_exPV;   //!
   TBranch        *b_mu_staco_me_cov_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_staco_me_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_staco_me_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_staco_me_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_staco_me_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_staco_me_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_staco_me_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_staco_me_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_staco_ms_d0;   //!
   TBranch        *b_mu_staco_ms_z0;   //!
   TBranch        *b_mu_staco_ms_phi;   //!
   TBranch        *b_mu_staco_ms_theta;   //!
   TBranch        *b_mu_staco_ms_qoverp;   //!
   TBranch        *b_mu_staco_id_d0;   //!
   TBranch        *b_mu_staco_id_z0;   //!
   TBranch        *b_mu_staco_id_phi;   //!
   TBranch        *b_mu_staco_id_theta;   //!
   TBranch        *b_mu_staco_id_qoverp;   //!
   TBranch        *b_mu_staco_me_d0;   //!
   TBranch        *b_mu_staco_me_z0;   //!
   TBranch        *b_mu_staco_me_phi;   //!
   TBranch        *b_mu_staco_me_theta;   //!
   TBranch        *b_mu_staco_me_qoverp;   //!
   TBranch        *b_mu_staco_ie_d0;   //!
   TBranch        *b_mu_staco_ie_z0;   //!
   TBranch        *b_mu_staco_ie_phi;   //!
   TBranch        *b_mu_staco_ie_theta;   //!
   TBranch        *b_mu_staco_ie_qoverp;   //!
   TBranch        *b_mu_staco_nOutliersOnTrack;   //!
   TBranch        *b_mu_staco_nBLHits;   //!
   TBranch        *b_mu_staco_nPixHits;   //!
   TBranch        *b_mu_staco_nSCTHits;   //!
   TBranch        *b_mu_staco_nTRTHits;   //!
   TBranch        *b_mu_staco_nTRTHighTHits;   //!
   TBranch        *b_mu_staco_nBLSharedHits;   //!
   TBranch        *b_mu_staco_nPixSharedHits;   //!
   TBranch        *b_mu_staco_nPixHoles;   //!
   TBranch        *b_mu_staco_nSCTSharedHits;   //!
   TBranch        *b_mu_staco_nSCTHoles;   //!
   TBranch        *b_mu_staco_nTRTOutliers;   //!
   TBranch        *b_mu_staco_nTRTHighTOutliers;   //!
   TBranch        *b_mu_staco_nGangedPixels;   //!
   TBranch        *b_mu_staco_nPixelDeadSensors;   //!
   TBranch        *b_mu_staco_nSCTDeadSensors;   //!
   TBranch        *b_mu_staco_nTRTDeadStraws;   //!
   TBranch        *b_mu_staco_expectBLayerHit;   //!
   TBranch        *b_mu_staco_nMDTHits;   //!
   TBranch        *b_mu_staco_nMDTHoles;   //!
   TBranch        *b_mu_staco_nCSCEtaHits;   //!
   TBranch        *b_mu_staco_nCSCEtaHoles;   //!
   TBranch        *b_mu_staco_nCSCUnspoiledEtaHits;   //!
   TBranch        *b_mu_staco_nCSCPhiHits;   //!
   TBranch        *b_mu_staco_nCSCPhiHoles;   //!
   TBranch        *b_mu_staco_nRPCEtaHits;   //!
   TBranch        *b_mu_staco_nRPCEtaHoles;   //!
   TBranch        *b_mu_staco_nRPCPhiHits;   //!
   TBranch        *b_mu_staco_nRPCPhiHoles;   //!
   TBranch        *b_mu_staco_nTGCEtaHits;   //!
   TBranch        *b_mu_staco_nTGCEtaHoles;   //!
   TBranch        *b_mu_staco_nTGCPhiHits;   //!
   TBranch        *b_mu_staco_nTGCPhiHoles;   //!
   TBranch        *b_mu_staco_nprecisionLayers;   //!
   TBranch        *b_mu_staco_nprecisionHoleLayers;   //!
   TBranch        *b_mu_staco_nphiLayers;   //!
   TBranch        *b_mu_staco_ntrigEtaLayers;   //!
   TBranch        *b_mu_staco_nphiHoleLayers;   //!
   TBranch        *b_mu_staco_ntrigEtaHoleLayers;   //!
   TBranch        *b_mu_staco_nMDTBIHits;   //!
   TBranch        *b_mu_staco_nMDTBMHits;   //!
   TBranch        *b_mu_staco_nMDTBOHits;   //!
   TBranch        *b_mu_staco_nMDTBEEHits;   //!
   TBranch        *b_mu_staco_nMDTBIS78Hits;   //!
   TBranch        *b_mu_staco_nMDTEIHits;   //!
   TBranch        *b_mu_staco_nMDTEMHits;   //!
   TBranch        *b_mu_staco_nMDTEOHits;   //!
   TBranch        *b_mu_staco_nMDTEEHits;   //!
   TBranch        *b_mu_staco_nRPCLayer1EtaHits;   //!
   TBranch        *b_mu_staco_nRPCLayer2EtaHits;   //!
   TBranch        *b_mu_staco_nRPCLayer3EtaHits;   //!
   TBranch        *b_mu_staco_nRPCLayer1PhiHits;   //!
   TBranch        *b_mu_staco_nRPCLayer2PhiHits;   //!
   TBranch        *b_mu_staco_nRPCLayer3PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer1EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer2EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer3EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer4EtaHits;   //!
   TBranch        *b_mu_staco_nTGCLayer1PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer2PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer3PhiHits;   //!
   TBranch        *b_mu_staco_nTGCLayer4PhiHits;   //!
   TBranch        *b_mu_staco_barrelSectors;   //!
   TBranch        *b_mu_staco_endcapSectors;   //!
   TBranch        *b_mu_staco_trackd0;   //!
   TBranch        *b_mu_staco_trackz0;   //!
   TBranch        *b_mu_staco_trackphi;   //!
   TBranch        *b_mu_staco_tracktheta;   //!
   TBranch        *b_mu_staco_trackqoverp;   //!
   TBranch        *b_mu_staco_trackcov_d0;   //!
   TBranch        *b_mu_staco_trackcov_z0;   //!
   TBranch        *b_mu_staco_trackcov_phi;   //!
   TBranch        *b_mu_staco_trackcov_theta;   //!
   TBranch        *b_mu_staco_trackcov_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_d0_z0;   //!
   TBranch        *b_mu_staco_trackcov_d0_phi;   //!
   TBranch        *b_mu_staco_trackcov_d0_theta;   //!
   TBranch        *b_mu_staco_trackcov_d0_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_z0_phi;   //!
   TBranch        *b_mu_staco_trackcov_z0_theta;   //!
   TBranch        *b_mu_staco_trackcov_z0_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_phi_theta;   //!
   TBranch        *b_mu_staco_trackcov_phi_qoverp;   //!
   TBranch        *b_mu_staco_trackcov_theta_qoverp;   //!
   TBranch        *b_mu_staco_trackfitchi2;   //!
   TBranch        *b_mu_staco_trackfitndof;   //!
   TBranch        *b_mu_staco_hastrack;   //!
   TBranch        *b_mu_staco_trackd0beam;   //!
   TBranch        *b_mu_staco_trackz0beam;   //!
   TBranch        *b_mu_staco_tracksigd0beam;   //!
   TBranch        *b_mu_staco_tracksigz0beam;   //!
   TBranch        *b_mu_staco_trackd0pv;   //!
   TBranch        *b_mu_staco_trackz0pv;   //!
   TBranch        *b_mu_staco_tracksigd0pv;   //!
   TBranch        *b_mu_staco_tracksigz0pv;   //!
   TBranch        *b_mu_staco_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_staco_trackd0pvunbiased;   //!
   TBranch        *b_mu_staco_trackz0pvunbiased;   //!
   TBranch        *b_mu_staco_tracksigd0pvunbiased;   //!
   TBranch        *b_mu_staco_tracksigz0pvunbiased;   //!
   TBranch        *b_mu_staco_EFCB_index;   //!
   TBranch        *b_mu_staco_EFMG_index;   //!
   TBranch        *b_mu_staco_EFME_index;   //!
   TBranch        *b_mu_calo_n;   //!
   TBranch        *b_mu_calo_E;   //!
   TBranch        *b_mu_calo_pt;   //!
   TBranch        *b_mu_calo_m;   //!
   TBranch        *b_mu_calo_eta;   //!
   TBranch        *b_mu_calo_phi;   //!
   TBranch        *b_mu_calo_px;   //!
   TBranch        *b_mu_calo_py;   //!
   TBranch        *b_mu_calo_pz;   //!
   TBranch        *b_mu_calo_charge;   //!
   TBranch        *b_mu_calo_allauthor;   //!
   TBranch        *b_mu_calo_author;   //!
   TBranch        *b_mu_calo_beta;   //!
   TBranch        *b_mu_calo_isMuonLikelihood;   //!
   TBranch        *b_mu_calo_matchchi2;   //!
   TBranch        *b_mu_calo_matchndof;   //!
   TBranch        *b_mu_calo_etcone20;   //!
   TBranch        *b_mu_calo_etcone30;   //!
   TBranch        *b_mu_calo_etcone40;   //!
   TBranch        *b_mu_calo_nucone20;   //!
   TBranch        *b_mu_calo_nucone30;   //!
   TBranch        *b_mu_calo_nucone40;   //!
   TBranch        *b_mu_calo_ptcone20;   //!
   TBranch        *b_mu_calo_ptcone30;   //!
   TBranch        *b_mu_calo_ptcone40;   //!
   TBranch        *b_mu_calo_scatteringCurvatureSignificance;   //!
   TBranch        *b_mu_calo_scatteringNeighbourSignificance;   //!
   TBranch        *b_mu_calo_momentumBalanceSignificance;   //!
   TBranch        *b_mu_calo_energyLossPar;   //!
   TBranch        *b_mu_calo_energyLossErr;   //!
   TBranch        *b_mu_calo_etCore;   //!
   TBranch        *b_mu_calo_energyLossType;   //!
   TBranch        *b_mu_calo_caloMuonIdTag;   //!
   TBranch        *b_mu_calo_caloLRLikelihood;   //!
   TBranch        *b_mu_calo_bestMatch;   //!
   TBranch        *b_mu_calo_isStandAloneMuon;   //!
   TBranch        *b_mu_calo_isCombinedMuon;   //!
   TBranch        *b_mu_calo_isLowPtReconstructedMuon;   //!
   TBranch        *b_mu_calo_isSegmentTaggedMuon;   //!
   TBranch        *b_mu_calo_isCaloMuonId;   //!
   TBranch        *b_mu_calo_alsoFoundByLowPt;   //!
   TBranch        *b_mu_calo_alsoFoundByCaloMuonId;   //!
   TBranch        *b_mu_calo_isSiliconAssociatedForwardMuon;   //!
   TBranch        *b_mu_calo_loose;   //!
   TBranch        *b_mu_calo_medium;   //!
   TBranch        *b_mu_calo_tight;   //!
   TBranch        *b_mu_calo_d0_exPV;   //!
   TBranch        *b_mu_calo_z0_exPV;   //!
   TBranch        *b_mu_calo_phi_exPV;   //!
   TBranch        *b_mu_calo_theta_exPV;   //!
   TBranch        *b_mu_calo_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cb_d0_exPV;   //!
   TBranch        *b_mu_calo_cb_z0_exPV;   //!
   TBranch        *b_mu_calo_cb_phi_exPV;   //!
   TBranch        *b_mu_calo_cb_theta_exPV;   //!
   TBranch        *b_mu_calo_cb_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_d0_exPV;   //!
   TBranch        *b_mu_calo_id_z0_exPV;   //!
   TBranch        *b_mu_calo_id_phi_exPV;   //!
   TBranch        *b_mu_calo_id_theta_exPV;   //!
   TBranch        *b_mu_calo_id_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_d0_exPV;   //!
   TBranch        *b_mu_calo_me_z0_exPV;   //!
   TBranch        *b_mu_calo_me_phi_exPV;   //!
   TBranch        *b_mu_calo_me_theta_exPV;   //!
   TBranch        *b_mu_calo_me_qoverp_exPV;   //!
   TBranch        *b_mu_calo_ie_d0_exPV;   //!
   TBranch        *b_mu_calo_ie_z0_exPV;   //!
   TBranch        *b_mu_calo_ie_phi_exPV;   //!
   TBranch        *b_mu_calo_ie_theta_exPV;   //!
   TBranch        *b_mu_calo_ie_qoverp_exPV;   //!
   TBranch        *b_mu_calo_SpaceTime_detID;   //!
   TBranch        *b_mu_calo_SpaceTime_t;   //!
   TBranch        *b_mu_calo_SpaceTime_tError;   //!
   TBranch        *b_mu_calo_SpaceTime_weight;   //!
   TBranch        *b_mu_calo_SpaceTime_x;   //!
   TBranch        *b_mu_calo_SpaceTime_y;   //!
   TBranch        *b_mu_calo_SpaceTime_z;   //!
   TBranch        *b_mu_calo_cov_d0_exPV;   //!
   TBranch        *b_mu_calo_cov_z0_exPV;   //!
   TBranch        *b_mu_calo_cov_phi_exPV;   //!
   TBranch        *b_mu_calo_cov_theta_exPV;   //!
   TBranch        *b_mu_calo_cov_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_calo_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_calo_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_calo_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_calo_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_calo_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_cov_d0_exPV;   //!
   TBranch        *b_mu_calo_id_cov_z0_exPV;   //!
   TBranch        *b_mu_calo_id_cov_phi_exPV;   //!
   TBranch        *b_mu_calo_id_cov_theta_exPV;   //!
   TBranch        *b_mu_calo_id_cov_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_calo_id_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_calo_id_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_calo_id_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_calo_id_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_calo_id_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_calo_id_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_calo_id_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_cov_d0_exPV;   //!
   TBranch        *b_mu_calo_me_cov_z0_exPV;   //!
   TBranch        *b_mu_calo_me_cov_phi_exPV;   //!
   TBranch        *b_mu_calo_me_cov_theta_exPV;   //!
   TBranch        *b_mu_calo_me_cov_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_cov_d0_z0_exPV;   //!
   TBranch        *b_mu_calo_me_cov_d0_phi_exPV;   //!
   TBranch        *b_mu_calo_me_cov_d0_theta_exPV;   //!
   TBranch        *b_mu_calo_me_cov_d0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_cov_z0_phi_exPV;   //!
   TBranch        *b_mu_calo_me_cov_z0_theta_exPV;   //!
   TBranch        *b_mu_calo_me_cov_z0_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_cov_phi_theta_exPV;   //!
   TBranch        *b_mu_calo_me_cov_phi_qoverp_exPV;   //!
   TBranch        *b_mu_calo_me_cov_theta_qoverp_exPV;   //!
   TBranch        *b_mu_calo_ms_d0;   //!
   TBranch        *b_mu_calo_ms_z0;   //!
   TBranch        *b_mu_calo_ms_phi;   //!
   TBranch        *b_mu_calo_ms_theta;   //!
   TBranch        *b_mu_calo_ms_qoverp;   //!
   TBranch        *b_mu_calo_id_d0;   //!
   TBranch        *b_mu_calo_id_z0;   //!
   TBranch        *b_mu_calo_id_phi;   //!
   TBranch        *b_mu_calo_id_theta;   //!
   TBranch        *b_mu_calo_id_qoverp;   //!
   TBranch        *b_mu_calo_me_d0;   //!
   TBranch        *b_mu_calo_me_z0;   //!
   TBranch        *b_mu_calo_me_phi;   //!
   TBranch        *b_mu_calo_me_theta;   //!
   TBranch        *b_mu_calo_me_qoverp;   //!
   TBranch        *b_mu_calo_ie_d0;   //!
   TBranch        *b_mu_calo_ie_z0;   //!
   TBranch        *b_mu_calo_ie_phi;   //!
   TBranch        *b_mu_calo_ie_theta;   //!
   TBranch        *b_mu_calo_ie_qoverp;   //!
   TBranch        *b_mu_calo_nOutliersOnTrack;   //!
   TBranch        *b_mu_calo_nBLHits;   //!
   TBranch        *b_mu_calo_nPixHits;   //!
   TBranch        *b_mu_calo_nSCTHits;   //!
   TBranch        *b_mu_calo_nTRTHits;   //!
   TBranch        *b_mu_calo_nTRTHighTHits;   //!
   TBranch        *b_mu_calo_nBLSharedHits;   //!
   TBranch        *b_mu_calo_nPixSharedHits;   //!
   TBranch        *b_mu_calo_nPixHoles;   //!
   TBranch        *b_mu_calo_nSCTSharedHits;   //!
   TBranch        *b_mu_calo_nSCTHoles;   //!
   TBranch        *b_mu_calo_nTRTOutliers;   //!
   TBranch        *b_mu_calo_nTRTHighTOutliers;   //!
   TBranch        *b_mu_calo_nGangedPixels;   //!
   TBranch        *b_mu_calo_nPixelDeadSensors;   //!
   TBranch        *b_mu_calo_nSCTDeadSensors;   //!
   TBranch        *b_mu_calo_nTRTDeadStraws;   //!
   TBranch        *b_mu_calo_expectBLayerHit;   //!
   TBranch        *b_mu_calo_nMDTHits;   //!
   TBranch        *b_mu_calo_nMDTHoles;   //!
   TBranch        *b_mu_calo_nCSCEtaHits;   //!
   TBranch        *b_mu_calo_nCSCEtaHoles;   //!
   TBranch        *b_mu_calo_nCSCUnspoiledEtaHits;   //!
   TBranch        *b_mu_calo_nCSCPhiHits;   //!
   TBranch        *b_mu_calo_nCSCPhiHoles;   //!
   TBranch        *b_mu_calo_nRPCEtaHits;   //!
   TBranch        *b_mu_calo_nRPCEtaHoles;   //!
   TBranch        *b_mu_calo_nRPCPhiHits;   //!
   TBranch        *b_mu_calo_nRPCPhiHoles;   //!
   TBranch        *b_mu_calo_nTGCEtaHits;   //!
   TBranch        *b_mu_calo_nTGCEtaHoles;   //!
   TBranch        *b_mu_calo_nTGCPhiHits;   //!
   TBranch        *b_mu_calo_nTGCPhiHoles;   //!
   TBranch        *b_mu_calo_nprecisionLayers;   //!
   TBranch        *b_mu_calo_nprecisionHoleLayers;   //!
   TBranch        *b_mu_calo_nphiLayers;   //!
   TBranch        *b_mu_calo_ntrigEtaLayers;   //!
   TBranch        *b_mu_calo_nphiHoleLayers;   //!
   TBranch        *b_mu_calo_ntrigEtaHoleLayers;   //!
   TBranch        *b_mu_calo_nMDTBIHits;   //!
   TBranch        *b_mu_calo_nMDTBMHits;   //!
   TBranch        *b_mu_calo_nMDTBOHits;   //!
   TBranch        *b_mu_calo_nMDTBEEHits;   //!
   TBranch        *b_mu_calo_nMDTBIS78Hits;   //!
   TBranch        *b_mu_calo_nMDTEIHits;   //!
   TBranch        *b_mu_calo_nMDTEMHits;   //!
   TBranch        *b_mu_calo_nMDTEOHits;   //!
   TBranch        *b_mu_calo_nMDTEEHits;   //!
   TBranch        *b_mu_calo_nRPCLayer1EtaHits;   //!
   TBranch        *b_mu_calo_nRPCLayer2EtaHits;   //!
   TBranch        *b_mu_calo_nRPCLayer3EtaHits;   //!
   TBranch        *b_mu_calo_nRPCLayer1PhiHits;   //!
   TBranch        *b_mu_calo_nRPCLayer2PhiHits;   //!
   TBranch        *b_mu_calo_nRPCLayer3PhiHits;   //!
   TBranch        *b_mu_calo_nTGCLayer1EtaHits;   //!
   TBranch        *b_mu_calo_nTGCLayer2EtaHits;   //!
   TBranch        *b_mu_calo_nTGCLayer3EtaHits;   //!
   TBranch        *b_mu_calo_nTGCLayer4EtaHits;   //!
   TBranch        *b_mu_calo_nTGCLayer1PhiHits;   //!
   TBranch        *b_mu_calo_nTGCLayer2PhiHits;   //!
   TBranch        *b_mu_calo_nTGCLayer3PhiHits;   //!
   TBranch        *b_mu_calo_nTGCLayer4PhiHits;   //!
   TBranch        *b_mu_calo_barrelSectors;   //!
   TBranch        *b_mu_calo_endcapSectors;   //!
   TBranch        *b_mu_calo_trackd0;   //!
   TBranch        *b_mu_calo_trackz0;   //!
   TBranch        *b_mu_calo_trackphi;   //!
   TBranch        *b_mu_calo_tracktheta;   //!
   TBranch        *b_mu_calo_trackqoverp;   //!
   TBranch        *b_mu_calo_trackcov_d0;   //!
   TBranch        *b_mu_calo_trackcov_z0;   //!
   TBranch        *b_mu_calo_trackcov_phi;   //!
   TBranch        *b_mu_calo_trackcov_theta;   //!
   TBranch        *b_mu_calo_trackcov_qoverp;   //!
   TBranch        *b_mu_calo_trackcov_d0_z0;   //!
   TBranch        *b_mu_calo_trackcov_d0_phi;   //!
   TBranch        *b_mu_calo_trackcov_d0_theta;   //!
   TBranch        *b_mu_calo_trackcov_d0_qoverp;   //!
   TBranch        *b_mu_calo_trackcov_z0_phi;   //!
   TBranch        *b_mu_calo_trackcov_z0_theta;   //!
   TBranch        *b_mu_calo_trackcov_z0_qoverp;   //!
   TBranch        *b_mu_calo_trackcov_phi_theta;   //!
   TBranch        *b_mu_calo_trackcov_phi_qoverp;   //!
   TBranch        *b_mu_calo_trackcov_theta_qoverp;   //!
   TBranch        *b_mu_calo_trackfitchi2;   //!
   TBranch        *b_mu_calo_trackfitndof;   //!
   TBranch        *b_mu_calo_hastrack;   //!
   TBranch        *b_mu_calo_trackd0beam;   //!
   TBranch        *b_mu_calo_trackz0beam;   //!
   TBranch        *b_mu_calo_tracksigd0beam;   //!
   TBranch        *b_mu_calo_tracksigz0beam;   //!
   TBranch        *b_mu_calo_trackd0pv;   //!
   TBranch        *b_mu_calo_trackz0pv;   //!
   TBranch        *b_mu_calo_tracksigd0pv;   //!
   TBranch        *b_mu_calo_tracksigz0pv;   //!
   TBranch        *b_mu_calo_trackIPEstimate_d0_biasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_z0_biasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_sigd0_biasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_sigz0_biasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_d0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_z0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased;   //!
   TBranch        *b_mu_calo_trackd0pvunbiased;   //!
   TBranch        *b_mu_calo_trackz0pvunbiased;   //!
   TBranch        *b_mu_calo_tracksigd0pvunbiased;   //!
   TBranch        *b_mu_calo_tracksigz0pvunbiased;   //!
   TBranch        *b_mu_calo_EFCB_index;   //!
   TBranch        *b_mu_calo_EFMG_index;   //!
   TBranch        *b_mu_calo_EFME_index;   //!
   TBranch        *b_MET_RefFinal_phi;   //!
   TBranch        *b_MET_RefFinal_et;   //!
   TBranch        *b_MET_RefFinal_sumet;   //!
   TBranch        *b_MET_RefFinal_etx_CentralReg;   //!
   TBranch        *b_MET_RefFinal_ety_CentralReg;   //!
   TBranch        *b_MET_RefFinal_sumet_CentralReg;   //!
   TBranch        *b_MET_RefFinal_etx_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_ety_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_sumet_EndcapRegion;   //!
   TBranch        *b_MET_RefFinal_etx_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_ety_ForwardReg;   //!
   TBranch        *b_MET_RefFinal_sumet_ForwardReg;   //!
   TBranch        *b_MET_MuonBoy_phi;   //!
   TBranch        *b_MET_MuonBoy_et;   //!
   TBranch        *b_MET_RefMuon_Track_phi;   //!
   TBranch        *b_MET_RefMuon_Track_et;   //!
   TBranch        *b_MET_LocHadTopo_etx_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_ety_CentralReg;   //!
   TBranch        *b_MET_LocHadTopo_etx_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_ety_EndcapRegion;   //!
   TBranch        *b_MET_LocHadTopo_etx_ForwardReg;   //!
   TBranch        *b_MET_LocHadTopo_ety_ForwardReg;   //!
   TBranch        *b_vxp_n;   //!
   TBranch        *b_vxp_x;   //!
   TBranch        *b_vxp_y;   //!
   TBranch        *b_vxp_z;   //!
   TBranch        *b_vxp_cov_x;   //!
   TBranch        *b_vxp_cov_y;   //!
   TBranch        *b_vxp_cov_z;   //!
   TBranch        *b_vxp_cov_xy;   //!
   TBranch        *b_vxp_cov_xz;   //!
   TBranch        *b_vxp_cov_yz;   //!
   TBranch        *b_vxp_type;   //!
   TBranch        *b_vxp_chi2;   //!
   TBranch        *b_vxp_ndof;   //!
   TBranch        *b_vxp_px;   //!
   TBranch        *b_vxp_py;   //!
   TBranch        *b_vxp_pz;   //!
   TBranch        *b_vxp_E;   //!
   TBranch        *b_vxp_m;   //!
   TBranch        *b_vxp_nTracks;   //!
   TBranch        *b_vxp_sumPt;   //!
   TBranch        *b_vxp_trk_weight;   //!
   TBranch        *b_vxp_trk_n;   //!
   TBranch        *b_vxp_trk_index;   //!
   TBranch        *b_trig_DB_SMK;   //!
   TBranch        *b_trig_L1_mu_eta;   //!
   TBranch        *b_trig_L1_mu_phi;   //!
   TBranch        *b_trig_L1_mu_thrName;   //!
   TBranch        *b_trig_L2_muonfeature_eta;   //!
   TBranch        *b_trig_L2_muonfeature_phi;   //!
   TBranch        *b_trig_L2_combmuonfeature_eta;   //!
   TBranch        *b_trig_L2_combmuonfeature_phi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_pt;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_eta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_SA_phi;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_pt;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_eta;   //!
   TBranch        *b_trig_EF_trigmuonef_track_CB_phi;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_pt;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_eta;   //!
   TBranch        *b_trig_EF_trigmugirl_track_CB_phi;   //!
   TBranch        *b_trig_Nav_n;   //!
   TBranch        *b_trig_Nav_chain_ChainId;   //!
   TBranch        *b_trig_Nav_chain_RoIType;   //!
   TBranch        *b_trig_Nav_chain_RoIIndex;   //!
   TBranch        *b_trig_RoI_L2_mu_MuonFeature;   //!
   TBranch        *b_trig_RoI_L2_mu_CombinedMuonFeature;   //!
   TBranch        *b_trig_RoI_L2_mu_CombinedMuonFeatureStatus;   //!
   TBranch        *b_trig_RoI_L2_mu_Muon_ROI;   //!
   TBranch        *b_trig_RoI_EF_mu_Muon_ROI;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainer;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFIsolationContainer;   //!
   TBranch        *b_trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus;   //!
   TBranch        *b_trig_EF_el_n;   //!
   TBranch        *b_trig_EF_el_eta;   //!
   TBranch        *b_trig_EF_el_phi;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_Electrons;   //!
   TBranch        *b_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus;   //!
   TBranch        *b_Eta1;   //!
   TBranch        *b_Eta2;   //!
   TBranch        *b_Eta3;   //!
   TBranch        *b_Eta4;   //!
   TBranch        *b_Lep1CaloIso;   //!
   TBranch        *b_Lep1Charge;   //!
   TBranch        *b_Lep1Eta;   //!
   TBranch        *b_Lep1Fla;   //!
   TBranch        *b_Lep1Phi;   //!
   TBranch        *b_Lep1Pt;   //!
   TBranch        *b_Lep1TrkIso;   //!
   TBranch        *b_Lep1d0;   //!
   TBranch        *b_Lep1d0Sig;   //!
   TBranch        *b_Lep1z0;   //!
   TBranch        *b_Lep1z0Sig;   //!
   TBranch        *b_Lep2CaloIso;   //!
   TBranch        *b_Lep2Charge;   //!
   TBranch        *b_Lep2Eta;   //!
   TBranch        *b_Lep2Fla;   //!
   TBranch        *b_Lep2Phi;   //!
   TBranch        *b_Lep2Pt;   //!
   TBranch        *b_Lep2TrkIso;   //!
   TBranch        *b_Lep2d0;   //!
   TBranch        *b_Lep2d0Sig;   //!
   TBranch        *b_Lep2z0;   //!
   TBranch        *b_Lep2z0Sig;   //!
   TBranch        *b_Lep3CaloIso;   //!
   TBranch        *b_Lep3Charge;   //!
   TBranch        *b_Lep3Eta;   //!
   TBranch        *b_Lep3Fla;   //!
   TBranch        *b_Lep3Phi;   //!
   TBranch        *b_Lep3Pt;   //!
   TBranch        *b_Lep3TrkIso;   //!
   TBranch        *b_Lep3d0;   //!
   TBranch        *b_Lep3d0Sig;   //!
   TBranch        *b_Lep3z0;   //!
   TBranch        *b_Lep3z0Sig;   //!
   TBranch        *b_Lep4CaloIso;   //!
   TBranch        *b_Lep4Charge;   //!
   TBranch        *b_Lep4Eta;   //!
   TBranch        *b_Lep4Fla;   //!
   TBranch        *b_Lep4Phi;   //!
   TBranch        *b_Lep4Pt;   //!
   TBranch        *b_Lep4TrkIso;   //!
   TBranch        *b_Lep4d0;   //!
   TBranch        *b_Lep4d0Sig;   //!
   TBranch        *b_Lep4z0;   //!
   TBranch        *b_Lep4z0Sig;   //!
   TBranch        *b_LepEta;   //!
   TBranch        *b_LepPhi;   //!
   TBranch        *b_LepPt;   //!
   TBranch        *b_MZ1;   //!
   TBranch        *b_MZ2;   //!
   TBranch        *b_MZZ;   //!
   TBranch        *b_N_vx;   //!
   TBranch        *b_Phi1;   //!
   TBranch        *b_Phi2;   //!
   TBranch        *b_Phi3;   //!
   TBranch        *b_Phi4;   //!
   TBranch        *b_Pt1;   //!
   TBranch        *b_Pt2;   //!
   TBranch        *b_Pt3;   //!
   TBranch        *b_Pt4;   //!
   TBranch        *b_Z1Eta;   //!
   TBranch        *b_Z1Phi;   //!
   TBranch        *b_Z1Pt;   //!
   TBranch        *b_Z2Eta;   //!
   TBranch        *b_Z2Phi;   //!
   TBranch        *b_Z2Pt;   //!
   TBranch        *b_ZZPt;   //!
   TBranch        *b_Z_Mee;   //!
   TBranch        *b_Z_Mmm;   //!
   TBranch        *b_Zee_Lep1_Eta;   //!
   TBranch        *b_Zee_Lep1_Phi;   //!
   TBranch        *b_Zee_Lep1_Pt;   //!
   TBranch        *b_Zee_Lep2_Eta;   //!
   TBranch        *b_Zee_Lep2_Phi;   //!
   TBranch        *b_Zee_Lep2_Pt;   //!
   TBranch        *b_Zmm_Lep1_Eta;   //!
   TBranch        *b_Zmm_Lep1_Phi;   //!
   TBranch        *b_Zmm_Lep1_Pt;   //!
   TBranch        *b_Zmm_Lep2_Eta;   //!
   TBranch        *b_Zmm_Lep2_Phi;   //!
   TBranch        *b_Zmm_Lep2_Pt;   //!
   TBranch        *b_dEtaZ1;   //!
   TBranch        *b_dEtaZ2;   //!
   TBranch        *b_dPhiZ1;   //!
   TBranch        *b_dPhiZ2;   //!
   TBranch        *b_dPhiZZ;   //!
   TBranch        *b_dPt;   //!
   TBranch        *b_dRZ1;   //!
   TBranch        *b_dRZ2;   //!
   TBranch        *b_dRZZ;   //!
   TBranch        *b_dR_min;   //!
   TBranch        *b_dd0_max;   //!
   TBranch        *b_dd0_min;   //!
   TBranch        *b_dz0_max;   //!
   TBranch        *b_dz0_min;   //!
   TBranch        *b_FLAG_eeee_2Lep;   //!
   TBranch        *b_FLAG_eeee_4Lep;   //!
   TBranch        *b_FLAG_eeee_CaloIso;   //!
   TBranch        *b_FLAG_eeee_D3PD;   //!
   TBranch        *b_FLAG_eeee_DR;   //!
   TBranch        *b_FLAG_eeee_GRL;   //!
   TBranch        *b_FLAG_eeee_IP;   //!
   TBranch        *b_FLAG_eeee_JPsiVeto;   //!
   TBranch        *b_FLAG_eeee_Kine;   //!
   TBranch        *b_FLAG_eeee_LAr;   //!
   TBranch        *b_FLAG_eeee_OneQuad;   //!
   TBranch        *b_FLAG_eeee_PV;   //!
   TBranch        *b_FLAG_eeee_Quad;   //!
   TBranch        *b_FLAG_eeee_TrackIso;   //!
   TBranch        *b_FLAG_eeee_TrigMatch;   //!
   TBranch        *b_FLAG_eeee_Trigger;   //!
   TBranch        *b_FLAG_eeee_Z1;   //!
   TBranch        *b_FLAG_eeee_Z2;   //!
   TBranch        *b_FLAG_eemm_2Lep;   //!
   TBranch        *b_FLAG_eemm_4Lep;   //!
   TBranch        *b_FLAG_eemm_CaloIso;   //!
   TBranch        *b_FLAG_eemm_D3PD;   //!
   TBranch        *b_FLAG_eemm_DR;   //!
   TBranch        *b_FLAG_eemm_GRL;   //!
   TBranch        *b_FLAG_eemm_IP;   //!
   TBranch        *b_FLAG_eemm_JPsiVeto;   //!
   TBranch        *b_FLAG_eemm_Kine;   //!
   TBranch        *b_FLAG_eemm_LAr;   //!
   TBranch        *b_FLAG_eemm_OneQuad;   //!
   TBranch        *b_FLAG_eemm_PV;   //!
   TBranch        *b_FLAG_eemm_Quad;   //!
   TBranch        *b_FLAG_eemm_TrackIso;   //!
   TBranch        *b_FLAG_eemm_TrigMatch;   //!
   TBranch        *b_FLAG_eemm_Trigger;   //!
   TBranch        *b_FLAG_eemm_Z1;   //!
   TBranch        *b_FLAG_eemm_Z2;   //!
   TBranch        *b_FLAG_incl_2Lep;   //!
   TBranch        *b_FLAG_incl_4Lep;   //!
   TBranch        *b_FLAG_incl_CaloIso;   //!
   TBranch        *b_FLAG_incl_D3PD;   //!
   TBranch        *b_FLAG_incl_DR;   //!
   TBranch        *b_FLAG_incl_GRL;   //!
   TBranch        *b_FLAG_incl_IP;   //!
   TBranch        *b_FLAG_incl_JPsiVeto;   //!
   TBranch        *b_FLAG_incl_Kine;   //!
   TBranch        *b_FLAG_incl_LAr;   //!
   TBranch        *b_FLAG_incl_OneQuad;   //!
   TBranch        *b_FLAG_incl_PV;   //!
   TBranch        *b_FLAG_incl_Quad;   //!
   TBranch        *b_FLAG_incl_TrackIso;   //!
   TBranch        *b_FLAG_incl_TrigMatch;   //!
   TBranch        *b_FLAG_incl_Trigger;   //!
   TBranch        *b_FLAG_incl_Z1;   //!
   TBranch        *b_FLAG_incl_Z2;   //!
   TBranch        *b_FLAG_mmee_2Lep;   //!
   TBranch        *b_FLAG_mmee_4Lep;   //!
   TBranch        *b_FLAG_mmee_CaloIso;   //!
   TBranch        *b_FLAG_mmee_D3PD;   //!
   TBranch        *b_FLAG_mmee_DR;   //!
   TBranch        *b_FLAG_mmee_GRL;   //!
   TBranch        *b_FLAG_mmee_IP;   //!
   TBranch        *b_FLAG_mmee_JPsiVeto;   //!
   TBranch        *b_FLAG_mmee_Kine;   //!
   TBranch        *b_FLAG_mmee_LAr;   //!
   TBranch        *b_FLAG_mmee_OneQuad;   //!
   TBranch        *b_FLAG_mmee_PV;   //!
   TBranch        *b_FLAG_mmee_Quad;   //!
   TBranch        *b_FLAG_mmee_TrackIso;   //!
   TBranch        *b_FLAG_mmee_TrigMatch;   //!
   TBranch        *b_FLAG_mmee_Trigger;   //!
   TBranch        *b_FLAG_mmee_Z1;   //!
   TBranch        *b_FLAG_mmee_Z2;   //!
   TBranch        *b_FLAG_mmmm_2Lep;   //!
   TBranch        *b_FLAG_mmmm_4Lep;   //!
   TBranch        *b_FLAG_mmmm_CaloIso;   //!
   TBranch        *b_FLAG_mmmm_D3PD;   //!
   TBranch        *b_FLAG_mmmm_DR;   //!
   TBranch        *b_FLAG_mmmm_GRL;   //!
   TBranch        *b_FLAG_mmmm_IP;   //!
   TBranch        *b_FLAG_mmmm_JPsiVeto;   //!
   TBranch        *b_FLAG_mmmm_Kine;   //!
   TBranch        *b_FLAG_mmmm_LAr;   //!
   TBranch        *b_FLAG_mmmm_OneQuad;   //!
   TBranch        *b_FLAG_mmmm_PV;   //!
   TBranch        *b_FLAG_mmmm_Quad;   //!
   TBranch        *b_FLAG_mmmm_TrackIso;   //!
   TBranch        *b_FLAG_mmmm_TrigMatch;   //!
   TBranch        *b_FLAG_mmmm_Trigger;   //!
   TBranch        *b_FLAG_mmmm_Z1;   //!
   TBranch        *b_FLAG_mmmm_Z2;   //!

   D3PDAnalysisBase(TTree * /*tree*/ =0) { }
   virtual ~D3PDAnalysisBase() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(D3PDAnalysisBase,0);
};

#endif

#ifdef D3PDAnalysisBase_cxx
void D3PDAnalysisBase::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   el_E = 0;
   el_Et = 0;
   el_pt = 0;
   el_m = 0;
   el_eta = 0;
   el_phi = 0;
   el_px = 0;
   el_py = 0;
   el_pz = 0;
   el_charge = 0;
   el_author = 0;
   el_isEM = 0;
   el_isEMLoose = 0;
   el_isEMMedium = 0;
   el_isEMTight = 0;
   el_OQ = 0;
   el_convFlag = 0;
   el_isConv = 0;
   el_nConv = 0;
   el_nSingleTrackConv = 0;
   el_nDoubleTrackConv = 0;
   el_mediumWithoutTrack = 0;
   el_mediumIsoWithoutTrack = 0;
   el_tightWithoutTrack = 0;
   el_tightIsoWithoutTrack = 0;
   el_loose = 0;
   el_looseIso = 0;
   el_medium = 0;
   el_mediumIso = 0;
   el_tight = 0;
   el_tightIso = 0;
   el_loosePP = 0;
   el_loosePPIso = 0;
   el_mediumPP = 0;
   el_mediumPPIso = 0;
   el_tightPP = 0;
   el_tightPPIso = 0;
   el_goodOQ = 0;
   el_Ethad = 0;
   el_Ethad1 = 0;
   el_f1 = 0;
   el_f1core = 0;
   el_Emins1 = 0;
   el_fside = 0;
   el_Emax2 = 0;
   el_ws3 = 0;
   el_wstot = 0;
   el_emaxs1 = 0;
   el_deltaEs = 0;
   el_E233 = 0;
   el_E237 = 0;
   el_E277 = 0;
   el_weta2 = 0;
   el_f3 = 0;
   el_f3core = 0;
   el_rphiallcalo = 0;
   el_Etcone45 = 0;
   el_Etcone15 = 0;
   el_Etcone20 = 0;
   el_Etcone25 = 0;
   el_Etcone30 = 0;
   el_Etcone35 = 0;
   el_Etcone40 = 0;
   el_ptcone20 = 0;
   el_ptcone30 = 0;
   el_ptcone40 = 0;
   el_nucone20 = 0;
   el_nucone30 = 0;
   el_nucone40 = 0;
   el_Etcone15_pt_corrected = 0;
   el_Etcone20_pt_corrected = 0;
   el_Etcone25_pt_corrected = 0;
   el_Etcone30_pt_corrected = 0;
   el_Etcone35_pt_corrected = 0;
   el_Etcone40_pt_corrected = 0;
   el_convanglematch = 0;
   el_convtrackmatch = 0;
   el_hasconv = 0;
   el_convvtxx = 0;
   el_convvtxy = 0;
   el_convvtxz = 0;
   el_Rconv = 0;
   el_zconv = 0;
   el_convvtxchi2 = 0;
   el_pt1conv = 0;
   el_convtrk1nBLHits = 0;
   el_convtrk1nPixHits = 0;
   el_convtrk1nSCTHits = 0;
   el_convtrk1nTRTHits = 0;
   el_pt2conv = 0;
   el_convtrk2nBLHits = 0;
   el_convtrk2nPixHits = 0;
   el_convtrk2nSCTHits = 0;
   el_convtrk2nTRTHits = 0;
   el_ptconv = 0;
   el_pzconv = 0;
   el_pos7 = 0;
   el_etacorrmag = 0;
   el_deltaeta1 = 0;
   el_deltaeta2 = 0;
   el_deltaphi2 = 0;
   el_deltaphiRescaled = 0;
   el_deltaPhiFromLast = 0;
   el_deltaPhiRot = 0;
   el_expectHitInBLayer = 0;
   el_trackd0_physics = 0;
   el_etaSampling1 = 0;
   el_reta = 0;
   el_rphi = 0;
   el_topoEtcone20 = 0;
   el_topoEtcone30 = 0;
   el_topoEtcone40 = 0;
   el_EtringnoisedR03sig2 = 0;
   el_EtringnoisedR03sig3 = 0;
   el_EtringnoisedR03sig4 = 0;
   el_isolationlikelihoodjets = 0;
   el_isolationlikelihoodhqelectrons = 0;
   el_electronweight = 0;
   el_electronbgweight = 0;
   el_softeweight = 0;
   el_softebgweight = 0;
   el_neuralnet = 0;
   el_Hmatrix = 0;
   el_Hmatrix5 = 0;
   el_adaboost = 0;
   el_softeneuralnet = 0;
   el_ringernn = 0;
   el_zvertex = 0;
   el_errz = 0;
   el_etap = 0;
   el_depth = 0;
   el_refittedTrack_n = 0;
   el_refittedTrack_author = 0;
   el_refittedTrack_chi2 = 0;
   el_refittedTrack_hasBrem = 0;
   el_refittedTrack_bremRadius = 0;
   el_refittedTrack_bremZ = 0;
   el_refittedTrack_bremRadiusErr = 0;
   el_refittedTrack_bremZErr = 0;
   el_refittedTrack_bremFitStatus = 0;
   el_refittedTrack_qoverp = 0;
   el_refittedTrack_d0 = 0;
   el_refittedTrack_z0 = 0;
   el_refittedTrack_theta = 0;
   el_refittedTrack_phi = 0;
   el_refittedTrack_LMqoverp = 0;
   el_refittedTrack_covd0 = 0;
   el_refittedTrack_covz0 = 0;
   el_refittedTrack_covphi = 0;
   el_refittedTrack_covtheta = 0;
   el_refittedTrack_covqoverp = 0;
   el_refittedTrack_covd0z0 = 0;
   el_refittedTrack_covz0phi = 0;
   el_refittedTrack_covz0theta = 0;
   el_refittedTrack_covz0qoverp = 0;
   el_refittedTrack_covd0phi = 0;
   el_refittedTrack_covd0theta = 0;
   el_refittedTrack_covd0qoverp = 0;
   el_refittedTrack_covphitheta = 0;
   el_refittedTrack_covphiqoverp = 0;
   el_refittedTrack_covthetaqoverp = 0;
   el_Es0 = 0;
   el_etas0 = 0;
   el_phis0 = 0;
   el_Es1 = 0;
   el_etas1 = 0;
   el_phis1 = 0;
   el_Es2 = 0;
   el_etas2 = 0;
   el_phis2 = 0;
   el_Es3 = 0;
   el_etas3 = 0;
   el_phis3 = 0;
   el_E_PreSamplerB = 0;
   el_E_EMB1 = 0;
   el_E_EMB2 = 0;
   el_E_EMB3 = 0;
   el_E_PreSamplerE = 0;
   el_E_EME1 = 0;
   el_E_EME2 = 0;
   el_E_EME3 = 0;
   el_E_HEC0 = 0;
   el_E_HEC1 = 0;
   el_E_HEC2 = 0;
   el_E_HEC3 = 0;
   el_E_TileBar0 = 0;
   el_E_TileBar1 = 0;
   el_E_TileBar2 = 0;
   el_E_TileGap1 = 0;
   el_E_TileGap2 = 0;
   el_E_TileGap3 = 0;
   el_E_TileExt0 = 0;
   el_E_TileExt1 = 0;
   el_E_TileExt2 = 0;
   el_E_FCAL0 = 0;
   el_E_FCAL1 = 0;
   el_E_FCAL2 = 0;
   el_cl_E = 0;
   el_cl_pt = 0;
   el_cl_eta = 0;
   el_cl_phi = 0;
   el_firstEdens = 0;
   el_cellmaxfrac = 0;
   el_longitudinal = 0;
   el_secondlambda = 0;
   el_lateral = 0;
   el_secondR = 0;
   el_centerlambda = 0;
   el_rawcl_Es0 = 0;
   el_rawcl_etas0 = 0;
   el_rawcl_phis0 = 0;
   el_rawcl_Es1 = 0;
   el_rawcl_etas1 = 0;
   el_rawcl_phis1 = 0;
   el_rawcl_Es2 = 0;
   el_rawcl_etas2 = 0;
   el_rawcl_phis2 = 0;
   el_rawcl_Es3 = 0;
   el_rawcl_etas3 = 0;
   el_rawcl_phis3 = 0;
   el_rawcl_E = 0;
   el_rawcl_pt = 0;
   el_rawcl_eta = 0;
   el_rawcl_phi = 0;
   el_rings_E = 0;
   el_trackd0 = 0;
   el_trackz0 = 0;
   el_trackphi = 0;
   el_tracktheta = 0;
   el_trackqoverp = 0;
   el_trackpt = 0;
   el_tracketa = 0;
   el_trackcov_d0 = 0;
   el_trackcov_z0 = 0;
   el_trackcov_phi = 0;
   el_trackcov_theta = 0;
   el_trackcov_qoverp = 0;
   el_trackcov_d0_z0 = 0;
   el_trackcov_d0_phi = 0;
   el_trackcov_d0_theta = 0;
   el_trackcov_d0_qoverp = 0;
   el_trackcov_z0_phi = 0;
   el_trackcov_z0_theta = 0;
   el_trackcov_z0_qoverp = 0;
   el_trackcov_phi_theta = 0;
   el_trackcov_phi_qoverp = 0;
   el_trackcov_theta_qoverp = 0;
   el_trackfitchi2 = 0;
   el_trackfitndof = 0;
   el_nBLHits = 0;
   el_nPixHits = 0;
   el_nSCTHits = 0;
   el_nTRTHits = 0;
   el_nTRTHighTHits = 0;
   el_nPixHoles = 0;
   el_nSCTHoles = 0;
   el_nTRTHoles = 0;
   el_nPixelDeadSensors = 0;
   el_nSCTDeadSensors = 0;
   el_nBLSharedHits = 0;
   el_nPixSharedHits = 0;
   el_nSCTSharedHits = 0;
   el_nBLayerSplitHits = 0;
   el_nPixSplitHits = 0;
   el_nBLayerOutliers = 0;
   el_nPixelOutliers = 0;
   el_nSCTOutliers = 0;
   el_nTRTOutliers = 0;
   el_nTRTHighTOutliers = 0;
   el_nContribPixelLayers = 0;
   el_nGangedPixels = 0;
   el_nGangedFlaggedFakes = 0;
   el_nPixelSpoiltHits = 0;
   el_nSCTDoubleHoles = 0;
   el_nSCTSpoiltHits = 0;
   el_expectBLayerHit = 0;
   el_nSiHits = 0;
   el_TRTHighTHitsRatio = 0;
   el_TRTHighTOutliersRatio = 0;
   el_pixeldEdx = 0;
   el_nGoodHitsPixeldEdx = 0;
   el_massPixeldEdx = 0;
   el_likelihoodsPixeldEdx = 0;
   el_eProbabilityComb = 0;
   el_eProbabilityHT = 0;
   el_eProbabilityToT = 0;
   el_eProbabilityBrem = 0;
   el_vertweight = 0;
   el_vertx = 0;
   el_verty = 0;
   el_vertz = 0;
   el_trackd0beam = 0;
   el_trackz0beam = 0;
   el_tracksigd0beam = 0;
   el_tracksigz0beam = 0;
   el_trackd0pv = 0;
   el_trackz0pv = 0;
   el_tracksigd0pv = 0;
   el_tracksigz0pv = 0;
   el_trackIPEstimate_d0_biasedpvunbiased = 0;
   el_trackIPEstimate_z0_biasedpvunbiased = 0;
   el_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   el_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   el_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   el_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   el_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   el_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   el_trackd0pvunbiased = 0;
   el_trackz0pvunbiased = 0;
   el_tracksigd0pvunbiased = 0;
   el_tracksigz0pvunbiased = 0;
   el_Unrefittedtrack_d0 = 0;
   el_Unrefittedtrack_z0 = 0;
   el_Unrefittedtrack_phi = 0;
   el_Unrefittedtrack_theta = 0;
   el_Unrefittedtrack_qoverp = 0;
   el_Unrefittedtrack_pt = 0;
   el_Unrefittedtrack_eta = 0;
   el_hastrack = 0;
   el_deltaEmax2 = 0;
   el_calibHitsShowerDepth = 0;
   el_isIso = 0;
   el_mvaptcone20 = 0;
   el_mvaptcone30 = 0;
   el_mvaptcone40 = 0;
   el_CaloPointing_eta = 0;
   el_CaloPointing_sigma_eta = 0;
   el_CaloPointing_zvertex = 0;
   el_CaloPointing_sigma_zvertex = 0;
   el_HPV_eta = 0;
   el_HPV_sigma_eta = 0;
   el_HPV_zvertex = 0;
   el_HPV_sigma_zvertex = 0;
   el_topoEtcone60 = 0;
   el_ES0_real = 0;
   el_ES1_real = 0;
   el_ES2_real = 0;
   el_ES3_real = 0;
   el_EcellS0 = 0;
   el_etacellS0 = 0;
   el_Etcone40_ED_corrected = 0;
   el_Etcone40_corrected = 0;
   el_topoEtcone20_corrected = 0;
   el_topoEtcone30_corrected = 0;
   el_topoEtcone40_corrected = 0;
   el_ED_median = 0;
   el_ED_sigma = 0;
   el_ED_Njets = 0;
   el_jet_dr = 0;
   el_jet_E = 0;
   el_jet_pt = 0;
   el_jet_m = 0;
   el_jet_eta = 0;
   el_jet_phi = 0;
   el_jet_matched = 0;
   el_EF_dr = 0;
   el_EF_index = 0;
   ph_E = 0;
   ph_Et = 0;
   ph_pt = 0;
   ph_m = 0;
   ph_eta = 0;
   ph_phi = 0;
   ph_px = 0;
   ph_py = 0;
   ph_pz = 0;
   ph_author = 0;
   ph_isRecovered = 0;
   ph_isEM = 0;
   ph_isEMLoose = 0;
   ph_isEMMedium = 0;
   ph_isEMTight = 0;
   ph_OQ = 0;
   ph_convFlag = 0;
   ph_isConv = 0;
   ph_nConv = 0;
   ph_nSingleTrackConv = 0;
   ph_nDoubleTrackConv = 0;
   ph_loose = 0;
   ph_looseIso = 0;
   ph_tight = 0;
   ph_tightIso = 0;
   ph_looseAR = 0;
   ph_looseARIso = 0;
   ph_tightAR = 0;
   ph_tightARIso = 0;
   ph_goodOQ = 0;
   ph_Ethad = 0;
   ph_Ethad1 = 0;
   ph_E033 = 0;
   ph_f1 = 0;
   ph_f1core = 0;
   ph_Emins1 = 0;
   ph_fside = 0;
   ph_Emax2 = 0;
   ph_ws3 = 0;
   ph_wstot = 0;
   ph_E132 = 0;
   ph_E1152 = 0;
   ph_emaxs1 = 0;
   ph_deltaEs = 0;
   ph_E233 = 0;
   ph_E237 = 0;
   ph_E277 = 0;
   ph_weta2 = 0;
   ph_f3 = 0;
   ph_f3core = 0;
   ph_rphiallcalo = 0;
   ph_Etcone45 = 0;
   ph_Etcone15 = 0;
   ph_Etcone20 = 0;
   ph_Etcone25 = 0;
   ph_Etcone30 = 0;
   ph_Etcone35 = 0;
   ph_Etcone40 = 0;
   ph_ptcone20 = 0;
   ph_ptcone30 = 0;
   ph_ptcone40 = 0;
   ph_nucone20 = 0;
   ph_nucone30 = 0;
   ph_nucone40 = 0;
   ph_Etcone15_pt_corrected = 0;
   ph_Etcone20_pt_corrected = 0;
   ph_Etcone25_pt_corrected = 0;
   ph_Etcone30_pt_corrected = 0;
   ph_Etcone35_pt_corrected = 0;
   ph_Etcone40_pt_corrected = 0;
   ph_convanglematch = 0;
   ph_convtrackmatch = 0;
   ph_hasconv = 0;
   ph_convvtxx = 0;
   ph_convvtxy = 0;
   ph_convvtxz = 0;
   ph_Rconv = 0;
   ph_zconv = 0;
   ph_convvtxchi2 = 0;
   ph_pt1conv = 0;
   ph_convtrk1nBLHits = 0;
   ph_convtrk1nPixHits = 0;
   ph_convtrk1nSCTHits = 0;
   ph_convtrk1nTRTHits = 0;
   ph_pt2conv = 0;
   ph_convtrk2nBLHits = 0;
   ph_convtrk2nPixHits = 0;
   ph_convtrk2nSCTHits = 0;
   ph_convtrk2nTRTHits = 0;
   ph_ptconv = 0;
   ph_pzconv = 0;
   ph_reta = 0;
   ph_rphi = 0;
   ph_topoEtcone20 = 0;
   ph_topoEtcone30 = 0;
   ph_topoEtcone40 = 0;
   ph_EtringnoisedR03sig2 = 0;
   ph_EtringnoisedR03sig3 = 0;
   ph_EtringnoisedR03sig4 = 0;
   ph_isolationlikelihoodjets = 0;
   ph_isolationlikelihoodhqelectrons = 0;
   ph_loglikelihood = 0;
   ph_photonweight = 0;
   ph_photonbgweight = 0;
   ph_neuralnet = 0;
   ph_Hmatrix = 0;
   ph_Hmatrix5 = 0;
   ph_adaboost = 0;
   ph_ringernn = 0;
   ph_zvertex = 0;
   ph_errz = 0;
   ph_etap = 0;
   ph_depth = 0;
   ph_cl_E = 0;
   ph_cl_pt = 0;
   ph_cl_eta = 0;
   ph_cl_phi = 0;
   ph_Es0 = 0;
   ph_etas0 = 0;
   ph_phis0 = 0;
   ph_Es1 = 0;
   ph_etas1 = 0;
   ph_phis1 = 0;
   ph_Es2 = 0;
   ph_etas2 = 0;
   ph_phis2 = 0;
   ph_Es3 = 0;
   ph_etas3 = 0;
   ph_phis3 = 0;
   ph_rawcl_Es0 = 0;
   ph_rawcl_etas0 = 0;
   ph_rawcl_phis0 = 0;
   ph_rawcl_Es1 = 0;
   ph_rawcl_etas1 = 0;
   ph_rawcl_phis1 = 0;
   ph_rawcl_Es2 = 0;
   ph_rawcl_etas2 = 0;
   ph_rawcl_phis2 = 0;
   ph_rawcl_Es3 = 0;
   ph_rawcl_etas3 = 0;
   ph_rawcl_phis3 = 0;
   ph_rawcl_E = 0;
   ph_rawcl_pt = 0;
   ph_rawcl_eta = 0;
   ph_rawcl_phi = 0;
   ph_convMatchDeltaEta1 = 0;
   ph_convMatchDeltaEta2 = 0;
   ph_convMatchDeltaPhi1 = 0;
   ph_convMatchDeltaPhi2 = 0;
   ph_rings_E = 0;
   ph_vx_n = 0;
   ph_vx_x = 0;
   ph_vx_y = 0;
   ph_vx_z = 0;
   ph_vx_px = 0;
   ph_vx_py = 0;
   ph_vx_pz = 0;
   ph_vx_E = 0;
   ph_vx_m = 0;
   ph_vx_nTracks = 0;
   ph_vx_sumPt = 0;
   ph_vx_convTrk_weight = 0;
   ph_vx_convTrk_n = 0;
   ph_vx_convTrk_fitter = 0;
   ph_vx_convTrk_patternReco1 = 0;
   ph_vx_convTrk_patternReco2 = 0;
   ph_vx_convTrk_trackProperties = 0;
   ph_vx_convTrk_particleHypothesis = 0;
   ph_vx_convTrk_nBLHits = 0;
   ph_vx_convTrk_nPixHits = 0;
   ph_vx_convTrk_nSCTHits = 0;
   ph_vx_convTrk_nTRTHits = 0;
   ph_vx_convTrk_nTRTHighTHits = 0;
   ph_vx_convTrk_nPixHoles = 0;
   ph_vx_convTrk_nSCTHoles = 0;
   ph_vx_convTrk_nTRTHoles = 0;
   ph_vx_convTrk_nPixelDeadSensors = 0;
   ph_vx_convTrk_nSCTDeadSensors = 0;
   ph_vx_convTrk_nBLSharedHits = 0;
   ph_vx_convTrk_nPixSharedHits = 0;
   ph_vx_convTrk_nSCTSharedHits = 0;
   ph_vx_convTrk_nBLayerSplitHits = 0;
   ph_vx_convTrk_nPixSplitHits = 0;
   ph_vx_convTrk_nBLayerOutliers = 0;
   ph_vx_convTrk_nPixelOutliers = 0;
   ph_vx_convTrk_nSCTOutliers = 0;
   ph_vx_convTrk_nTRTOutliers = 0;
   ph_vx_convTrk_nTRTHighTOutliers = 0;
   ph_vx_convTrk_nContribPixelLayers = 0;
   ph_vx_convTrk_nGangedPixels = 0;
   ph_vx_convTrk_nGangedFlaggedFakes = 0;
   ph_vx_convTrk_nPixelSpoiltHits = 0;
   ph_vx_convTrk_nSCTDoubleHoles = 0;
   ph_vx_convTrk_nSCTSpoiltHits = 0;
   ph_vx_convTrk_nTRTDeadStraws = 0;
   ph_vx_convTrk_nTRTTubeHits = 0;
   ph_vx_convTrk_nOutliersOnTrack = 0;
   ph_vx_convTrk_standardDeviationOfChi2OS = 0;
   ph_vx_convTrk_expectBLayerHit = 0;
   ph_vx_convTrk_nMDTHits = 0;
   ph_vx_convTrk_nCSCEtaHits = 0;
   ph_vx_convTrk_nCSCPhiHits = 0;
   ph_vx_convTrk_nRPCEtaHits = 0;
   ph_vx_convTrk_nRPCPhiHits = 0;
   ph_vx_convTrk_nTGCEtaHits = 0;
   ph_vx_convTrk_nTGCPhiHits = 0;
   ph_vx_convTrk_nMdtHoles = 0;
   ph_vx_convTrk_nCscEtaHoles = 0;
   ph_vx_convTrk_nCscPhiHoles = 0;
   ph_vx_convTrk_nRpcEtaHoles = 0;
   ph_vx_convTrk_nRpcPhiHoles = 0;
   ph_vx_convTrk_nTgcEtaHoles = 0;
   ph_vx_convTrk_nTgcPhiHoles = 0;
   ph_vx_convTrk_nHits = 0;
   ph_vx_convTrk_nHoles = 0;
   ph_vx_convTrk_hitPattern = 0;
   ph_vx_convTrk_nSiHits = 0;
   ph_vx_convTrk_TRTHighTHitsRatio = 0;
   ph_vx_convTrk_TRTHighTOutliersRatio = 0;
   ph_vx_convTrk_eProbabilityComb = 0;
   ph_vx_convTrk_eProbabilityHT = 0;
   ph_vx_convTrk_eProbabilityToT = 0;
   ph_vx_convTrk_eProbabilityBrem = 0;
   ph_vx_convTrk_chi2 = 0;
   ph_vx_convTrk_ndof = 0;
   ph_deltaEmax2 = 0;
   ph_calibHitsShowerDepth = 0;
   ph_isIso = 0;
   ph_mvaptcone20 = 0;
   ph_mvaptcone30 = 0;
   ph_mvaptcone40 = 0;
   ph_topoEtcone60 = 0;
   ph_vx_Chi2 = 0;
   ph_vx_Dcottheta = 0;
   ph_vx_Dphi = 0;
   ph_vx_Dist = 0;
   ph_vx_DR1R2 = 0;
   ph_CaloPointing_eta = 0;
   ph_CaloPointing_sigma_eta = 0;
   ph_CaloPointing_zvertex = 0;
   ph_CaloPointing_sigma_zvertex = 0;
   ph_HPV_eta = 0;
   ph_HPV_sigma_eta = 0;
   ph_HPV_zvertex = 0;
   ph_HPV_sigma_zvertex = 0;
   ph_NN_passes = 0;
   ph_NN_discriminant = 0;
   ph_ES0_real = 0;
   ph_ES1_real = 0;
   ph_ES2_real = 0;
   ph_ES3_real = 0;
   ph_EcellS0 = 0;
   ph_etacellS0 = 0;
   ph_Etcone40_ED_corrected = 0;
   ph_Etcone40_corrected = 0;
   ph_topoEtcone20_corrected = 0;
   ph_topoEtcone30_corrected = 0;
   ph_topoEtcone40_corrected = 0;
   ph_ED_median = 0;
   ph_ED_sigma = 0;
   ph_ED_Njets = 0;
   ph_convIP = 0;
   ph_convIPRev = 0;
   ph_jet_dr = 0;
   ph_jet_E = 0;
   ph_jet_pt = 0;
   ph_jet_m = 0;
   ph_jet_eta = 0;
   ph_jet_phi = 0;
   ph_jet_matched = 0;
   ph_topodr = 0;
   ph_topopt = 0;
   ph_topoeta = 0;
   ph_topophi = 0;
   ph_topomatched = 0;
   ph_topoEMdr = 0;
   ph_topoEMpt = 0;
   ph_topoEMeta = 0;
   ph_topoEMphi = 0;
   ph_topoEMmatched = 0;
   ph_el_index = 0;
   ph_EF_dr = 0;
   ph_EF_index = 0;
   ph_L2_dr = 0;
   ph_L2_index = 0;
   ph_L1_dr = 0;
   ph_L1_index = 0;
   mu_staco_E = 0;
   mu_staco_pt = 0;
   mu_staco_m = 0;
   mu_staco_eta = 0;
   mu_staco_phi = 0;
   mu_staco_px = 0;
   mu_staco_py = 0;
   mu_staco_pz = 0;
   mu_staco_charge = 0;
   mu_staco_allauthor = 0;
   mu_staco_author = 0;
   mu_staco_beta = 0;
   mu_staco_isMuonLikelihood = 0;
   mu_staco_matchchi2 = 0;
   mu_staco_matchndof = 0;
   mu_staco_etcone20 = 0;
   mu_staco_etcone30 = 0;
   mu_staco_etcone40 = 0;
   mu_staco_nucone20 = 0;
   mu_staco_nucone30 = 0;
   mu_staco_nucone40 = 0;
   mu_staco_ptcone20 = 0;
   mu_staco_ptcone30 = 0;
   mu_staco_ptcone40 = 0;
   mu_staco_scatteringCurvatureSignificance = 0;
   mu_staco_scatteringNeighbourSignificance = 0;
   mu_staco_momentumBalanceSignificance = 0;
   mu_staco_energyLossPar = 0;
   mu_staco_energyLossErr = 0;
   mu_staco_etCore = 0;
   mu_staco_energyLossType = 0;
   mu_staco_caloMuonIdTag = 0;
   mu_staco_caloLRLikelihood = 0;
   mu_staco_bestMatch = 0;
   mu_staco_isStandAloneMuon = 0;
   mu_staco_isCombinedMuon = 0;
   mu_staco_isLowPtReconstructedMuon = 0;
   mu_staco_isSegmentTaggedMuon = 0;
   mu_staco_isCaloMuonId = 0;
   mu_staco_alsoFoundByLowPt = 0;
   mu_staco_alsoFoundByCaloMuonId = 0;
   mu_staco_isSiliconAssociatedForwardMuon = 0;
   mu_staco_loose = 0;
   mu_staco_medium = 0;
   mu_staco_tight = 0;
   mu_staco_d0_exPV = 0;
   mu_staco_z0_exPV = 0;
   mu_staco_phi_exPV = 0;
   mu_staco_theta_exPV = 0;
   mu_staco_qoverp_exPV = 0;
   mu_staco_cb_d0_exPV = 0;
   mu_staco_cb_z0_exPV = 0;
   mu_staco_cb_phi_exPV = 0;
   mu_staco_cb_theta_exPV = 0;
   mu_staco_cb_qoverp_exPV = 0;
   mu_staco_id_d0_exPV = 0;
   mu_staco_id_z0_exPV = 0;
   mu_staco_id_phi_exPV = 0;
   mu_staco_id_theta_exPV = 0;
   mu_staco_id_qoverp_exPV = 0;
   mu_staco_me_d0_exPV = 0;
   mu_staco_me_z0_exPV = 0;
   mu_staco_me_phi_exPV = 0;
   mu_staco_me_theta_exPV = 0;
   mu_staco_me_qoverp_exPV = 0;
   mu_staco_ie_d0_exPV = 0;
   mu_staco_ie_z0_exPV = 0;
   mu_staco_ie_phi_exPV = 0;
   mu_staco_ie_theta_exPV = 0;
   mu_staco_ie_qoverp_exPV = 0;
   mu_staco_SpaceTime_detID = 0;
   mu_staco_SpaceTime_t = 0;
   mu_staco_SpaceTime_tError = 0;
   mu_staco_SpaceTime_weight = 0;
   mu_staco_SpaceTime_x = 0;
   mu_staco_SpaceTime_y = 0;
   mu_staco_SpaceTime_z = 0;
   mu_staco_cov_d0_exPV = 0;
   mu_staco_cov_z0_exPV = 0;
   mu_staco_cov_phi_exPV = 0;
   mu_staco_cov_theta_exPV = 0;
   mu_staco_cov_qoverp_exPV = 0;
   mu_staco_cov_d0_z0_exPV = 0;
   mu_staco_cov_d0_phi_exPV = 0;
   mu_staco_cov_d0_theta_exPV = 0;
   mu_staco_cov_d0_qoverp_exPV = 0;
   mu_staco_cov_z0_phi_exPV = 0;
   mu_staco_cov_z0_theta_exPV = 0;
   mu_staco_cov_z0_qoverp_exPV = 0;
   mu_staco_cov_phi_theta_exPV = 0;
   mu_staco_cov_phi_qoverp_exPV = 0;
   mu_staco_cov_theta_qoverp_exPV = 0;
   mu_staco_id_cov_d0_exPV = 0;
   mu_staco_id_cov_z0_exPV = 0;
   mu_staco_id_cov_phi_exPV = 0;
   mu_staco_id_cov_theta_exPV = 0;
   mu_staco_id_cov_qoverp_exPV = 0;
   mu_staco_id_cov_d0_z0_exPV = 0;
   mu_staco_id_cov_d0_phi_exPV = 0;
   mu_staco_id_cov_d0_theta_exPV = 0;
   mu_staco_id_cov_d0_qoverp_exPV = 0;
   mu_staco_id_cov_z0_phi_exPV = 0;
   mu_staco_id_cov_z0_theta_exPV = 0;
   mu_staco_id_cov_z0_qoverp_exPV = 0;
   mu_staco_id_cov_phi_theta_exPV = 0;
   mu_staco_id_cov_phi_qoverp_exPV = 0;
   mu_staco_id_cov_theta_qoverp_exPV = 0;
   mu_staco_me_cov_d0_exPV = 0;
   mu_staco_me_cov_z0_exPV = 0;
   mu_staco_me_cov_phi_exPV = 0;
   mu_staco_me_cov_theta_exPV = 0;
   mu_staco_me_cov_qoverp_exPV = 0;
   mu_staco_me_cov_d0_z0_exPV = 0;
   mu_staco_me_cov_d0_phi_exPV = 0;
   mu_staco_me_cov_d0_theta_exPV = 0;
   mu_staco_me_cov_d0_qoverp_exPV = 0;
   mu_staco_me_cov_z0_phi_exPV = 0;
   mu_staco_me_cov_z0_theta_exPV = 0;
   mu_staco_me_cov_z0_qoverp_exPV = 0;
   mu_staco_me_cov_phi_theta_exPV = 0;
   mu_staco_me_cov_phi_qoverp_exPV = 0;
   mu_staco_me_cov_theta_qoverp_exPV = 0;
   mu_staco_ms_d0 = 0;
   mu_staco_ms_z0 = 0;
   mu_staco_ms_phi = 0;
   mu_staco_ms_theta = 0;
   mu_staco_ms_qoverp = 0;
   mu_staco_id_d0 = 0;
   mu_staco_id_z0 = 0;
   mu_staco_id_phi = 0;
   mu_staco_id_theta = 0;
   mu_staco_id_qoverp = 0;
   mu_staco_me_d0 = 0;
   mu_staco_me_z0 = 0;
   mu_staco_me_phi = 0;
   mu_staco_me_theta = 0;
   mu_staco_me_qoverp = 0;
   mu_staco_ie_d0 = 0;
   mu_staco_ie_z0 = 0;
   mu_staco_ie_phi = 0;
   mu_staco_ie_theta = 0;
   mu_staco_ie_qoverp = 0;
   mu_staco_nOutliersOnTrack = 0;
   mu_staco_nBLHits = 0;
   mu_staco_nPixHits = 0;
   mu_staco_nSCTHits = 0;
   mu_staco_nTRTHits = 0;
   mu_staco_nTRTHighTHits = 0;
   mu_staco_nBLSharedHits = 0;
   mu_staco_nPixSharedHits = 0;
   mu_staco_nPixHoles = 0;
   mu_staco_nSCTSharedHits = 0;
   mu_staco_nSCTHoles = 0;
   mu_staco_nTRTOutliers = 0;
   mu_staco_nTRTHighTOutliers = 0;
   mu_staco_nGangedPixels = 0;
   mu_staco_nPixelDeadSensors = 0;
   mu_staco_nSCTDeadSensors = 0;
   mu_staco_nTRTDeadStraws = 0;
   mu_staco_expectBLayerHit = 0;
   mu_staco_nMDTHits = 0;
   mu_staco_nMDTHoles = 0;
   mu_staco_nCSCEtaHits = 0;
   mu_staco_nCSCEtaHoles = 0;
   mu_staco_nCSCUnspoiledEtaHits = 0;
   mu_staco_nCSCPhiHits = 0;
   mu_staco_nCSCPhiHoles = 0;
   mu_staco_nRPCEtaHits = 0;
   mu_staco_nRPCEtaHoles = 0;
   mu_staco_nRPCPhiHits = 0;
   mu_staco_nRPCPhiHoles = 0;
   mu_staco_nTGCEtaHits = 0;
   mu_staco_nTGCEtaHoles = 0;
   mu_staco_nTGCPhiHits = 0;
   mu_staco_nTGCPhiHoles = 0;
   mu_staco_nprecisionLayers = 0;
   mu_staco_nprecisionHoleLayers = 0;
   mu_staco_nphiLayers = 0;
   mu_staco_ntrigEtaLayers = 0;
   mu_staco_nphiHoleLayers = 0;
   mu_staco_ntrigEtaHoleLayers = 0;
   mu_staco_nMDTBIHits = 0;
   mu_staco_nMDTBMHits = 0;
   mu_staco_nMDTBOHits = 0;
   mu_staco_nMDTBEEHits = 0;
   mu_staco_nMDTBIS78Hits = 0;
   mu_staco_nMDTEIHits = 0;
   mu_staco_nMDTEMHits = 0;
   mu_staco_nMDTEOHits = 0;
   mu_staco_nMDTEEHits = 0;
   mu_staco_nRPCLayer1EtaHits = 0;
   mu_staco_nRPCLayer2EtaHits = 0;
   mu_staco_nRPCLayer3EtaHits = 0;
   mu_staco_nRPCLayer1PhiHits = 0;
   mu_staco_nRPCLayer2PhiHits = 0;
   mu_staco_nRPCLayer3PhiHits = 0;
   mu_staco_nTGCLayer1EtaHits = 0;
   mu_staco_nTGCLayer2EtaHits = 0;
   mu_staco_nTGCLayer3EtaHits = 0;
   mu_staco_nTGCLayer4EtaHits = 0;
   mu_staco_nTGCLayer1PhiHits = 0;
   mu_staco_nTGCLayer2PhiHits = 0;
   mu_staco_nTGCLayer3PhiHits = 0;
   mu_staco_nTGCLayer4PhiHits = 0;
   mu_staco_barrelSectors = 0;
   mu_staco_endcapSectors = 0;
   mu_staco_trackd0 = 0;
   mu_staco_trackz0 = 0;
   mu_staco_trackphi = 0;
   mu_staco_tracktheta = 0;
   mu_staco_trackqoverp = 0;
   mu_staco_trackcov_d0 = 0;
   mu_staco_trackcov_z0 = 0;
   mu_staco_trackcov_phi = 0;
   mu_staco_trackcov_theta = 0;
   mu_staco_trackcov_qoverp = 0;
   mu_staco_trackcov_d0_z0 = 0;
   mu_staco_trackcov_d0_phi = 0;
   mu_staco_trackcov_d0_theta = 0;
   mu_staco_trackcov_d0_qoverp = 0;
   mu_staco_trackcov_z0_phi = 0;
   mu_staco_trackcov_z0_theta = 0;
   mu_staco_trackcov_z0_qoverp = 0;
   mu_staco_trackcov_phi_theta = 0;
   mu_staco_trackcov_phi_qoverp = 0;
   mu_staco_trackcov_theta_qoverp = 0;
   mu_staco_trackfitchi2 = 0;
   mu_staco_trackfitndof = 0;
   mu_staco_hastrack = 0;
   mu_staco_trackd0beam = 0;
   mu_staco_trackz0beam = 0;
   mu_staco_tracksigd0beam = 0;
   mu_staco_tracksigz0beam = 0;
   mu_staco_trackd0pv = 0;
   mu_staco_trackz0pv = 0;
   mu_staco_tracksigd0pv = 0;
   mu_staco_tracksigz0pv = 0;
   mu_staco_trackIPEstimate_d0_biasedpvunbiased = 0;
   mu_staco_trackIPEstimate_z0_biasedpvunbiased = 0;
   mu_staco_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   mu_staco_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   mu_staco_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   mu_staco_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   mu_staco_trackd0pvunbiased = 0;
   mu_staco_trackz0pvunbiased = 0;
   mu_staco_tracksigd0pvunbiased = 0;
   mu_staco_tracksigz0pvunbiased = 0;
   mu_staco_EFCB_index = 0;
   mu_staco_EFMG_index = 0;
   mu_staco_EFME_index = 0;
   mu_calo_E = 0;
   mu_calo_pt = 0;
   mu_calo_m = 0;
   mu_calo_eta = 0;
   mu_calo_phi = 0;
   mu_calo_px = 0;
   mu_calo_py = 0;
   mu_calo_pz = 0;
   mu_calo_charge = 0;
   mu_calo_allauthor = 0;
   mu_calo_author = 0;
   mu_calo_beta = 0;
   mu_calo_isMuonLikelihood = 0;
   mu_calo_matchchi2 = 0;
   mu_calo_matchndof = 0;
   mu_calo_etcone20 = 0;
   mu_calo_etcone30 = 0;
   mu_calo_etcone40 = 0;
   mu_calo_nucone20 = 0;
   mu_calo_nucone30 = 0;
   mu_calo_nucone40 = 0;
   mu_calo_ptcone20 = 0;
   mu_calo_ptcone30 = 0;
   mu_calo_ptcone40 = 0;
   mu_calo_scatteringCurvatureSignificance = 0;
   mu_calo_scatteringNeighbourSignificance = 0;
   mu_calo_momentumBalanceSignificance = 0;
   mu_calo_energyLossPar = 0;
   mu_calo_energyLossErr = 0;
   mu_calo_etCore = 0;
   mu_calo_energyLossType = 0;
   mu_calo_caloMuonIdTag = 0;
   mu_calo_caloLRLikelihood = 0;
   mu_calo_bestMatch = 0;
   mu_calo_isStandAloneMuon = 0;
   mu_calo_isCombinedMuon = 0;
   mu_calo_isLowPtReconstructedMuon = 0;
   mu_calo_isSegmentTaggedMuon = 0;
   mu_calo_isCaloMuonId = 0;
   mu_calo_alsoFoundByLowPt = 0;
   mu_calo_alsoFoundByCaloMuonId = 0;
   mu_calo_isSiliconAssociatedForwardMuon = 0;
   mu_calo_loose = 0;
   mu_calo_medium = 0;
   mu_calo_tight = 0;
   mu_calo_d0_exPV = 0;
   mu_calo_z0_exPV = 0;
   mu_calo_phi_exPV = 0;
   mu_calo_theta_exPV = 0;
   mu_calo_qoverp_exPV = 0;
   mu_calo_cb_d0_exPV = 0;
   mu_calo_cb_z0_exPV = 0;
   mu_calo_cb_phi_exPV = 0;
   mu_calo_cb_theta_exPV = 0;
   mu_calo_cb_qoverp_exPV = 0;
   mu_calo_id_d0_exPV = 0;
   mu_calo_id_z0_exPV = 0;
   mu_calo_id_phi_exPV = 0;
   mu_calo_id_theta_exPV = 0;
   mu_calo_id_qoverp_exPV = 0;
   mu_calo_me_d0_exPV = 0;
   mu_calo_me_z0_exPV = 0;
   mu_calo_me_phi_exPV = 0;
   mu_calo_me_theta_exPV = 0;
   mu_calo_me_qoverp_exPV = 0;
   mu_calo_ie_d0_exPV = 0;
   mu_calo_ie_z0_exPV = 0;
   mu_calo_ie_phi_exPV = 0;
   mu_calo_ie_theta_exPV = 0;
   mu_calo_ie_qoverp_exPV = 0;
   mu_calo_SpaceTime_detID = 0;
   mu_calo_SpaceTime_t = 0;
   mu_calo_SpaceTime_tError = 0;
   mu_calo_SpaceTime_weight = 0;
   mu_calo_SpaceTime_x = 0;
   mu_calo_SpaceTime_y = 0;
   mu_calo_SpaceTime_z = 0;
   mu_calo_cov_d0_exPV = 0;
   mu_calo_cov_z0_exPV = 0;
   mu_calo_cov_phi_exPV = 0;
   mu_calo_cov_theta_exPV = 0;
   mu_calo_cov_qoverp_exPV = 0;
   mu_calo_cov_d0_z0_exPV = 0;
   mu_calo_cov_d0_phi_exPV = 0;
   mu_calo_cov_d0_theta_exPV = 0;
   mu_calo_cov_d0_qoverp_exPV = 0;
   mu_calo_cov_z0_phi_exPV = 0;
   mu_calo_cov_z0_theta_exPV = 0;
   mu_calo_cov_z0_qoverp_exPV = 0;
   mu_calo_cov_phi_theta_exPV = 0;
   mu_calo_cov_phi_qoverp_exPV = 0;
   mu_calo_cov_theta_qoverp_exPV = 0;
   mu_calo_id_cov_d0_exPV = 0;
   mu_calo_id_cov_z0_exPV = 0;
   mu_calo_id_cov_phi_exPV = 0;
   mu_calo_id_cov_theta_exPV = 0;
   mu_calo_id_cov_qoverp_exPV = 0;
   mu_calo_id_cov_d0_z0_exPV = 0;
   mu_calo_id_cov_d0_phi_exPV = 0;
   mu_calo_id_cov_d0_theta_exPV = 0;
   mu_calo_id_cov_d0_qoverp_exPV = 0;
   mu_calo_id_cov_z0_phi_exPV = 0;
   mu_calo_id_cov_z0_theta_exPV = 0;
   mu_calo_id_cov_z0_qoverp_exPV = 0;
   mu_calo_id_cov_phi_theta_exPV = 0;
   mu_calo_id_cov_phi_qoverp_exPV = 0;
   mu_calo_id_cov_theta_qoverp_exPV = 0;
   mu_calo_me_cov_d0_exPV = 0;
   mu_calo_me_cov_z0_exPV = 0;
   mu_calo_me_cov_phi_exPV = 0;
   mu_calo_me_cov_theta_exPV = 0;
   mu_calo_me_cov_qoverp_exPV = 0;
   mu_calo_me_cov_d0_z0_exPV = 0;
   mu_calo_me_cov_d0_phi_exPV = 0;
   mu_calo_me_cov_d0_theta_exPV = 0;
   mu_calo_me_cov_d0_qoverp_exPV = 0;
   mu_calo_me_cov_z0_phi_exPV = 0;
   mu_calo_me_cov_z0_theta_exPV = 0;
   mu_calo_me_cov_z0_qoverp_exPV = 0;
   mu_calo_me_cov_phi_theta_exPV = 0;
   mu_calo_me_cov_phi_qoverp_exPV = 0;
   mu_calo_me_cov_theta_qoverp_exPV = 0;
   mu_calo_ms_d0 = 0;
   mu_calo_ms_z0 = 0;
   mu_calo_ms_phi = 0;
   mu_calo_ms_theta = 0;
   mu_calo_ms_qoverp = 0;
   mu_calo_id_d0 = 0;
   mu_calo_id_z0 = 0;
   mu_calo_id_phi = 0;
   mu_calo_id_theta = 0;
   mu_calo_id_qoverp = 0;
   mu_calo_me_d0 = 0;
   mu_calo_me_z0 = 0;
   mu_calo_me_phi = 0;
   mu_calo_me_theta = 0;
   mu_calo_me_qoverp = 0;
   mu_calo_ie_d0 = 0;
   mu_calo_ie_z0 = 0;
   mu_calo_ie_phi = 0;
   mu_calo_ie_theta = 0;
   mu_calo_ie_qoverp = 0;
   mu_calo_nOutliersOnTrack = 0;
   mu_calo_nBLHits = 0;
   mu_calo_nPixHits = 0;
   mu_calo_nSCTHits = 0;
   mu_calo_nTRTHits = 0;
   mu_calo_nTRTHighTHits = 0;
   mu_calo_nBLSharedHits = 0;
   mu_calo_nPixSharedHits = 0;
   mu_calo_nPixHoles = 0;
   mu_calo_nSCTSharedHits = 0;
   mu_calo_nSCTHoles = 0;
   mu_calo_nTRTOutliers = 0;
   mu_calo_nTRTHighTOutliers = 0;
   mu_calo_nGangedPixels = 0;
   mu_calo_nPixelDeadSensors = 0;
   mu_calo_nSCTDeadSensors = 0;
   mu_calo_nTRTDeadStraws = 0;
   mu_calo_expectBLayerHit = 0;
   mu_calo_nMDTHits = 0;
   mu_calo_nMDTHoles = 0;
   mu_calo_nCSCEtaHits = 0;
   mu_calo_nCSCEtaHoles = 0;
   mu_calo_nCSCUnspoiledEtaHits = 0;
   mu_calo_nCSCPhiHits = 0;
   mu_calo_nCSCPhiHoles = 0;
   mu_calo_nRPCEtaHits = 0;
   mu_calo_nRPCEtaHoles = 0;
   mu_calo_nRPCPhiHits = 0;
   mu_calo_nRPCPhiHoles = 0;
   mu_calo_nTGCEtaHits = 0;
   mu_calo_nTGCEtaHoles = 0;
   mu_calo_nTGCPhiHits = 0;
   mu_calo_nTGCPhiHoles = 0;
   mu_calo_nprecisionLayers = 0;
   mu_calo_nprecisionHoleLayers = 0;
   mu_calo_nphiLayers = 0;
   mu_calo_ntrigEtaLayers = 0;
   mu_calo_nphiHoleLayers = 0;
   mu_calo_ntrigEtaHoleLayers = 0;
   mu_calo_nMDTBIHits = 0;
   mu_calo_nMDTBMHits = 0;
   mu_calo_nMDTBOHits = 0;
   mu_calo_nMDTBEEHits = 0;
   mu_calo_nMDTBIS78Hits = 0;
   mu_calo_nMDTEIHits = 0;
   mu_calo_nMDTEMHits = 0;
   mu_calo_nMDTEOHits = 0;
   mu_calo_nMDTEEHits = 0;
   mu_calo_nRPCLayer1EtaHits = 0;
   mu_calo_nRPCLayer2EtaHits = 0;
   mu_calo_nRPCLayer3EtaHits = 0;
   mu_calo_nRPCLayer1PhiHits = 0;
   mu_calo_nRPCLayer2PhiHits = 0;
   mu_calo_nRPCLayer3PhiHits = 0;
   mu_calo_nTGCLayer1EtaHits = 0;
   mu_calo_nTGCLayer2EtaHits = 0;
   mu_calo_nTGCLayer3EtaHits = 0;
   mu_calo_nTGCLayer4EtaHits = 0;
   mu_calo_nTGCLayer1PhiHits = 0;
   mu_calo_nTGCLayer2PhiHits = 0;
   mu_calo_nTGCLayer3PhiHits = 0;
   mu_calo_nTGCLayer4PhiHits = 0;
   mu_calo_barrelSectors = 0;
   mu_calo_endcapSectors = 0;
   mu_calo_trackd0 = 0;
   mu_calo_trackz0 = 0;
   mu_calo_trackphi = 0;
   mu_calo_tracktheta = 0;
   mu_calo_trackqoverp = 0;
   mu_calo_trackcov_d0 = 0;
   mu_calo_trackcov_z0 = 0;
   mu_calo_trackcov_phi = 0;
   mu_calo_trackcov_theta = 0;
   mu_calo_trackcov_qoverp = 0;
   mu_calo_trackcov_d0_z0 = 0;
   mu_calo_trackcov_d0_phi = 0;
   mu_calo_trackcov_d0_theta = 0;
   mu_calo_trackcov_d0_qoverp = 0;
   mu_calo_trackcov_z0_phi = 0;
   mu_calo_trackcov_z0_theta = 0;
   mu_calo_trackcov_z0_qoverp = 0;
   mu_calo_trackcov_phi_theta = 0;
   mu_calo_trackcov_phi_qoverp = 0;
   mu_calo_trackcov_theta_qoverp = 0;
   mu_calo_trackfitchi2 = 0;
   mu_calo_trackfitndof = 0;
   mu_calo_hastrack = 0;
   mu_calo_trackd0beam = 0;
   mu_calo_trackz0beam = 0;
   mu_calo_tracksigd0beam = 0;
   mu_calo_tracksigz0beam = 0;
   mu_calo_trackd0pv = 0;
   mu_calo_trackz0pv = 0;
   mu_calo_tracksigd0pv = 0;
   mu_calo_tracksigz0pv = 0;
   mu_calo_trackIPEstimate_d0_biasedpvunbiased = 0;
   mu_calo_trackIPEstimate_z0_biasedpvunbiased = 0;
   mu_calo_trackIPEstimate_sigd0_biasedpvunbiased = 0;
   mu_calo_trackIPEstimate_sigz0_biasedpvunbiased = 0;
   mu_calo_trackIPEstimate_d0_unbiasedpvunbiased = 0;
   mu_calo_trackIPEstimate_z0_unbiasedpvunbiased = 0;
   mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased = 0;
   mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased = 0;
   mu_calo_trackd0pvunbiased = 0;
   mu_calo_trackz0pvunbiased = 0;
   mu_calo_tracksigd0pvunbiased = 0;
   mu_calo_tracksigz0pvunbiased = 0;
   mu_calo_EFCB_index = 0;
   mu_calo_EFMG_index = 0;
   mu_calo_EFME_index = 0;
   vxp_x = 0;
   vxp_y = 0;
   vxp_z = 0;
   vxp_cov_x = 0;
   vxp_cov_y = 0;
   vxp_cov_z = 0;
   vxp_cov_xy = 0;
   vxp_cov_xz = 0;
   vxp_cov_yz = 0;
   vxp_type = 0;
   vxp_chi2 = 0;
   vxp_ndof = 0;
   vxp_px = 0;
   vxp_py = 0;
   vxp_pz = 0;
   vxp_E = 0;
   vxp_m = 0;
   vxp_nTracks = 0;
   vxp_sumPt = 0;
   vxp_trk_weight = 0;
   vxp_trk_n = 0;
   vxp_trk_index = 0;
   trig_L1_mu_eta = 0;
   trig_L1_mu_phi = 0;
   trig_L1_mu_thrName = 0;
   trig_L2_muonfeature_eta = 0;
   trig_L2_muonfeature_phi = 0;
   trig_L2_combmuonfeature_eta = 0;
   trig_L2_combmuonfeature_phi = 0;
   trig_EF_trigmuonef_track_SA_pt = 0;
   trig_EF_trigmuonef_track_SA_eta = 0;
   trig_EF_trigmuonef_track_SA_phi = 0;
   trig_EF_trigmuonef_track_CB_pt = 0;
   trig_EF_trigmuonef_track_CB_eta = 0;
   trig_EF_trigmuonef_track_CB_phi = 0;
   trig_EF_trigmugirl_track_CB_pt = 0;
   trig_EF_trigmugirl_track_CB_eta = 0;
   trig_EF_trigmugirl_track_CB_phi = 0;
   trig_Nav_chain_ChainId = 0;
   trig_Nav_chain_RoIType = 0;
   trig_Nav_chain_RoIIndex = 0;
   trig_RoI_L2_mu_MuonFeature = 0;
   trig_RoI_L2_mu_CombinedMuonFeature = 0;
   trig_RoI_L2_mu_CombinedMuonFeatureStatus = 0;
   trig_RoI_L2_mu_Muon_ROI = 0;
   trig_RoI_EF_mu_Muon_ROI = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainer = 0;
   trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus = 0;
   trig_RoI_EF_mu_TrigMuonEFIsolationContainer = 0;
   trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus = 0;
   trig_EF_el_eta = 0;
   trig_EF_el_phi = 0;
   trig_RoI_EF_e_egammaContainer_egamma_Electrons = 0;
   trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus = 0;
   dPt = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("EF_2e12Tvh_loose1", &EF_2e12Tvh_loose1, &b_EF_2e12Tvh_loose1);
   fChain->SetBranchAddress("EF_2mu13", &EF_2mu13, &b_EF_2mu13);
   fChain->SetBranchAddress("EF_e12Tvh_medium1_mu8", &EF_e12Tvh_medium1_mu8, &b_EF_e12Tvh_medium1_mu8);
   fChain->SetBranchAddress("EF_e24vhi_loose1_mu8", &EF_e24vhi_loose1_mu8, &b_EF_e24vhi_loose1_mu8);
   fChain->SetBranchAddress("EF_e24vhi_medium1", &EF_e24vhi_medium1, &b_EF_e24vhi_medium1);
   fChain->SetBranchAddress("EF_e60_medium1", &EF_e60_medium1, &b_EF_e60_medium1);
   fChain->SetBranchAddress("EF_mu18_tight_mu8_EFFS", &EF_mu18_tight_mu8_EFFS, &b_EF_mu18_tight_mu8_EFFS);
   fChain->SetBranchAddress("EF_mu24i_tight", &EF_mu24i_tight, &b_EF_mu24i_tight);
   fChain->SetBranchAddress("EF_mu36_tight", &EF_mu36_tight, &b_EF_mu36_tight);
   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("lbn", &lbn, &b_lbn);
   fChain->SetBranchAddress("bcid", &bcid, &b_bcid);
   fChain->SetBranchAddress("averageIntPerXing", &averageIntPerXing, &b_averageIntPerXing);
   fChain->SetBranchAddress("larError", &larError, &b_larError);
   fChain->SetBranchAddress("el_n", &el_n, &b_el_n);
   fChain->SetBranchAddress("el_E", &el_E, &b_el_E);
   fChain->SetBranchAddress("el_Et", &el_Et, &b_el_Et);
   fChain->SetBranchAddress("el_pt", &el_pt, &b_el_pt);
   fChain->SetBranchAddress("el_m", &el_m, &b_el_m);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("el_px", &el_px, &b_el_px);
   fChain->SetBranchAddress("el_py", &el_py, &b_el_py);
   fChain->SetBranchAddress("el_pz", &el_pz, &b_el_pz);
   fChain->SetBranchAddress("el_charge", &el_charge, &b_el_charge);
   fChain->SetBranchAddress("el_author", &el_author, &b_el_author);
   fChain->SetBranchAddress("el_isEM", &el_isEM, &b_el_isEM);
   fChain->SetBranchAddress("el_isEMLoose", &el_isEMLoose, &b_el_isEMLoose);
   fChain->SetBranchAddress("el_isEMMedium", &el_isEMMedium, &b_el_isEMMedium);
   fChain->SetBranchAddress("el_isEMTight", &el_isEMTight, &b_el_isEMTight);
   fChain->SetBranchAddress("el_OQ", &el_OQ, &b_el_OQ);
   fChain->SetBranchAddress("el_convFlag", &el_convFlag, &b_el_convFlag);
   fChain->SetBranchAddress("el_isConv", &el_isConv, &b_el_isConv);
   fChain->SetBranchAddress("el_nConv", &el_nConv, &b_el_nConv);
   fChain->SetBranchAddress("el_nSingleTrackConv", &el_nSingleTrackConv, &b_el_nSingleTrackConv);
   fChain->SetBranchAddress("el_nDoubleTrackConv", &el_nDoubleTrackConv, &b_el_nDoubleTrackConv);
   fChain->SetBranchAddress("el_mediumWithoutTrack", &el_mediumWithoutTrack, &b_el_mediumWithoutTrack);
   fChain->SetBranchAddress("el_mediumIsoWithoutTrack", &el_mediumIsoWithoutTrack, &b_el_mediumIsoWithoutTrack);
   fChain->SetBranchAddress("el_tightWithoutTrack", &el_tightWithoutTrack, &b_el_tightWithoutTrack);
   fChain->SetBranchAddress("el_tightIsoWithoutTrack", &el_tightIsoWithoutTrack, &b_el_tightIsoWithoutTrack);
   fChain->SetBranchAddress("el_loose", &el_loose, &b_el_loose);
   fChain->SetBranchAddress("el_looseIso", &el_looseIso, &b_el_looseIso);
   fChain->SetBranchAddress("el_medium", &el_medium, &b_el_medium);
   fChain->SetBranchAddress("el_mediumIso", &el_mediumIso, &b_el_mediumIso);
   fChain->SetBranchAddress("el_tight", &el_tight, &b_el_tight);
   fChain->SetBranchAddress("el_tightIso", &el_tightIso, &b_el_tightIso);
   fChain->SetBranchAddress("el_loosePP", &el_loosePP, &b_el_loosePP);
   fChain->SetBranchAddress("el_loosePPIso", &el_loosePPIso, &b_el_loosePPIso);
   fChain->SetBranchAddress("el_mediumPP", &el_mediumPP, &b_el_mediumPP);
   fChain->SetBranchAddress("el_mediumPPIso", &el_mediumPPIso, &b_el_mediumPPIso);
   fChain->SetBranchAddress("el_tightPP", &el_tightPP, &b_el_tightPP);
   fChain->SetBranchAddress("el_tightPPIso", &el_tightPPIso, &b_el_tightPPIso);
   fChain->SetBranchAddress("el_goodOQ", &el_goodOQ, &b_el_goodOQ);
   fChain->SetBranchAddress("el_Ethad", &el_Ethad, &b_el_Ethad);
   fChain->SetBranchAddress("el_Ethad1", &el_Ethad1, &b_el_Ethad1);
   fChain->SetBranchAddress("el_f1", &el_f1, &b_el_f1);
   fChain->SetBranchAddress("el_f1core", &el_f1core, &b_el_f1core);
   fChain->SetBranchAddress("el_Emins1", &el_Emins1, &b_el_Emins1);
   fChain->SetBranchAddress("el_fside", &el_fside, &b_el_fside);
   fChain->SetBranchAddress("el_Emax2", &el_Emax2, &b_el_Emax2);
   fChain->SetBranchAddress("el_ws3", &el_ws3, &b_el_ws3);
   fChain->SetBranchAddress("el_wstot", &el_wstot, &b_el_wstot);
   fChain->SetBranchAddress("el_emaxs1", &el_emaxs1, &b_el_emaxs1);
   fChain->SetBranchAddress("el_deltaEs", &el_deltaEs, &b_el_deltaEs);
   fChain->SetBranchAddress("el_E233", &el_E233, &b_el_E233);
   fChain->SetBranchAddress("el_E237", &el_E237, &b_el_E237);
   fChain->SetBranchAddress("el_E277", &el_E277, &b_el_E277);
   fChain->SetBranchAddress("el_weta2", &el_weta2, &b_el_weta2);
   fChain->SetBranchAddress("el_f3", &el_f3, &b_el_f3);
   fChain->SetBranchAddress("el_f3core", &el_f3core, &b_el_f3core);
   fChain->SetBranchAddress("el_rphiallcalo", &el_rphiallcalo, &b_el_rphiallcalo);
   fChain->SetBranchAddress("el_Etcone45", &el_Etcone45, &b_el_Etcone45);
   fChain->SetBranchAddress("el_Etcone15", &el_Etcone15, &b_el_Etcone15);
   fChain->SetBranchAddress("el_Etcone20", &el_Etcone20, &b_el_Etcone20);
   fChain->SetBranchAddress("el_Etcone25", &el_Etcone25, &b_el_Etcone25);
   fChain->SetBranchAddress("el_Etcone30", &el_Etcone30, &b_el_Etcone30);
   fChain->SetBranchAddress("el_Etcone35", &el_Etcone35, &b_el_Etcone35);
   fChain->SetBranchAddress("el_Etcone40", &el_Etcone40, &b_el_Etcone40);
   fChain->SetBranchAddress("el_ptcone20", &el_ptcone20, &b_el_ptcone20);
   fChain->SetBranchAddress("el_ptcone30", &el_ptcone30, &b_el_ptcone30);
   fChain->SetBranchAddress("el_ptcone40", &el_ptcone40, &b_el_ptcone40);
   fChain->SetBranchAddress("el_nucone20", &el_nucone20, &b_el_nucone20);
   fChain->SetBranchAddress("el_nucone30", &el_nucone30, &b_el_nucone30);
   fChain->SetBranchAddress("el_nucone40", &el_nucone40, &b_el_nucone40);
   fChain->SetBranchAddress("el_Etcone15_pt_corrected", &el_Etcone15_pt_corrected, &b_el_Etcone15_pt_corrected);
   fChain->SetBranchAddress("el_Etcone20_pt_corrected", &el_Etcone20_pt_corrected, &b_el_Etcone20_pt_corrected);
   fChain->SetBranchAddress("el_Etcone25_pt_corrected", &el_Etcone25_pt_corrected, &b_el_Etcone25_pt_corrected);
   fChain->SetBranchAddress("el_Etcone30_pt_corrected", &el_Etcone30_pt_corrected, &b_el_Etcone30_pt_corrected);
   fChain->SetBranchAddress("el_Etcone35_pt_corrected", &el_Etcone35_pt_corrected, &b_el_Etcone35_pt_corrected);
   fChain->SetBranchAddress("el_Etcone40_pt_corrected", &el_Etcone40_pt_corrected, &b_el_Etcone40_pt_corrected);
   fChain->SetBranchAddress("el_convanglematch", &el_convanglematch, &b_el_convanglematch);
   fChain->SetBranchAddress("el_convtrackmatch", &el_convtrackmatch, &b_el_convtrackmatch);
   fChain->SetBranchAddress("el_hasconv", &el_hasconv, &b_el_hasconv);
   fChain->SetBranchAddress("el_convvtxx", &el_convvtxx, &b_el_convvtxx);
   fChain->SetBranchAddress("el_convvtxy", &el_convvtxy, &b_el_convvtxy);
   fChain->SetBranchAddress("el_convvtxz", &el_convvtxz, &b_el_convvtxz);
   fChain->SetBranchAddress("el_Rconv", &el_Rconv, &b_el_Rconv);
   fChain->SetBranchAddress("el_zconv", &el_zconv, &b_el_zconv);
   fChain->SetBranchAddress("el_convvtxchi2", &el_convvtxchi2, &b_el_convvtxchi2);
   fChain->SetBranchAddress("el_pt1conv", &el_pt1conv, &b_el_pt1conv);
   fChain->SetBranchAddress("el_convtrk1nBLHits", &el_convtrk1nBLHits, &b_el_convtrk1nBLHits);
   fChain->SetBranchAddress("el_convtrk1nPixHits", &el_convtrk1nPixHits, &b_el_convtrk1nPixHits);
   fChain->SetBranchAddress("el_convtrk1nSCTHits", &el_convtrk1nSCTHits, &b_el_convtrk1nSCTHits);
   fChain->SetBranchAddress("el_convtrk1nTRTHits", &el_convtrk1nTRTHits, &b_el_convtrk1nTRTHits);
   fChain->SetBranchAddress("el_pt2conv", &el_pt2conv, &b_el_pt2conv);
   fChain->SetBranchAddress("el_convtrk2nBLHits", &el_convtrk2nBLHits, &b_el_convtrk2nBLHits);
   fChain->SetBranchAddress("el_convtrk2nPixHits", &el_convtrk2nPixHits, &b_el_convtrk2nPixHits);
   fChain->SetBranchAddress("el_convtrk2nSCTHits", &el_convtrk2nSCTHits, &b_el_convtrk2nSCTHits);
   fChain->SetBranchAddress("el_convtrk2nTRTHits", &el_convtrk2nTRTHits, &b_el_convtrk2nTRTHits);
   fChain->SetBranchAddress("el_ptconv", &el_ptconv, &b_el_ptconv);
   fChain->SetBranchAddress("el_pzconv", &el_pzconv, &b_el_pzconv);
   fChain->SetBranchAddress("el_pos7", &el_pos7, &b_el_pos7);
   fChain->SetBranchAddress("el_etacorrmag", &el_etacorrmag, &b_el_etacorrmag);
   fChain->SetBranchAddress("el_deltaeta1", &el_deltaeta1, &b_el_deltaeta1);
   fChain->SetBranchAddress("el_deltaeta2", &el_deltaeta2, &b_el_deltaeta2);
   fChain->SetBranchAddress("el_deltaphi2", &el_deltaphi2, &b_el_deltaphi2);
   fChain->SetBranchAddress("el_deltaphiRescaled", &el_deltaphiRescaled, &b_el_deltaphiRescaled);
   fChain->SetBranchAddress("el_deltaPhiFromLast", &el_deltaPhiFromLast, &b_el_deltaPhiFromLast);
   fChain->SetBranchAddress("el_deltaPhiRot", &el_deltaPhiRot, &b_el_deltaPhiRot);
   fChain->SetBranchAddress("el_expectHitInBLayer", &el_expectHitInBLayer, &b_el_expectHitInBLayer);
   fChain->SetBranchAddress("el_trackd0_physics", &el_trackd0_physics, &b_el_trackd0_physics);
   fChain->SetBranchAddress("el_etaSampling1", &el_etaSampling1, &b_el_etaSampling1);
   fChain->SetBranchAddress("el_reta", &el_reta, &b_el_reta);
   fChain->SetBranchAddress("el_rphi", &el_rphi, &b_el_rphi);
   fChain->SetBranchAddress("el_topoEtcone20", &el_topoEtcone20, &b_el_topoEtcone20);
   fChain->SetBranchAddress("el_topoEtcone30", &el_topoEtcone30, &b_el_topoEtcone30);
   fChain->SetBranchAddress("el_topoEtcone40", &el_topoEtcone40, &b_el_topoEtcone40);
   fChain->SetBranchAddress("el_EtringnoisedR03sig2", &el_EtringnoisedR03sig2, &b_el_EtringnoisedR03sig2);
   fChain->SetBranchAddress("el_EtringnoisedR03sig3", &el_EtringnoisedR03sig3, &b_el_EtringnoisedR03sig3);
   fChain->SetBranchAddress("el_EtringnoisedR03sig4", &el_EtringnoisedR03sig4, &b_el_EtringnoisedR03sig4);
   fChain->SetBranchAddress("el_isolationlikelihoodjets", &el_isolationlikelihoodjets, &b_el_isolationlikelihoodjets);
   fChain->SetBranchAddress("el_isolationlikelihoodhqelectrons", &el_isolationlikelihoodhqelectrons, &b_el_isolationlikelihoodhqelectrons);
   fChain->SetBranchAddress("el_electronweight", &el_electronweight, &b_el_electronweight);
   fChain->SetBranchAddress("el_electronbgweight", &el_electronbgweight, &b_el_electronbgweight);
   fChain->SetBranchAddress("el_softeweight", &el_softeweight, &b_el_softeweight);
   fChain->SetBranchAddress("el_softebgweight", &el_softebgweight, &b_el_softebgweight);
   fChain->SetBranchAddress("el_neuralnet", &el_neuralnet, &b_el_neuralnet);
   fChain->SetBranchAddress("el_Hmatrix", &el_Hmatrix, &b_el_Hmatrix);
   fChain->SetBranchAddress("el_Hmatrix5", &el_Hmatrix5, &b_el_Hmatrix5);
   fChain->SetBranchAddress("el_adaboost", &el_adaboost, &b_el_adaboost);
   fChain->SetBranchAddress("el_softeneuralnet", &el_softeneuralnet, &b_el_softeneuralnet);
   fChain->SetBranchAddress("el_ringernn", &el_ringernn, &b_el_ringernn);
   fChain->SetBranchAddress("el_zvertex", &el_zvertex, &b_el_zvertex);
   fChain->SetBranchAddress("el_errz", &el_errz, &b_el_errz);
   fChain->SetBranchAddress("el_etap", &el_etap, &b_el_etap);
   fChain->SetBranchAddress("el_depth", &el_depth, &b_el_depth);
   fChain->SetBranchAddress("el_refittedTrack_n", &el_refittedTrack_n, &b_el_refittedTrack_n);
   fChain->SetBranchAddress("el_refittedTrack_author", &el_refittedTrack_author, &b_el_refittedTrack_author);
   fChain->SetBranchAddress("el_refittedTrack_chi2", &el_refittedTrack_chi2, &b_el_refittedTrack_chi2);
   fChain->SetBranchAddress("el_refittedTrack_hasBrem", &el_refittedTrack_hasBrem, &b_el_refittedTrack_hasBrem);
   fChain->SetBranchAddress("el_refittedTrack_bremRadius", &el_refittedTrack_bremRadius, &b_el_refittedTrack_bremRadius);
   fChain->SetBranchAddress("el_refittedTrack_bremZ", &el_refittedTrack_bremZ, &b_el_refittedTrack_bremZ);
   fChain->SetBranchAddress("el_refittedTrack_bremRadiusErr", &el_refittedTrack_bremRadiusErr, &b_el_refittedTrack_bremRadiusErr);
   fChain->SetBranchAddress("el_refittedTrack_bremZErr", &el_refittedTrack_bremZErr, &b_el_refittedTrack_bremZErr);
   fChain->SetBranchAddress("el_refittedTrack_bremFitStatus", &el_refittedTrack_bremFitStatus, &b_el_refittedTrack_bremFitStatus);
   fChain->SetBranchAddress("el_refittedTrack_qoverp", &el_refittedTrack_qoverp, &b_el_refittedTrack_qoverp);
   fChain->SetBranchAddress("el_refittedTrack_d0", &el_refittedTrack_d0, &b_el_refittedTrack_d0);
   fChain->SetBranchAddress("el_refittedTrack_z0", &el_refittedTrack_z0, &b_el_refittedTrack_z0);
   fChain->SetBranchAddress("el_refittedTrack_theta", &el_refittedTrack_theta, &b_el_refittedTrack_theta);
   fChain->SetBranchAddress("el_refittedTrack_phi", &el_refittedTrack_phi, &b_el_refittedTrack_phi);
   fChain->SetBranchAddress("el_refittedTrack_LMqoverp", &el_refittedTrack_LMqoverp, &b_el_refittedTrack_LMqoverp);
   fChain->SetBranchAddress("el_refittedTrack_covd0", &el_refittedTrack_covd0, &b_el_refittedTrack_covd0);
   fChain->SetBranchAddress("el_refittedTrack_covz0", &el_refittedTrack_covz0, &b_el_refittedTrack_covz0);
   fChain->SetBranchAddress("el_refittedTrack_covphi", &el_refittedTrack_covphi, &b_el_refittedTrack_covphi);
   fChain->SetBranchAddress("el_refittedTrack_covtheta", &el_refittedTrack_covtheta, &b_el_refittedTrack_covtheta);
   fChain->SetBranchAddress("el_refittedTrack_covqoverp", &el_refittedTrack_covqoverp, &b_el_refittedTrack_covqoverp);
   fChain->SetBranchAddress("el_refittedTrack_covd0z0", &el_refittedTrack_covd0z0, &b_el_refittedTrack_covd0z0);
   fChain->SetBranchAddress("el_refittedTrack_covz0phi", &el_refittedTrack_covz0phi, &b_el_refittedTrack_covz0phi);
   fChain->SetBranchAddress("el_refittedTrack_covz0theta", &el_refittedTrack_covz0theta, &b_el_refittedTrack_covz0theta);
   fChain->SetBranchAddress("el_refittedTrack_covz0qoverp", &el_refittedTrack_covz0qoverp, &b_el_refittedTrack_covz0qoverp);
   fChain->SetBranchAddress("el_refittedTrack_covd0phi", &el_refittedTrack_covd0phi, &b_el_refittedTrack_covd0phi);
   fChain->SetBranchAddress("el_refittedTrack_covd0theta", &el_refittedTrack_covd0theta, &b_el_refittedTrack_covd0theta);
   fChain->SetBranchAddress("el_refittedTrack_covd0qoverp", &el_refittedTrack_covd0qoverp, &b_el_refittedTrack_covd0qoverp);
   fChain->SetBranchAddress("el_refittedTrack_covphitheta", &el_refittedTrack_covphitheta, &b_el_refittedTrack_covphitheta);
   fChain->SetBranchAddress("el_refittedTrack_covphiqoverp", &el_refittedTrack_covphiqoverp, &b_el_refittedTrack_covphiqoverp);
   fChain->SetBranchAddress("el_refittedTrack_covthetaqoverp", &el_refittedTrack_covthetaqoverp, &b_el_refittedTrack_covthetaqoverp);
   fChain->SetBranchAddress("el_Es0", &el_Es0, &b_el_Es0);
   fChain->SetBranchAddress("el_etas0", &el_etas0, &b_el_etas0);
   fChain->SetBranchAddress("el_phis0", &el_phis0, &b_el_phis0);
   fChain->SetBranchAddress("el_Es1", &el_Es1, &b_el_Es1);
   fChain->SetBranchAddress("el_etas1", &el_etas1, &b_el_etas1);
   fChain->SetBranchAddress("el_phis1", &el_phis1, &b_el_phis1);
   fChain->SetBranchAddress("el_Es2", &el_Es2, &b_el_Es2);
   fChain->SetBranchAddress("el_etas2", &el_etas2, &b_el_etas2);
   fChain->SetBranchAddress("el_phis2", &el_phis2, &b_el_phis2);
   fChain->SetBranchAddress("el_Es3", &el_Es3, &b_el_Es3);
   fChain->SetBranchAddress("el_etas3", &el_etas3, &b_el_etas3);
   fChain->SetBranchAddress("el_phis3", &el_phis3, &b_el_phis3);
   fChain->SetBranchAddress("el_E_PreSamplerB", &el_E_PreSamplerB, &b_el_E_PreSamplerB);
   fChain->SetBranchAddress("el_E_EMB1", &el_E_EMB1, &b_el_E_EMB1);
   fChain->SetBranchAddress("el_E_EMB2", &el_E_EMB2, &b_el_E_EMB2);
   fChain->SetBranchAddress("el_E_EMB3", &el_E_EMB3, &b_el_E_EMB3);
   fChain->SetBranchAddress("el_E_PreSamplerE", &el_E_PreSamplerE, &b_el_E_PreSamplerE);
   fChain->SetBranchAddress("el_E_EME1", &el_E_EME1, &b_el_E_EME1);
   fChain->SetBranchAddress("el_E_EME2", &el_E_EME2, &b_el_E_EME2);
   fChain->SetBranchAddress("el_E_EME3", &el_E_EME3, &b_el_E_EME3);
   fChain->SetBranchAddress("el_E_HEC0", &el_E_HEC0, &b_el_E_HEC0);
   fChain->SetBranchAddress("el_E_HEC1", &el_E_HEC1, &b_el_E_HEC1);
   fChain->SetBranchAddress("el_E_HEC2", &el_E_HEC2, &b_el_E_HEC2);
   fChain->SetBranchAddress("el_E_HEC3", &el_E_HEC3, &b_el_E_HEC3);
   fChain->SetBranchAddress("el_E_TileBar0", &el_E_TileBar0, &b_el_E_TileBar0);
   fChain->SetBranchAddress("el_E_TileBar1", &el_E_TileBar1, &b_el_E_TileBar1);
   fChain->SetBranchAddress("el_E_TileBar2", &el_E_TileBar2, &b_el_E_TileBar2);
   fChain->SetBranchAddress("el_E_TileGap1", &el_E_TileGap1, &b_el_E_TileGap1);
   fChain->SetBranchAddress("el_E_TileGap2", &el_E_TileGap2, &b_el_E_TileGap2);
   fChain->SetBranchAddress("el_E_TileGap3", &el_E_TileGap3, &b_el_E_TileGap3);
   fChain->SetBranchAddress("el_E_TileExt0", &el_E_TileExt0, &b_el_E_TileExt0);
   fChain->SetBranchAddress("el_E_TileExt1", &el_E_TileExt1, &b_el_E_TileExt1);
   fChain->SetBranchAddress("el_E_TileExt2", &el_E_TileExt2, &b_el_E_TileExt2);
   fChain->SetBranchAddress("el_E_FCAL0", &el_E_FCAL0, &b_el_E_FCAL0);
   fChain->SetBranchAddress("el_E_FCAL1", &el_E_FCAL1, &b_el_E_FCAL1);
   fChain->SetBranchAddress("el_E_FCAL2", &el_E_FCAL2, &b_el_E_FCAL2);
   fChain->SetBranchAddress("el_cl_E", &el_cl_E, &b_el_cl_E);
   fChain->SetBranchAddress("el_cl_pt", &el_cl_pt, &b_el_cl_pt);
   fChain->SetBranchAddress("el_cl_eta", &el_cl_eta, &b_el_cl_eta);
   fChain->SetBranchAddress("el_cl_phi", &el_cl_phi, &b_el_cl_phi);
   fChain->SetBranchAddress("el_firstEdens", &el_firstEdens, &b_el_firstEdens);
   fChain->SetBranchAddress("el_cellmaxfrac", &el_cellmaxfrac, &b_el_cellmaxfrac);
   fChain->SetBranchAddress("el_longitudinal", &el_longitudinal, &b_el_longitudinal);
   fChain->SetBranchAddress("el_secondlambda", &el_secondlambda, &b_el_secondlambda);
   fChain->SetBranchAddress("el_lateral", &el_lateral, &b_el_lateral);
   fChain->SetBranchAddress("el_secondR", &el_secondR, &b_el_secondR);
   fChain->SetBranchAddress("el_centerlambda", &el_centerlambda, &b_el_centerlambda);
   fChain->SetBranchAddress("el_rawcl_Es0", &el_rawcl_Es0, &b_el_rawcl_Es0);
   fChain->SetBranchAddress("el_rawcl_etas0", &el_rawcl_etas0, &b_el_rawcl_etas0);
   fChain->SetBranchAddress("el_rawcl_phis0", &el_rawcl_phis0, &b_el_rawcl_phis0);
   fChain->SetBranchAddress("el_rawcl_Es1", &el_rawcl_Es1, &b_el_rawcl_Es1);
   fChain->SetBranchAddress("el_rawcl_etas1", &el_rawcl_etas1, &b_el_rawcl_etas1);
   fChain->SetBranchAddress("el_rawcl_phis1", &el_rawcl_phis1, &b_el_rawcl_phis1);
   fChain->SetBranchAddress("el_rawcl_Es2", &el_rawcl_Es2, &b_el_rawcl_Es2);
   fChain->SetBranchAddress("el_rawcl_etas2", &el_rawcl_etas2, &b_el_rawcl_etas2);
   fChain->SetBranchAddress("el_rawcl_phis2", &el_rawcl_phis2, &b_el_rawcl_phis2);
   fChain->SetBranchAddress("el_rawcl_Es3", &el_rawcl_Es3, &b_el_rawcl_Es3);
   fChain->SetBranchAddress("el_rawcl_etas3", &el_rawcl_etas3, &b_el_rawcl_etas3);
   fChain->SetBranchAddress("el_rawcl_phis3", &el_rawcl_phis3, &b_el_rawcl_phis3);
   fChain->SetBranchAddress("el_rawcl_E", &el_rawcl_E, &b_el_rawcl_E);
   fChain->SetBranchAddress("el_rawcl_pt", &el_rawcl_pt, &b_el_rawcl_pt);
   fChain->SetBranchAddress("el_rawcl_eta", &el_rawcl_eta, &b_el_rawcl_eta);
   fChain->SetBranchAddress("el_rawcl_phi", &el_rawcl_phi, &b_el_rawcl_phi);
   fChain->SetBranchAddress("el_rings_E", &el_rings_E, &b_el_rings_E);
   fChain->SetBranchAddress("el_trackd0", &el_trackd0, &b_el_trackd0);
   fChain->SetBranchAddress("el_trackz0", &el_trackz0, &b_el_trackz0);
   fChain->SetBranchAddress("el_trackphi", &el_trackphi, &b_el_trackphi);
   fChain->SetBranchAddress("el_tracktheta", &el_tracktheta, &b_el_tracktheta);
   fChain->SetBranchAddress("el_trackqoverp", &el_trackqoverp, &b_el_trackqoverp);
   fChain->SetBranchAddress("el_trackpt", &el_trackpt, &b_el_trackpt);
   fChain->SetBranchAddress("el_tracketa", &el_tracketa, &b_el_tracketa);
   fChain->SetBranchAddress("el_trackcov_d0", &el_trackcov_d0, &b_el_trackcov_d0);
   fChain->SetBranchAddress("el_trackcov_z0", &el_trackcov_z0, &b_el_trackcov_z0);
   fChain->SetBranchAddress("el_trackcov_phi", &el_trackcov_phi, &b_el_trackcov_phi);
   fChain->SetBranchAddress("el_trackcov_theta", &el_trackcov_theta, &b_el_trackcov_theta);
   fChain->SetBranchAddress("el_trackcov_qoverp", &el_trackcov_qoverp, &b_el_trackcov_qoverp);
   fChain->SetBranchAddress("el_trackcov_d0_z0", &el_trackcov_d0_z0, &b_el_trackcov_d0_z0);
   fChain->SetBranchAddress("el_trackcov_d0_phi", &el_trackcov_d0_phi, &b_el_trackcov_d0_phi);
   fChain->SetBranchAddress("el_trackcov_d0_theta", &el_trackcov_d0_theta, &b_el_trackcov_d0_theta);
   fChain->SetBranchAddress("el_trackcov_d0_qoverp", &el_trackcov_d0_qoverp, &b_el_trackcov_d0_qoverp);
   fChain->SetBranchAddress("el_trackcov_z0_phi", &el_trackcov_z0_phi, &b_el_trackcov_z0_phi);
   fChain->SetBranchAddress("el_trackcov_z0_theta", &el_trackcov_z0_theta, &b_el_trackcov_z0_theta);
   fChain->SetBranchAddress("el_trackcov_z0_qoverp", &el_trackcov_z0_qoverp, &b_el_trackcov_z0_qoverp);
   fChain->SetBranchAddress("el_trackcov_phi_theta", &el_trackcov_phi_theta, &b_el_trackcov_phi_theta);
   fChain->SetBranchAddress("el_trackcov_phi_qoverp", &el_trackcov_phi_qoverp, &b_el_trackcov_phi_qoverp);
   fChain->SetBranchAddress("el_trackcov_theta_qoverp", &el_trackcov_theta_qoverp, &b_el_trackcov_theta_qoverp);
   fChain->SetBranchAddress("el_trackfitchi2", &el_trackfitchi2, &b_el_trackfitchi2);
   fChain->SetBranchAddress("el_trackfitndof", &el_trackfitndof, &b_el_trackfitndof);
   fChain->SetBranchAddress("el_nBLHits", &el_nBLHits, &b_el_nBLHits);
   fChain->SetBranchAddress("el_nPixHits", &el_nPixHits, &b_el_nPixHits);
   fChain->SetBranchAddress("el_nSCTHits", &el_nSCTHits, &b_el_nSCTHits);
   fChain->SetBranchAddress("el_nTRTHits", &el_nTRTHits, &b_el_nTRTHits);
   fChain->SetBranchAddress("el_nTRTHighTHits", &el_nTRTHighTHits, &b_el_nTRTHighTHits);
   fChain->SetBranchAddress("el_nPixHoles", &el_nPixHoles, &b_el_nPixHoles);
   fChain->SetBranchAddress("el_nSCTHoles", &el_nSCTHoles, &b_el_nSCTHoles);
   fChain->SetBranchAddress("el_nTRTHoles", &el_nTRTHoles, &b_el_nTRTHoles);
   fChain->SetBranchAddress("el_nPixelDeadSensors", &el_nPixelDeadSensors, &b_el_nPixelDeadSensors);
   fChain->SetBranchAddress("el_nSCTDeadSensors", &el_nSCTDeadSensors, &b_el_nSCTDeadSensors);
   fChain->SetBranchAddress("el_nBLSharedHits", &el_nBLSharedHits, &b_el_nBLSharedHits);
   fChain->SetBranchAddress("el_nPixSharedHits", &el_nPixSharedHits, &b_el_nPixSharedHits);
   fChain->SetBranchAddress("el_nSCTSharedHits", &el_nSCTSharedHits, &b_el_nSCTSharedHits);
   fChain->SetBranchAddress("el_nBLayerSplitHits", &el_nBLayerSplitHits, &b_el_nBLayerSplitHits);
   fChain->SetBranchAddress("el_nPixSplitHits", &el_nPixSplitHits, &b_el_nPixSplitHits);
   fChain->SetBranchAddress("el_nBLayerOutliers", &el_nBLayerOutliers, &b_el_nBLayerOutliers);
   fChain->SetBranchAddress("el_nPixelOutliers", &el_nPixelOutliers, &b_el_nPixelOutliers);
   fChain->SetBranchAddress("el_nSCTOutliers", &el_nSCTOutliers, &b_el_nSCTOutliers);
   fChain->SetBranchAddress("el_nTRTOutliers", &el_nTRTOutliers, &b_el_nTRTOutliers);
   fChain->SetBranchAddress("el_nTRTHighTOutliers", &el_nTRTHighTOutliers, &b_el_nTRTHighTOutliers);
   fChain->SetBranchAddress("el_nContribPixelLayers", &el_nContribPixelLayers, &b_el_nContribPixelLayers);
   fChain->SetBranchAddress("el_nGangedPixels", &el_nGangedPixels, &b_el_nGangedPixels);
   fChain->SetBranchAddress("el_nGangedFlaggedFakes", &el_nGangedFlaggedFakes, &b_el_nGangedFlaggedFakes);
   fChain->SetBranchAddress("el_nPixelSpoiltHits", &el_nPixelSpoiltHits, &b_el_nPixelSpoiltHits);
   fChain->SetBranchAddress("el_nSCTDoubleHoles", &el_nSCTDoubleHoles, &b_el_nSCTDoubleHoles);
   fChain->SetBranchAddress("el_nSCTSpoiltHits", &el_nSCTSpoiltHits, &b_el_nSCTSpoiltHits);
   fChain->SetBranchAddress("el_expectBLayerHit", &el_expectBLayerHit, &b_el_expectBLayerHit);
   fChain->SetBranchAddress("el_nSiHits", &el_nSiHits, &b_el_nSiHits);
   fChain->SetBranchAddress("el_TRTHighTHitsRatio", &el_TRTHighTHitsRatio, &b_el_TRTHighTHitsRatio);
   fChain->SetBranchAddress("el_TRTHighTOutliersRatio", &el_TRTHighTOutliersRatio, &b_el_TRTHighTOutliersRatio);
   fChain->SetBranchAddress("el_pixeldEdx", &el_pixeldEdx, &b_el_pixeldEdx);
   fChain->SetBranchAddress("el_nGoodHitsPixeldEdx", &el_nGoodHitsPixeldEdx, &b_el_nGoodHitsPixeldEdx);
   fChain->SetBranchAddress("el_massPixeldEdx", &el_massPixeldEdx, &b_el_massPixeldEdx);
   fChain->SetBranchAddress("el_likelihoodsPixeldEdx", &el_likelihoodsPixeldEdx, &b_el_likelihoodsPixeldEdx);
   fChain->SetBranchAddress("el_eProbabilityComb", &el_eProbabilityComb, &b_el_eProbabilityComb);
   fChain->SetBranchAddress("el_eProbabilityHT", &el_eProbabilityHT, &b_el_eProbabilityHT);
   fChain->SetBranchAddress("el_eProbabilityToT", &el_eProbabilityToT, &b_el_eProbabilityToT);
   fChain->SetBranchAddress("el_eProbabilityBrem", &el_eProbabilityBrem, &b_el_eProbabilityBrem);
   fChain->SetBranchAddress("el_vertweight", &el_vertweight, &b_el_vertweight);
   fChain->SetBranchAddress("el_vertx", &el_vertx, &b_el_vertx);
   fChain->SetBranchAddress("el_verty", &el_verty, &b_el_verty);
   fChain->SetBranchAddress("el_vertz", &el_vertz, &b_el_vertz);
   fChain->SetBranchAddress("el_trackd0beam", &el_trackd0beam, &b_el_trackd0beam);
   fChain->SetBranchAddress("el_trackz0beam", &el_trackz0beam, &b_el_trackz0beam);
   fChain->SetBranchAddress("el_tracksigd0beam", &el_tracksigd0beam, &b_el_tracksigd0beam);
   fChain->SetBranchAddress("el_tracksigz0beam", &el_tracksigz0beam, &b_el_tracksigz0beam);
   fChain->SetBranchAddress("el_trackd0pv", &el_trackd0pv, &b_el_trackd0pv);
   fChain->SetBranchAddress("el_trackz0pv", &el_trackz0pv, &b_el_trackz0pv);
   fChain->SetBranchAddress("el_tracksigd0pv", &el_tracksigd0pv, &b_el_tracksigd0pv);
   fChain->SetBranchAddress("el_tracksigz0pv", &el_tracksigz0pv, &b_el_tracksigz0pv);
   fChain->SetBranchAddress("el_trackIPEstimate_d0_biasedpvunbiased", &el_trackIPEstimate_d0_biasedpvunbiased, &b_el_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_z0_biasedpvunbiased", &el_trackIPEstimate_z0_biasedpvunbiased, &b_el_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigd0_biasedpvunbiased", &el_trackIPEstimate_sigd0_biasedpvunbiased, &b_el_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigz0_biasedpvunbiased", &el_trackIPEstimate_sigz0_biasedpvunbiased, &b_el_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_d0_unbiasedpvunbiased", &el_trackIPEstimate_d0_unbiasedpvunbiased, &b_el_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_z0_unbiasedpvunbiased", &el_trackIPEstimate_z0_unbiasedpvunbiased, &b_el_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigd0_unbiasedpvunbiased", &el_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_el_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackIPEstimate_sigz0_unbiasedpvunbiased", &el_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_el_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("el_trackd0pvunbiased", &el_trackd0pvunbiased, &b_el_trackd0pvunbiased);
   fChain->SetBranchAddress("el_trackz0pvunbiased", &el_trackz0pvunbiased, &b_el_trackz0pvunbiased);
   fChain->SetBranchAddress("el_tracksigd0pvunbiased", &el_tracksigd0pvunbiased, &b_el_tracksigd0pvunbiased);
   fChain->SetBranchAddress("el_tracksigz0pvunbiased", &el_tracksigz0pvunbiased, &b_el_tracksigz0pvunbiased);
   fChain->SetBranchAddress("el_Unrefittedtrack_d0", &el_Unrefittedtrack_d0, &b_el_Unrefittedtrack_d0);
   fChain->SetBranchAddress("el_Unrefittedtrack_z0", &el_Unrefittedtrack_z0, &b_el_Unrefittedtrack_z0);
   fChain->SetBranchAddress("el_Unrefittedtrack_phi", &el_Unrefittedtrack_phi, &b_el_Unrefittedtrack_phi);
   fChain->SetBranchAddress("el_Unrefittedtrack_theta", &el_Unrefittedtrack_theta, &b_el_Unrefittedtrack_theta);
   fChain->SetBranchAddress("el_Unrefittedtrack_qoverp", &el_Unrefittedtrack_qoverp, &b_el_Unrefittedtrack_qoverp);
   fChain->SetBranchAddress("el_Unrefittedtrack_pt", &el_Unrefittedtrack_pt, &b_el_Unrefittedtrack_pt);
   fChain->SetBranchAddress("el_Unrefittedtrack_eta", &el_Unrefittedtrack_eta, &b_el_Unrefittedtrack_eta);
   fChain->SetBranchAddress("el_hastrack", &el_hastrack, &b_el_hastrack);
   fChain->SetBranchAddress("el_deltaEmax2", &el_deltaEmax2, &b_el_deltaEmax2);
   fChain->SetBranchAddress("el_calibHitsShowerDepth", &el_calibHitsShowerDepth, &b_el_calibHitsShowerDepth);
   fChain->SetBranchAddress("el_isIso", &el_isIso, &b_el_isIso);
   fChain->SetBranchAddress("el_mvaptcone20", &el_mvaptcone20, &b_el_mvaptcone20);
   fChain->SetBranchAddress("el_mvaptcone30", &el_mvaptcone30, &b_el_mvaptcone30);
   fChain->SetBranchAddress("el_mvaptcone40", &el_mvaptcone40, &b_el_mvaptcone40);
   fChain->SetBranchAddress("el_CaloPointing_eta", &el_CaloPointing_eta, &b_el_CaloPointing_eta);
   fChain->SetBranchAddress("el_CaloPointing_sigma_eta", &el_CaloPointing_sigma_eta, &b_el_CaloPointing_sigma_eta);
   fChain->SetBranchAddress("el_CaloPointing_zvertex", &el_CaloPointing_zvertex, &b_el_CaloPointing_zvertex);
   fChain->SetBranchAddress("el_CaloPointing_sigma_zvertex", &el_CaloPointing_sigma_zvertex, &b_el_CaloPointing_sigma_zvertex);
   fChain->SetBranchAddress("el_HPV_eta", &el_HPV_eta, &b_el_HPV_eta);
   fChain->SetBranchAddress("el_HPV_sigma_eta", &el_HPV_sigma_eta, &b_el_HPV_sigma_eta);
   fChain->SetBranchAddress("el_HPV_zvertex", &el_HPV_zvertex, &b_el_HPV_zvertex);
   fChain->SetBranchAddress("el_HPV_sigma_zvertex", &el_HPV_sigma_zvertex, &b_el_HPV_sigma_zvertex);
   fChain->SetBranchAddress("el_topoEtcone60", &el_topoEtcone60, &b_el_topoEtcone60);
   fChain->SetBranchAddress("el_ES0_real", &el_ES0_real, &b_el_ES0_real);
   fChain->SetBranchAddress("el_ES1_real", &el_ES1_real, &b_el_ES1_real);
   fChain->SetBranchAddress("el_ES2_real", &el_ES2_real, &b_el_ES2_real);
   fChain->SetBranchAddress("el_ES3_real", &el_ES3_real, &b_el_ES3_real);
   fChain->SetBranchAddress("el_EcellS0", &el_EcellS0, &b_el_EcellS0);
   fChain->SetBranchAddress("el_etacellS0", &el_etacellS0, &b_el_etacellS0);
   fChain->SetBranchAddress("el_Etcone40_ED_corrected", &el_Etcone40_ED_corrected, &b_el_Etcone40_ED_corrected);
   fChain->SetBranchAddress("el_Etcone40_corrected", &el_Etcone40_corrected, &b_el_Etcone40_corrected);
   fChain->SetBranchAddress("el_topoEtcone20_corrected", &el_topoEtcone20_corrected, &b_el_topoEtcone20_corrected);
   fChain->SetBranchAddress("el_topoEtcone30_corrected", &el_topoEtcone30_corrected, &b_el_topoEtcone30_corrected);
   fChain->SetBranchAddress("el_topoEtcone40_corrected", &el_topoEtcone40_corrected, &b_el_topoEtcone40_corrected);
   fChain->SetBranchAddress("el_ED_median", &el_ED_median, &b_el_ED_median);
   fChain->SetBranchAddress("el_ED_sigma", &el_ED_sigma, &b_el_ED_sigma);
   fChain->SetBranchAddress("el_ED_Njets", &el_ED_Njets, &b_el_ED_Njets);
   fChain->SetBranchAddress("el_jet_dr", &el_jet_dr, &b_el_jet_dr);
   fChain->SetBranchAddress("el_jet_E", &el_jet_E, &b_el_jet_E);
   fChain->SetBranchAddress("el_jet_pt", &el_jet_pt, &b_el_jet_pt);
   fChain->SetBranchAddress("el_jet_m", &el_jet_m, &b_el_jet_m);
   fChain->SetBranchAddress("el_jet_eta", &el_jet_eta, &b_el_jet_eta);
   fChain->SetBranchAddress("el_jet_phi", &el_jet_phi, &b_el_jet_phi);
   fChain->SetBranchAddress("el_jet_matched", &el_jet_matched, &b_el_jet_matched);
   fChain->SetBranchAddress("el_EF_dr", &el_EF_dr, &b_el_EF_dr);
   fChain->SetBranchAddress("el_EF_index", &el_EF_index, &b_el_EF_index);
   fChain->SetBranchAddress("ph_n", &ph_n, &b_ph_n);
   fChain->SetBranchAddress("ph_E", &ph_E, &b_ph_E);
   fChain->SetBranchAddress("ph_Et", &ph_Et, &b_ph_Et);
   fChain->SetBranchAddress("ph_pt", &ph_pt, &b_ph_pt);
   fChain->SetBranchAddress("ph_m", &ph_m, &b_ph_m);
   fChain->SetBranchAddress("ph_eta", &ph_eta, &b_ph_eta);
   fChain->SetBranchAddress("ph_phi", &ph_phi, &b_ph_phi);
   fChain->SetBranchAddress("ph_px", &ph_px, &b_ph_px);
   fChain->SetBranchAddress("ph_py", &ph_py, &b_ph_py);
   fChain->SetBranchAddress("ph_pz", &ph_pz, &b_ph_pz);
   fChain->SetBranchAddress("ph_author", &ph_author, &b_ph_author);
   fChain->SetBranchAddress("ph_isRecovered", &ph_isRecovered, &b_ph_isRecovered);
   fChain->SetBranchAddress("ph_isEM", &ph_isEM, &b_ph_isEM);
   fChain->SetBranchAddress("ph_isEMLoose", &ph_isEMLoose, &b_ph_isEMLoose);
   fChain->SetBranchAddress("ph_isEMMedium", &ph_isEMMedium, &b_ph_isEMMedium);
   fChain->SetBranchAddress("ph_isEMTight", &ph_isEMTight, &b_ph_isEMTight);
   fChain->SetBranchAddress("ph_OQ", &ph_OQ, &b_ph_OQ);
   fChain->SetBranchAddress("ph_convFlag", &ph_convFlag, &b_ph_convFlag);
   fChain->SetBranchAddress("ph_isConv", &ph_isConv, &b_ph_isConv);
   fChain->SetBranchAddress("ph_nConv", &ph_nConv, &b_ph_nConv);
   fChain->SetBranchAddress("ph_nSingleTrackConv", &ph_nSingleTrackConv, &b_ph_nSingleTrackConv);
   fChain->SetBranchAddress("ph_nDoubleTrackConv", &ph_nDoubleTrackConv, &b_ph_nDoubleTrackConv);
   fChain->SetBranchAddress("ph_loose", &ph_loose, &b_ph_loose);
   fChain->SetBranchAddress("ph_looseIso", &ph_looseIso, &b_ph_looseIso);
   fChain->SetBranchAddress("ph_tight", &ph_tight, &b_ph_tight);
   fChain->SetBranchAddress("ph_tightIso", &ph_tightIso, &b_ph_tightIso);
   fChain->SetBranchAddress("ph_looseAR", &ph_looseAR, &b_ph_looseAR);
   fChain->SetBranchAddress("ph_looseARIso", &ph_looseARIso, &b_ph_looseARIso);
   fChain->SetBranchAddress("ph_tightAR", &ph_tightAR, &b_ph_tightAR);
   fChain->SetBranchAddress("ph_tightARIso", &ph_tightARIso, &b_ph_tightARIso);
   fChain->SetBranchAddress("ph_goodOQ", &ph_goodOQ, &b_ph_goodOQ);
   fChain->SetBranchAddress("ph_Ethad", &ph_Ethad, &b_ph_Ethad);
   fChain->SetBranchAddress("ph_Ethad1", &ph_Ethad1, &b_ph_Ethad1);
   fChain->SetBranchAddress("ph_E033", &ph_E033, &b_ph_E033);
   fChain->SetBranchAddress("ph_f1", &ph_f1, &b_ph_f1);
   fChain->SetBranchAddress("ph_f1core", &ph_f1core, &b_ph_f1core);
   fChain->SetBranchAddress("ph_Emins1", &ph_Emins1, &b_ph_Emins1);
   fChain->SetBranchAddress("ph_fside", &ph_fside, &b_ph_fside);
   fChain->SetBranchAddress("ph_Emax2", &ph_Emax2, &b_ph_Emax2);
   fChain->SetBranchAddress("ph_ws3", &ph_ws3, &b_ph_ws3);
   fChain->SetBranchAddress("ph_wstot", &ph_wstot, &b_ph_wstot);
   fChain->SetBranchAddress("ph_E132", &ph_E132, &b_ph_E132);
   fChain->SetBranchAddress("ph_E1152", &ph_E1152, &b_ph_E1152);
   fChain->SetBranchAddress("ph_emaxs1", &ph_emaxs1, &b_ph_emaxs1);
   fChain->SetBranchAddress("ph_deltaEs", &ph_deltaEs, &b_ph_deltaEs);
   fChain->SetBranchAddress("ph_E233", &ph_E233, &b_ph_E233);
   fChain->SetBranchAddress("ph_E237", &ph_E237, &b_ph_E237);
   fChain->SetBranchAddress("ph_E277", &ph_E277, &b_ph_E277);
   fChain->SetBranchAddress("ph_weta2", &ph_weta2, &b_ph_weta2);
   fChain->SetBranchAddress("ph_f3", &ph_f3, &b_ph_f3);
   fChain->SetBranchAddress("ph_f3core", &ph_f3core, &b_ph_f3core);
   fChain->SetBranchAddress("ph_rphiallcalo", &ph_rphiallcalo, &b_ph_rphiallcalo);
   fChain->SetBranchAddress("ph_Etcone45", &ph_Etcone45, &b_ph_Etcone45);
   fChain->SetBranchAddress("ph_Etcone15", &ph_Etcone15, &b_ph_Etcone15);
   fChain->SetBranchAddress("ph_Etcone20", &ph_Etcone20, &b_ph_Etcone20);
   fChain->SetBranchAddress("ph_Etcone25", &ph_Etcone25, &b_ph_Etcone25);
   fChain->SetBranchAddress("ph_Etcone30", &ph_Etcone30, &b_ph_Etcone30);
   fChain->SetBranchAddress("ph_Etcone35", &ph_Etcone35, &b_ph_Etcone35);
   fChain->SetBranchAddress("ph_Etcone40", &ph_Etcone40, &b_ph_Etcone40);
   fChain->SetBranchAddress("ph_ptcone20", &ph_ptcone20, &b_ph_ptcone20);
   fChain->SetBranchAddress("ph_ptcone30", &ph_ptcone30, &b_ph_ptcone30);
   fChain->SetBranchAddress("ph_ptcone40", &ph_ptcone40, &b_ph_ptcone40);
   fChain->SetBranchAddress("ph_nucone20", &ph_nucone20, &b_ph_nucone20);
   fChain->SetBranchAddress("ph_nucone30", &ph_nucone30, &b_ph_nucone30);
   fChain->SetBranchAddress("ph_nucone40", &ph_nucone40, &b_ph_nucone40);
   fChain->SetBranchAddress("ph_Etcone15_pt_corrected", &ph_Etcone15_pt_corrected, &b_ph_Etcone15_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone20_pt_corrected", &ph_Etcone20_pt_corrected, &b_ph_Etcone20_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone25_pt_corrected", &ph_Etcone25_pt_corrected, &b_ph_Etcone25_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone30_pt_corrected", &ph_Etcone30_pt_corrected, &b_ph_Etcone30_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone35_pt_corrected", &ph_Etcone35_pt_corrected, &b_ph_Etcone35_pt_corrected);
   fChain->SetBranchAddress("ph_Etcone40_pt_corrected", &ph_Etcone40_pt_corrected, &b_ph_Etcone40_pt_corrected);
   fChain->SetBranchAddress("ph_convanglematch", &ph_convanglematch, &b_ph_convanglematch);
   fChain->SetBranchAddress("ph_convtrackmatch", &ph_convtrackmatch, &b_ph_convtrackmatch);
   fChain->SetBranchAddress("ph_hasconv", &ph_hasconv, &b_ph_hasconv);
   fChain->SetBranchAddress("ph_convvtxx", &ph_convvtxx, &b_ph_convvtxx);
   fChain->SetBranchAddress("ph_convvtxy", &ph_convvtxy, &b_ph_convvtxy);
   fChain->SetBranchAddress("ph_convvtxz", &ph_convvtxz, &b_ph_convvtxz);
   fChain->SetBranchAddress("ph_Rconv", &ph_Rconv, &b_ph_Rconv);
   fChain->SetBranchAddress("ph_zconv", &ph_zconv, &b_ph_zconv);
   fChain->SetBranchAddress("ph_convvtxchi2", &ph_convvtxchi2, &b_ph_convvtxchi2);
   fChain->SetBranchAddress("ph_pt1conv", &ph_pt1conv, &b_ph_pt1conv);
   fChain->SetBranchAddress("ph_convtrk1nBLHits", &ph_convtrk1nBLHits, &b_ph_convtrk1nBLHits);
   fChain->SetBranchAddress("ph_convtrk1nPixHits", &ph_convtrk1nPixHits, &b_ph_convtrk1nPixHits);
   fChain->SetBranchAddress("ph_convtrk1nSCTHits", &ph_convtrk1nSCTHits, &b_ph_convtrk1nSCTHits);
   fChain->SetBranchAddress("ph_convtrk1nTRTHits", &ph_convtrk1nTRTHits, &b_ph_convtrk1nTRTHits);
   fChain->SetBranchAddress("ph_pt2conv", &ph_pt2conv, &b_ph_pt2conv);
   fChain->SetBranchAddress("ph_convtrk2nBLHits", &ph_convtrk2nBLHits, &b_ph_convtrk2nBLHits);
   fChain->SetBranchAddress("ph_convtrk2nPixHits", &ph_convtrk2nPixHits, &b_ph_convtrk2nPixHits);
   fChain->SetBranchAddress("ph_convtrk2nSCTHits", &ph_convtrk2nSCTHits, &b_ph_convtrk2nSCTHits);
   fChain->SetBranchAddress("ph_convtrk2nTRTHits", &ph_convtrk2nTRTHits, &b_ph_convtrk2nTRTHits);
   fChain->SetBranchAddress("ph_ptconv", &ph_ptconv, &b_ph_ptconv);
   fChain->SetBranchAddress("ph_pzconv", &ph_pzconv, &b_ph_pzconv);
   fChain->SetBranchAddress("ph_reta", &ph_reta, &b_ph_reta);
   fChain->SetBranchAddress("ph_rphi", &ph_rphi, &b_ph_rphi);
   fChain->SetBranchAddress("ph_topoEtcone20", &ph_topoEtcone20, &b_ph_topoEtcone20);
   fChain->SetBranchAddress("ph_topoEtcone30", &ph_topoEtcone30, &b_ph_topoEtcone30);
   fChain->SetBranchAddress("ph_topoEtcone40", &ph_topoEtcone40, &b_ph_topoEtcone40);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig2", &ph_EtringnoisedR03sig2, &b_ph_EtringnoisedR03sig2);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig3", &ph_EtringnoisedR03sig3, &b_ph_EtringnoisedR03sig3);
   fChain->SetBranchAddress("ph_EtringnoisedR03sig4", &ph_EtringnoisedR03sig4, &b_ph_EtringnoisedR03sig4);
   fChain->SetBranchAddress("ph_isolationlikelihoodjets", &ph_isolationlikelihoodjets, &b_ph_isolationlikelihoodjets);
   fChain->SetBranchAddress("ph_isolationlikelihoodhqelectrons", &ph_isolationlikelihoodhqelectrons, &b_ph_isolationlikelihoodhqelectrons);
   fChain->SetBranchAddress("ph_loglikelihood", &ph_loglikelihood, &b_ph_loglikelihood);
   fChain->SetBranchAddress("ph_photonweight", &ph_photonweight, &b_ph_photonweight);
   fChain->SetBranchAddress("ph_photonbgweight", &ph_photonbgweight, &b_ph_photonbgweight);
   fChain->SetBranchAddress("ph_neuralnet", &ph_neuralnet, &b_ph_neuralnet);
   fChain->SetBranchAddress("ph_Hmatrix", &ph_Hmatrix, &b_ph_Hmatrix);
   fChain->SetBranchAddress("ph_Hmatrix5", &ph_Hmatrix5, &b_ph_Hmatrix5);
   fChain->SetBranchAddress("ph_adaboost", &ph_adaboost, &b_ph_adaboost);
   fChain->SetBranchAddress("ph_ringernn", &ph_ringernn, &b_ph_ringernn);
   fChain->SetBranchAddress("ph_zvertex", &ph_zvertex, &b_ph_zvertex);
   fChain->SetBranchAddress("ph_errz", &ph_errz, &b_ph_errz);
   fChain->SetBranchAddress("ph_etap", &ph_etap, &b_ph_etap);
   fChain->SetBranchAddress("ph_depth", &ph_depth, &b_ph_depth);
   fChain->SetBranchAddress("ph_cl_E", &ph_cl_E, &b_ph_cl_E);
   fChain->SetBranchAddress("ph_cl_pt", &ph_cl_pt, &b_ph_cl_pt);
   fChain->SetBranchAddress("ph_cl_eta", &ph_cl_eta, &b_ph_cl_eta);
   fChain->SetBranchAddress("ph_cl_phi", &ph_cl_phi, &b_ph_cl_phi);
   fChain->SetBranchAddress("ph_Es0", &ph_Es0, &b_ph_Es0);
   fChain->SetBranchAddress("ph_etas0", &ph_etas0, &b_ph_etas0);
   fChain->SetBranchAddress("ph_phis0", &ph_phis0, &b_ph_phis0);
   fChain->SetBranchAddress("ph_Es1", &ph_Es1, &b_ph_Es1);
   fChain->SetBranchAddress("ph_etas1", &ph_etas1, &b_ph_etas1);
   fChain->SetBranchAddress("ph_phis1", &ph_phis1, &b_ph_phis1);
   fChain->SetBranchAddress("ph_Es2", &ph_Es2, &b_ph_Es2);
   fChain->SetBranchAddress("ph_etas2", &ph_etas2, &b_ph_etas2);
   fChain->SetBranchAddress("ph_phis2", &ph_phis2, &b_ph_phis2);
   fChain->SetBranchAddress("ph_Es3", &ph_Es3, &b_ph_Es3);
   fChain->SetBranchAddress("ph_etas3", &ph_etas3, &b_ph_etas3);
   fChain->SetBranchAddress("ph_phis3", &ph_phis3, &b_ph_phis3);
   fChain->SetBranchAddress("ph_rawcl_Es0", &ph_rawcl_Es0, &b_ph_rawcl_Es0);
   fChain->SetBranchAddress("ph_rawcl_etas0", &ph_rawcl_etas0, &b_ph_rawcl_etas0);
   fChain->SetBranchAddress("ph_rawcl_phis0", &ph_rawcl_phis0, &b_ph_rawcl_phis0);
   fChain->SetBranchAddress("ph_rawcl_Es1", &ph_rawcl_Es1, &b_ph_rawcl_Es1);
   fChain->SetBranchAddress("ph_rawcl_etas1", &ph_rawcl_etas1, &b_ph_rawcl_etas1);
   fChain->SetBranchAddress("ph_rawcl_phis1", &ph_rawcl_phis1, &b_ph_rawcl_phis1);
   fChain->SetBranchAddress("ph_rawcl_Es2", &ph_rawcl_Es2, &b_ph_rawcl_Es2);
   fChain->SetBranchAddress("ph_rawcl_etas2", &ph_rawcl_etas2, &b_ph_rawcl_etas2);
   fChain->SetBranchAddress("ph_rawcl_phis2", &ph_rawcl_phis2, &b_ph_rawcl_phis2);
   fChain->SetBranchAddress("ph_rawcl_Es3", &ph_rawcl_Es3, &b_ph_rawcl_Es3);
   fChain->SetBranchAddress("ph_rawcl_etas3", &ph_rawcl_etas3, &b_ph_rawcl_etas3);
   fChain->SetBranchAddress("ph_rawcl_phis3", &ph_rawcl_phis3, &b_ph_rawcl_phis3);
   fChain->SetBranchAddress("ph_rawcl_E", &ph_rawcl_E, &b_ph_rawcl_E);
   fChain->SetBranchAddress("ph_rawcl_pt", &ph_rawcl_pt, &b_ph_rawcl_pt);
   fChain->SetBranchAddress("ph_rawcl_eta", &ph_rawcl_eta, &b_ph_rawcl_eta);
   fChain->SetBranchAddress("ph_rawcl_phi", &ph_rawcl_phi, &b_ph_rawcl_phi);
   fChain->SetBranchAddress("ph_convMatchDeltaEta1", &ph_convMatchDeltaEta1, &b_ph_convMatchDeltaEta1);
   fChain->SetBranchAddress("ph_convMatchDeltaEta2", &ph_convMatchDeltaEta2, &b_ph_convMatchDeltaEta2);
   fChain->SetBranchAddress("ph_convMatchDeltaPhi1", &ph_convMatchDeltaPhi1, &b_ph_convMatchDeltaPhi1);
   fChain->SetBranchAddress("ph_convMatchDeltaPhi2", &ph_convMatchDeltaPhi2, &b_ph_convMatchDeltaPhi2);
   fChain->SetBranchAddress("ph_rings_E", &ph_rings_E, &b_ph_rings_E);
   fChain->SetBranchAddress("ph_vx_n", &ph_vx_n, &b_ph_vx_n);
   fChain->SetBranchAddress("ph_vx_x", &ph_vx_x, &b_ph_vx_x);
   fChain->SetBranchAddress("ph_vx_y", &ph_vx_y, &b_ph_vx_y);
   fChain->SetBranchAddress("ph_vx_z", &ph_vx_z, &b_ph_vx_z);
   fChain->SetBranchAddress("ph_vx_px", &ph_vx_px, &b_ph_vx_px);
   fChain->SetBranchAddress("ph_vx_py", &ph_vx_py, &b_ph_vx_py);
   fChain->SetBranchAddress("ph_vx_pz", &ph_vx_pz, &b_ph_vx_pz);
   fChain->SetBranchAddress("ph_vx_E", &ph_vx_E, &b_ph_vx_E);
   fChain->SetBranchAddress("ph_vx_m", &ph_vx_m, &b_ph_vx_m);
   fChain->SetBranchAddress("ph_vx_nTracks", &ph_vx_nTracks, &b_ph_vx_nTracks);
   fChain->SetBranchAddress("ph_vx_sumPt", &ph_vx_sumPt, &b_ph_vx_sumPt);
   fChain->SetBranchAddress("ph_vx_convTrk_weight", &ph_vx_convTrk_weight, &b_ph_vx_convTrk_weight);
   fChain->SetBranchAddress("ph_vx_convTrk_n", &ph_vx_convTrk_n, &b_ph_vx_convTrk_n);
   fChain->SetBranchAddress("ph_vx_convTrk_fitter", &ph_vx_convTrk_fitter, &b_ph_vx_convTrk_fitter);
   fChain->SetBranchAddress("ph_vx_convTrk_patternReco1", &ph_vx_convTrk_patternReco1, &b_ph_vx_convTrk_patternReco1);
   fChain->SetBranchAddress("ph_vx_convTrk_patternReco2", &ph_vx_convTrk_patternReco2, &b_ph_vx_convTrk_patternReco2);
   fChain->SetBranchAddress("ph_vx_convTrk_trackProperties", &ph_vx_convTrk_trackProperties, &b_ph_vx_convTrk_trackProperties);
   fChain->SetBranchAddress("ph_vx_convTrk_particleHypothesis", &ph_vx_convTrk_particleHypothesis, &b_ph_vx_convTrk_particleHypothesis);
   fChain->SetBranchAddress("ph_vx_convTrk_nBLHits", &ph_vx_convTrk_nBLHits, &b_ph_vx_convTrk_nBLHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixHits", &ph_vx_convTrk_nPixHits, &b_ph_vx_convTrk_nPixHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTHits", &ph_vx_convTrk_nSCTHits, &b_ph_vx_convTrk_nSCTHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTHits", &ph_vx_convTrk_nTRTHits, &b_ph_vx_convTrk_nTRTHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTHighTHits", &ph_vx_convTrk_nTRTHighTHits, &b_ph_vx_convTrk_nTRTHighTHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixHoles", &ph_vx_convTrk_nPixHoles, &b_ph_vx_convTrk_nPixHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTHoles", &ph_vx_convTrk_nSCTHoles, &b_ph_vx_convTrk_nSCTHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTHoles", &ph_vx_convTrk_nTRTHoles, &b_ph_vx_convTrk_nTRTHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixelDeadSensors", &ph_vx_convTrk_nPixelDeadSensors, &b_ph_vx_convTrk_nPixelDeadSensors);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTDeadSensors", &ph_vx_convTrk_nSCTDeadSensors, &b_ph_vx_convTrk_nSCTDeadSensors);
   fChain->SetBranchAddress("ph_vx_convTrk_nBLSharedHits", &ph_vx_convTrk_nBLSharedHits, &b_ph_vx_convTrk_nBLSharedHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixSharedHits", &ph_vx_convTrk_nPixSharedHits, &b_ph_vx_convTrk_nPixSharedHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTSharedHits", &ph_vx_convTrk_nSCTSharedHits, &b_ph_vx_convTrk_nSCTSharedHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nBLayerSplitHits", &ph_vx_convTrk_nBLayerSplitHits, &b_ph_vx_convTrk_nBLayerSplitHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixSplitHits", &ph_vx_convTrk_nPixSplitHits, &b_ph_vx_convTrk_nPixSplitHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nBLayerOutliers", &ph_vx_convTrk_nBLayerOutliers, &b_ph_vx_convTrk_nBLayerOutliers);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixelOutliers", &ph_vx_convTrk_nPixelOutliers, &b_ph_vx_convTrk_nPixelOutliers);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTOutliers", &ph_vx_convTrk_nSCTOutliers, &b_ph_vx_convTrk_nSCTOutliers);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTOutliers", &ph_vx_convTrk_nTRTOutliers, &b_ph_vx_convTrk_nTRTOutliers);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTHighTOutliers", &ph_vx_convTrk_nTRTHighTOutliers, &b_ph_vx_convTrk_nTRTHighTOutliers);
   fChain->SetBranchAddress("ph_vx_convTrk_nContribPixelLayers", &ph_vx_convTrk_nContribPixelLayers, &b_ph_vx_convTrk_nContribPixelLayers);
   fChain->SetBranchAddress("ph_vx_convTrk_nGangedPixels", &ph_vx_convTrk_nGangedPixels, &b_ph_vx_convTrk_nGangedPixels);
   fChain->SetBranchAddress("ph_vx_convTrk_nGangedFlaggedFakes", &ph_vx_convTrk_nGangedFlaggedFakes, &b_ph_vx_convTrk_nGangedFlaggedFakes);
   fChain->SetBranchAddress("ph_vx_convTrk_nPixelSpoiltHits", &ph_vx_convTrk_nPixelSpoiltHits, &b_ph_vx_convTrk_nPixelSpoiltHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTDoubleHoles", &ph_vx_convTrk_nSCTDoubleHoles, &b_ph_vx_convTrk_nSCTDoubleHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nSCTSpoiltHits", &ph_vx_convTrk_nSCTSpoiltHits, &b_ph_vx_convTrk_nSCTSpoiltHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTDeadStraws", &ph_vx_convTrk_nTRTDeadStraws, &b_ph_vx_convTrk_nTRTDeadStraws);
   fChain->SetBranchAddress("ph_vx_convTrk_nTRTTubeHits", &ph_vx_convTrk_nTRTTubeHits, &b_ph_vx_convTrk_nTRTTubeHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nOutliersOnTrack", &ph_vx_convTrk_nOutliersOnTrack, &b_ph_vx_convTrk_nOutliersOnTrack);
   fChain->SetBranchAddress("ph_vx_convTrk_standardDeviationOfChi2OS", &ph_vx_convTrk_standardDeviationOfChi2OS, &b_ph_vx_convTrk_standardDeviationOfChi2OS);
   fChain->SetBranchAddress("ph_vx_convTrk_expectBLayerHit", &ph_vx_convTrk_expectBLayerHit, &b_ph_vx_convTrk_expectBLayerHit);
   fChain->SetBranchAddress("ph_vx_convTrk_nMDTHits", &ph_vx_convTrk_nMDTHits, &b_ph_vx_convTrk_nMDTHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nCSCEtaHits", &ph_vx_convTrk_nCSCEtaHits, &b_ph_vx_convTrk_nCSCEtaHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nCSCPhiHits", &ph_vx_convTrk_nCSCPhiHits, &b_ph_vx_convTrk_nCSCPhiHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nRPCEtaHits", &ph_vx_convTrk_nRPCEtaHits, &b_ph_vx_convTrk_nRPCEtaHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nRPCPhiHits", &ph_vx_convTrk_nRPCPhiHits, &b_ph_vx_convTrk_nRPCPhiHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nTGCEtaHits", &ph_vx_convTrk_nTGCEtaHits, &b_ph_vx_convTrk_nTGCEtaHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nTGCPhiHits", &ph_vx_convTrk_nTGCPhiHits, &b_ph_vx_convTrk_nTGCPhiHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nMdtHoles", &ph_vx_convTrk_nMdtHoles, &b_ph_vx_convTrk_nMdtHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nCscEtaHoles", &ph_vx_convTrk_nCscEtaHoles, &b_ph_vx_convTrk_nCscEtaHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nCscPhiHoles", &ph_vx_convTrk_nCscPhiHoles, &b_ph_vx_convTrk_nCscPhiHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nRpcEtaHoles", &ph_vx_convTrk_nRpcEtaHoles, &b_ph_vx_convTrk_nRpcEtaHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nRpcPhiHoles", &ph_vx_convTrk_nRpcPhiHoles, &b_ph_vx_convTrk_nRpcPhiHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nTgcEtaHoles", &ph_vx_convTrk_nTgcEtaHoles, &b_ph_vx_convTrk_nTgcEtaHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nTgcPhiHoles", &ph_vx_convTrk_nTgcPhiHoles, &b_ph_vx_convTrk_nTgcPhiHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_nHits", &ph_vx_convTrk_nHits, &b_ph_vx_convTrk_nHits);
   fChain->SetBranchAddress("ph_vx_convTrk_nHoles", &ph_vx_convTrk_nHoles, &b_ph_vx_convTrk_nHoles);
   fChain->SetBranchAddress("ph_vx_convTrk_hitPattern", &ph_vx_convTrk_hitPattern, &b_ph_vx_convTrk_hitPattern);
   fChain->SetBranchAddress("ph_vx_convTrk_nSiHits", &ph_vx_convTrk_nSiHits, &b_ph_vx_convTrk_nSiHits);
   fChain->SetBranchAddress("ph_vx_convTrk_TRTHighTHitsRatio", &ph_vx_convTrk_TRTHighTHitsRatio, &b_ph_vx_convTrk_TRTHighTHitsRatio);
   fChain->SetBranchAddress("ph_vx_convTrk_TRTHighTOutliersRatio", &ph_vx_convTrk_TRTHighTOutliersRatio, &b_ph_vx_convTrk_TRTHighTOutliersRatio);
   fChain->SetBranchAddress("ph_vx_convTrk_eProbabilityComb", &ph_vx_convTrk_eProbabilityComb, &b_ph_vx_convTrk_eProbabilityComb);
   fChain->SetBranchAddress("ph_vx_convTrk_eProbabilityHT", &ph_vx_convTrk_eProbabilityHT, &b_ph_vx_convTrk_eProbabilityHT);
   fChain->SetBranchAddress("ph_vx_convTrk_eProbabilityToT", &ph_vx_convTrk_eProbabilityToT, &b_ph_vx_convTrk_eProbabilityToT);
   fChain->SetBranchAddress("ph_vx_convTrk_eProbabilityBrem", &ph_vx_convTrk_eProbabilityBrem, &b_ph_vx_convTrk_eProbabilityBrem);
   fChain->SetBranchAddress("ph_vx_convTrk_chi2", &ph_vx_convTrk_chi2, &b_ph_vx_convTrk_chi2);
   fChain->SetBranchAddress("ph_vx_convTrk_ndof", &ph_vx_convTrk_ndof, &b_ph_vx_convTrk_ndof);
   fChain->SetBranchAddress("ph_deltaEmax2", &ph_deltaEmax2, &b_ph_deltaEmax2);
   fChain->SetBranchAddress("ph_calibHitsShowerDepth", &ph_calibHitsShowerDepth, &b_ph_calibHitsShowerDepth);
   fChain->SetBranchAddress("ph_isIso", &ph_isIso, &b_ph_isIso);
   fChain->SetBranchAddress("ph_mvaptcone20", &ph_mvaptcone20, &b_ph_mvaptcone20);
   fChain->SetBranchAddress("ph_mvaptcone30", &ph_mvaptcone30, &b_ph_mvaptcone30);
   fChain->SetBranchAddress("ph_mvaptcone40", &ph_mvaptcone40, &b_ph_mvaptcone40);
   fChain->SetBranchAddress("ph_topoEtcone60", &ph_topoEtcone60, &b_ph_topoEtcone60);
   fChain->SetBranchAddress("ph_vx_Chi2", &ph_vx_Chi2, &b_ph_vx_Chi2);
   fChain->SetBranchAddress("ph_vx_Dcottheta", &ph_vx_Dcottheta, &b_ph_vx_Dcottheta);
   fChain->SetBranchAddress("ph_vx_Dphi", &ph_vx_Dphi, &b_ph_vx_Dphi);
   fChain->SetBranchAddress("ph_vx_Dist", &ph_vx_Dist, &b_ph_vx_Dist);
   fChain->SetBranchAddress("ph_vx_DR1R2", &ph_vx_DR1R2, &b_ph_vx_DR1R2);
   fChain->SetBranchAddress("ph_CaloPointing_eta", &ph_CaloPointing_eta, &b_ph_CaloPointing_eta);
   fChain->SetBranchAddress("ph_CaloPointing_sigma_eta", &ph_CaloPointing_sigma_eta, &b_ph_CaloPointing_sigma_eta);
   fChain->SetBranchAddress("ph_CaloPointing_zvertex", &ph_CaloPointing_zvertex, &b_ph_CaloPointing_zvertex);
   fChain->SetBranchAddress("ph_CaloPointing_sigma_zvertex", &ph_CaloPointing_sigma_zvertex, &b_ph_CaloPointing_sigma_zvertex);
   fChain->SetBranchAddress("ph_HPV_eta", &ph_HPV_eta, &b_ph_HPV_eta);
   fChain->SetBranchAddress("ph_HPV_sigma_eta", &ph_HPV_sigma_eta, &b_ph_HPV_sigma_eta);
   fChain->SetBranchAddress("ph_HPV_zvertex", &ph_HPV_zvertex, &b_ph_HPV_zvertex);
   fChain->SetBranchAddress("ph_HPV_sigma_zvertex", &ph_HPV_sigma_zvertex, &b_ph_HPV_sigma_zvertex);
   fChain->SetBranchAddress("ph_NN_passes", &ph_NN_passes, &b_ph_NN_passes);
   fChain->SetBranchAddress("ph_NN_discriminant", &ph_NN_discriminant, &b_ph_NN_discriminant);
   fChain->SetBranchAddress("ph_ES0_real", &ph_ES0_real, &b_ph_ES0_real);
   fChain->SetBranchAddress("ph_ES1_real", &ph_ES1_real, &b_ph_ES1_real);
   fChain->SetBranchAddress("ph_ES2_real", &ph_ES2_real, &b_ph_ES2_real);
   fChain->SetBranchAddress("ph_ES3_real", &ph_ES3_real, &b_ph_ES3_real);
   fChain->SetBranchAddress("ph_EcellS0", &ph_EcellS0, &b_ph_EcellS0);
   fChain->SetBranchAddress("ph_etacellS0", &ph_etacellS0, &b_ph_etacellS0);
   fChain->SetBranchAddress("ph_Etcone40_ED_corrected", &ph_Etcone40_ED_corrected, &b_ph_Etcone40_ED_corrected);
   fChain->SetBranchAddress("ph_Etcone40_corrected", &ph_Etcone40_corrected, &b_ph_Etcone40_corrected);
   fChain->SetBranchAddress("ph_topoEtcone20_corrected", &ph_topoEtcone20_corrected, &b_ph_topoEtcone20_corrected);
   fChain->SetBranchAddress("ph_topoEtcone30_corrected", &ph_topoEtcone30_corrected, &b_ph_topoEtcone30_corrected);
   fChain->SetBranchAddress("ph_topoEtcone40_corrected", &ph_topoEtcone40_corrected, &b_ph_topoEtcone40_corrected);
   fChain->SetBranchAddress("ph_ED_median", &ph_ED_median, &b_ph_ED_median);
   fChain->SetBranchAddress("ph_ED_sigma", &ph_ED_sigma, &b_ph_ED_sigma);
   fChain->SetBranchAddress("ph_ED_Njets", &ph_ED_Njets, &b_ph_ED_Njets);
   fChain->SetBranchAddress("ph_convIP", &ph_convIP, &b_ph_convIP);
   fChain->SetBranchAddress("ph_convIPRev", &ph_convIPRev, &b_ph_convIPRev);
   fChain->SetBranchAddress("ph_jet_dr", &ph_jet_dr, &b_ph_jet_dr);
   fChain->SetBranchAddress("ph_jet_E", &ph_jet_E, &b_ph_jet_E);
   fChain->SetBranchAddress("ph_jet_pt", &ph_jet_pt, &b_ph_jet_pt);
   fChain->SetBranchAddress("ph_jet_m", &ph_jet_m, &b_ph_jet_m);
   fChain->SetBranchAddress("ph_jet_eta", &ph_jet_eta, &b_ph_jet_eta);
   fChain->SetBranchAddress("ph_jet_phi", &ph_jet_phi, &b_ph_jet_phi);
   fChain->SetBranchAddress("ph_jet_matched", &ph_jet_matched, &b_ph_jet_matched);
   fChain->SetBranchAddress("ph_topodr", &ph_topodr, &b_ph_topodr);
   fChain->SetBranchAddress("ph_topopt", &ph_topopt, &b_ph_topopt);
   fChain->SetBranchAddress("ph_topoeta", &ph_topoeta, &b_ph_topoeta);
   fChain->SetBranchAddress("ph_topophi", &ph_topophi, &b_ph_topophi);
   fChain->SetBranchAddress("ph_topomatched", &ph_topomatched, &b_ph_topomatched);
   fChain->SetBranchAddress("ph_topoEMdr", &ph_topoEMdr, &b_ph_topoEMdr);
   fChain->SetBranchAddress("ph_topoEMpt", &ph_topoEMpt, &b_ph_topoEMpt);
   fChain->SetBranchAddress("ph_topoEMeta", &ph_topoEMeta, &b_ph_topoEMeta);
   fChain->SetBranchAddress("ph_topoEMphi", &ph_topoEMphi, &b_ph_topoEMphi);
   fChain->SetBranchAddress("ph_topoEMmatched", &ph_topoEMmatched, &b_ph_topoEMmatched);
   fChain->SetBranchAddress("ph_el_index", &ph_el_index, &b_ph_el_index);
   fChain->SetBranchAddress("ph_EF_dr", &ph_EF_dr, &b_ph_EF_dr);
   fChain->SetBranchAddress("ph_EF_index", &ph_EF_index, &b_ph_EF_index);
   fChain->SetBranchAddress("ph_L2_dr", &ph_L2_dr, &b_ph_L2_dr);
   fChain->SetBranchAddress("ph_L2_index", &ph_L2_index, &b_ph_L2_index);
   fChain->SetBranchAddress("ph_L1_dr", &ph_L1_dr, &b_ph_L1_dr);
   fChain->SetBranchAddress("ph_L1_index", &ph_L1_index, &b_ph_L1_index);
   fChain->SetBranchAddress("mu_staco_n", &mu_staco_n, &b_mu_staco_n);
   fChain->SetBranchAddress("mu_staco_E", &mu_staco_E, &b_mu_staco_E);
   fChain->SetBranchAddress("mu_staco_pt", &mu_staco_pt, &b_mu_staco_pt);
   fChain->SetBranchAddress("mu_staco_m", &mu_staco_m, &b_mu_staco_m);
   fChain->SetBranchAddress("mu_staco_eta", &mu_staco_eta, &b_mu_staco_eta);
   fChain->SetBranchAddress("mu_staco_phi", &mu_staco_phi, &b_mu_staco_phi);
   fChain->SetBranchAddress("mu_staco_px", &mu_staco_px, &b_mu_staco_px);
   fChain->SetBranchAddress("mu_staco_py", &mu_staco_py, &b_mu_staco_py);
   fChain->SetBranchAddress("mu_staco_pz", &mu_staco_pz, &b_mu_staco_pz);
   fChain->SetBranchAddress("mu_staco_charge", &mu_staco_charge, &b_mu_staco_charge);
   fChain->SetBranchAddress("mu_staco_allauthor", &mu_staco_allauthor, &b_mu_staco_allauthor);
   fChain->SetBranchAddress("mu_staco_author", &mu_staco_author, &b_mu_staco_author);
   fChain->SetBranchAddress("mu_staco_beta", &mu_staco_beta, &b_mu_staco_beta);
   fChain->SetBranchAddress("mu_staco_isMuonLikelihood", &mu_staco_isMuonLikelihood, &b_mu_staco_isMuonLikelihood);
   fChain->SetBranchAddress("mu_staco_matchchi2", &mu_staco_matchchi2, &b_mu_staco_matchchi2);
   fChain->SetBranchAddress("mu_staco_matchndof", &mu_staco_matchndof, &b_mu_staco_matchndof);
   fChain->SetBranchAddress("mu_staco_etcone20", &mu_staco_etcone20, &b_mu_staco_etcone20);
   fChain->SetBranchAddress("mu_staco_etcone30", &mu_staco_etcone30, &b_mu_staco_etcone30);
   fChain->SetBranchAddress("mu_staco_etcone40", &mu_staco_etcone40, &b_mu_staco_etcone40);
   fChain->SetBranchAddress("mu_staco_nucone20", &mu_staco_nucone20, &b_mu_staco_nucone20);
   fChain->SetBranchAddress("mu_staco_nucone30", &mu_staco_nucone30, &b_mu_staco_nucone30);
   fChain->SetBranchAddress("mu_staco_nucone40", &mu_staco_nucone40, &b_mu_staco_nucone40);
   fChain->SetBranchAddress("mu_staco_ptcone20", &mu_staco_ptcone20, &b_mu_staco_ptcone20);
   fChain->SetBranchAddress("mu_staco_ptcone30", &mu_staco_ptcone30, &b_mu_staco_ptcone30);
   fChain->SetBranchAddress("mu_staco_ptcone40", &mu_staco_ptcone40, &b_mu_staco_ptcone40);
   fChain->SetBranchAddress("mu_staco_scatteringCurvatureSignificance", &mu_staco_scatteringCurvatureSignificance, &b_mu_staco_scatteringCurvatureSignificance);
   fChain->SetBranchAddress("mu_staco_scatteringNeighbourSignificance", &mu_staco_scatteringNeighbourSignificance, &b_mu_staco_scatteringNeighbourSignificance);
   fChain->SetBranchAddress("mu_staco_momentumBalanceSignificance", &mu_staco_momentumBalanceSignificance, &b_mu_staco_momentumBalanceSignificance);
   fChain->SetBranchAddress("mu_staco_energyLossPar", &mu_staco_energyLossPar, &b_mu_staco_energyLossPar);
   fChain->SetBranchAddress("mu_staco_energyLossErr", &mu_staco_energyLossErr, &b_mu_staco_energyLossErr);
   fChain->SetBranchAddress("mu_staco_etCore", &mu_staco_etCore, &b_mu_staco_etCore);
   fChain->SetBranchAddress("mu_staco_energyLossType", &mu_staco_energyLossType, &b_mu_staco_energyLossType);
   fChain->SetBranchAddress("mu_staco_caloMuonIdTag", &mu_staco_caloMuonIdTag, &b_mu_staco_caloMuonIdTag);
   fChain->SetBranchAddress("mu_staco_caloLRLikelihood", &mu_staco_caloLRLikelihood, &b_mu_staco_caloLRLikelihood);
   fChain->SetBranchAddress("mu_staco_bestMatch", &mu_staco_bestMatch, &b_mu_staco_bestMatch);
   fChain->SetBranchAddress("mu_staco_isStandAloneMuon", &mu_staco_isStandAloneMuon, &b_mu_staco_isStandAloneMuon);
   fChain->SetBranchAddress("mu_staco_isCombinedMuon", &mu_staco_isCombinedMuon, &b_mu_staco_isCombinedMuon);
   fChain->SetBranchAddress("mu_staco_isLowPtReconstructedMuon", &mu_staco_isLowPtReconstructedMuon, &b_mu_staco_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_staco_isSegmentTaggedMuon", &mu_staco_isSegmentTaggedMuon, &b_mu_staco_isSegmentTaggedMuon);
   fChain->SetBranchAddress("mu_staco_isCaloMuonId", &mu_staco_isCaloMuonId, &b_mu_staco_isCaloMuonId);
   fChain->SetBranchAddress("mu_staco_alsoFoundByLowPt", &mu_staco_alsoFoundByLowPt, &b_mu_staco_alsoFoundByLowPt);
   fChain->SetBranchAddress("mu_staco_alsoFoundByCaloMuonId", &mu_staco_alsoFoundByCaloMuonId, &b_mu_staco_alsoFoundByCaloMuonId);
   fChain->SetBranchAddress("mu_staco_isSiliconAssociatedForwardMuon", &mu_staco_isSiliconAssociatedForwardMuon, &b_mu_staco_isSiliconAssociatedForwardMuon);
   fChain->SetBranchAddress("mu_staco_loose", &mu_staco_loose, &b_mu_staco_loose);
   fChain->SetBranchAddress("mu_staco_medium", &mu_staco_medium, &b_mu_staco_medium);
   fChain->SetBranchAddress("mu_staco_tight", &mu_staco_tight, &b_mu_staco_tight);
   fChain->SetBranchAddress("mu_staco_d0_exPV", &mu_staco_d0_exPV, &b_mu_staco_d0_exPV);
   fChain->SetBranchAddress("mu_staco_z0_exPV", &mu_staco_z0_exPV, &b_mu_staco_z0_exPV);
   fChain->SetBranchAddress("mu_staco_phi_exPV", &mu_staco_phi_exPV, &b_mu_staco_phi_exPV);
   fChain->SetBranchAddress("mu_staco_theta_exPV", &mu_staco_theta_exPV, &b_mu_staco_theta_exPV);
   fChain->SetBranchAddress("mu_staco_qoverp_exPV", &mu_staco_qoverp_exPV, &b_mu_staco_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cb_d0_exPV", &mu_staco_cb_d0_exPV, &b_mu_staco_cb_d0_exPV);
   fChain->SetBranchAddress("mu_staco_cb_z0_exPV", &mu_staco_cb_z0_exPV, &b_mu_staco_cb_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cb_phi_exPV", &mu_staco_cb_phi_exPV, &b_mu_staco_cb_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cb_theta_exPV", &mu_staco_cb_theta_exPV, &b_mu_staco_cb_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cb_qoverp_exPV", &mu_staco_cb_qoverp_exPV, &b_mu_staco_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_d0_exPV", &mu_staco_id_d0_exPV, &b_mu_staco_id_d0_exPV);
   fChain->SetBranchAddress("mu_staco_id_z0_exPV", &mu_staco_id_z0_exPV, &b_mu_staco_id_z0_exPV);
   fChain->SetBranchAddress("mu_staco_id_phi_exPV", &mu_staco_id_phi_exPV, &b_mu_staco_id_phi_exPV);
   fChain->SetBranchAddress("mu_staco_id_theta_exPV", &mu_staco_id_theta_exPV, &b_mu_staco_id_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_qoverp_exPV", &mu_staco_id_qoverp_exPV, &b_mu_staco_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_d0_exPV", &mu_staco_me_d0_exPV, &b_mu_staco_me_d0_exPV);
   fChain->SetBranchAddress("mu_staco_me_z0_exPV", &mu_staco_me_z0_exPV, &b_mu_staco_me_z0_exPV);
   fChain->SetBranchAddress("mu_staco_me_phi_exPV", &mu_staco_me_phi_exPV, &b_mu_staco_me_phi_exPV);
   fChain->SetBranchAddress("mu_staco_me_theta_exPV", &mu_staco_me_theta_exPV, &b_mu_staco_me_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_qoverp_exPV", &mu_staco_me_qoverp_exPV, &b_mu_staco_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_ie_d0_exPV", &mu_staco_ie_d0_exPV, &b_mu_staco_ie_d0_exPV);
   fChain->SetBranchAddress("mu_staco_ie_z0_exPV", &mu_staco_ie_z0_exPV, &b_mu_staco_ie_z0_exPV);
   fChain->SetBranchAddress("mu_staco_ie_phi_exPV", &mu_staco_ie_phi_exPV, &b_mu_staco_ie_phi_exPV);
   fChain->SetBranchAddress("mu_staco_ie_theta_exPV", &mu_staco_ie_theta_exPV, &b_mu_staco_ie_theta_exPV);
   fChain->SetBranchAddress("mu_staco_ie_qoverp_exPV", &mu_staco_ie_qoverp_exPV, &b_mu_staco_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_SpaceTime_detID", &mu_staco_SpaceTime_detID, &b_mu_staco_SpaceTime_detID);
   fChain->SetBranchAddress("mu_staco_SpaceTime_t", &mu_staco_SpaceTime_t, &b_mu_staco_SpaceTime_t);
   fChain->SetBranchAddress("mu_staco_SpaceTime_tError", &mu_staco_SpaceTime_tError, &b_mu_staco_SpaceTime_tError);
   fChain->SetBranchAddress("mu_staco_SpaceTime_weight", &mu_staco_SpaceTime_weight, &b_mu_staco_SpaceTime_weight);
   fChain->SetBranchAddress("mu_staco_SpaceTime_x", &mu_staco_SpaceTime_x, &b_mu_staco_SpaceTime_x);
   fChain->SetBranchAddress("mu_staco_SpaceTime_y", &mu_staco_SpaceTime_y, &b_mu_staco_SpaceTime_y);
   fChain->SetBranchAddress("mu_staco_SpaceTime_z", &mu_staco_SpaceTime_z, &b_mu_staco_SpaceTime_z);
   fChain->SetBranchAddress("mu_staco_cov_d0_exPV", &mu_staco_cov_d0_exPV, &b_mu_staco_cov_d0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_exPV", &mu_staco_cov_z0_exPV, &b_mu_staco_cov_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_exPV", &mu_staco_cov_phi_exPV, &b_mu_staco_cov_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_theta_exPV", &mu_staco_cov_theta_exPV, &b_mu_staco_cov_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_qoverp_exPV", &mu_staco_cov_qoverp_exPV, &b_mu_staco_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_z0_exPV", &mu_staco_cov_d0_z0_exPV, &b_mu_staco_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_phi_exPV", &mu_staco_cov_d0_phi_exPV, &b_mu_staco_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_theta_exPV", &mu_staco_cov_d0_theta_exPV, &b_mu_staco_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_d0_qoverp_exPV", &mu_staco_cov_d0_qoverp_exPV, &b_mu_staco_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_phi_exPV", &mu_staco_cov_z0_phi_exPV, &b_mu_staco_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_theta_exPV", &mu_staco_cov_z0_theta_exPV, &b_mu_staco_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_z0_qoverp_exPV", &mu_staco_cov_z0_qoverp_exPV, &b_mu_staco_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_theta_exPV", &mu_staco_cov_phi_theta_exPV, &b_mu_staco_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_staco_cov_phi_qoverp_exPV", &mu_staco_cov_phi_qoverp_exPV, &b_mu_staco_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_cov_theta_qoverp_exPV", &mu_staco_cov_theta_qoverp_exPV, &b_mu_staco_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_d0_exPV", &mu_staco_id_cov_d0_exPV, &b_mu_staco_id_cov_d0_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_z0_exPV", &mu_staco_id_cov_z0_exPV, &b_mu_staco_id_cov_z0_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_phi_exPV", &mu_staco_id_cov_phi_exPV, &b_mu_staco_id_cov_phi_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_theta_exPV", &mu_staco_id_cov_theta_exPV, &b_mu_staco_id_cov_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_qoverp_exPV", &mu_staco_id_cov_qoverp_exPV, &b_mu_staco_id_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_d0_z0_exPV", &mu_staco_id_cov_d0_z0_exPV, &b_mu_staco_id_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_d0_phi_exPV", &mu_staco_id_cov_d0_phi_exPV, &b_mu_staco_id_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_d0_theta_exPV", &mu_staco_id_cov_d0_theta_exPV, &b_mu_staco_id_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_d0_qoverp_exPV", &mu_staco_id_cov_d0_qoverp_exPV, &b_mu_staco_id_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_z0_phi_exPV", &mu_staco_id_cov_z0_phi_exPV, &b_mu_staco_id_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_z0_theta_exPV", &mu_staco_id_cov_z0_theta_exPV, &b_mu_staco_id_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_z0_qoverp_exPV", &mu_staco_id_cov_z0_qoverp_exPV, &b_mu_staco_id_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_phi_theta_exPV", &mu_staco_id_cov_phi_theta_exPV, &b_mu_staco_id_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_phi_qoverp_exPV", &mu_staco_id_cov_phi_qoverp_exPV, &b_mu_staco_id_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_id_cov_theta_qoverp_exPV", &mu_staco_id_cov_theta_qoverp_exPV, &b_mu_staco_id_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_d0_exPV", &mu_staco_me_cov_d0_exPV, &b_mu_staco_me_cov_d0_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_z0_exPV", &mu_staco_me_cov_z0_exPV, &b_mu_staco_me_cov_z0_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_phi_exPV", &mu_staco_me_cov_phi_exPV, &b_mu_staco_me_cov_phi_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_theta_exPV", &mu_staco_me_cov_theta_exPV, &b_mu_staco_me_cov_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_qoverp_exPV", &mu_staco_me_cov_qoverp_exPV, &b_mu_staco_me_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_d0_z0_exPV", &mu_staco_me_cov_d0_z0_exPV, &b_mu_staco_me_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_d0_phi_exPV", &mu_staco_me_cov_d0_phi_exPV, &b_mu_staco_me_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_d0_theta_exPV", &mu_staco_me_cov_d0_theta_exPV, &b_mu_staco_me_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_d0_qoverp_exPV", &mu_staco_me_cov_d0_qoverp_exPV, &b_mu_staco_me_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_z0_phi_exPV", &mu_staco_me_cov_z0_phi_exPV, &b_mu_staco_me_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_z0_theta_exPV", &mu_staco_me_cov_z0_theta_exPV, &b_mu_staco_me_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_z0_qoverp_exPV", &mu_staco_me_cov_z0_qoverp_exPV, &b_mu_staco_me_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_phi_theta_exPV", &mu_staco_me_cov_phi_theta_exPV, &b_mu_staco_me_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_phi_qoverp_exPV", &mu_staco_me_cov_phi_qoverp_exPV, &b_mu_staco_me_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_me_cov_theta_qoverp_exPV", &mu_staco_me_cov_theta_qoverp_exPV, &b_mu_staco_me_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_staco_ms_d0", &mu_staco_ms_d0, &b_mu_staco_ms_d0);
   fChain->SetBranchAddress("mu_staco_ms_z0", &mu_staco_ms_z0, &b_mu_staco_ms_z0);
   fChain->SetBranchAddress("mu_staco_ms_phi", &mu_staco_ms_phi, &b_mu_staco_ms_phi);
   fChain->SetBranchAddress("mu_staco_ms_theta", &mu_staco_ms_theta, &b_mu_staco_ms_theta);
   fChain->SetBranchAddress("mu_staco_ms_qoverp", &mu_staco_ms_qoverp, &b_mu_staco_ms_qoverp);
   fChain->SetBranchAddress("mu_staco_id_d0", &mu_staco_id_d0, &b_mu_staco_id_d0);
   fChain->SetBranchAddress("mu_staco_id_z0", &mu_staco_id_z0, &b_mu_staco_id_z0);
   fChain->SetBranchAddress("mu_staco_id_phi", &mu_staco_id_phi, &b_mu_staco_id_phi);
   fChain->SetBranchAddress("mu_staco_id_theta", &mu_staco_id_theta, &b_mu_staco_id_theta);
   fChain->SetBranchAddress("mu_staco_id_qoverp", &mu_staco_id_qoverp, &b_mu_staco_id_qoverp);
   fChain->SetBranchAddress("mu_staco_me_d0", &mu_staco_me_d0, &b_mu_staco_me_d0);
   fChain->SetBranchAddress("mu_staco_me_z0", &mu_staco_me_z0, &b_mu_staco_me_z0);
   fChain->SetBranchAddress("mu_staco_me_phi", &mu_staco_me_phi, &b_mu_staco_me_phi);
   fChain->SetBranchAddress("mu_staco_me_theta", &mu_staco_me_theta, &b_mu_staco_me_theta);
   fChain->SetBranchAddress("mu_staco_me_qoverp", &mu_staco_me_qoverp, &b_mu_staco_me_qoverp);
   fChain->SetBranchAddress("mu_staco_ie_d0", &mu_staco_ie_d0, &b_mu_staco_ie_d0);
   fChain->SetBranchAddress("mu_staco_ie_z0", &mu_staco_ie_z0, &b_mu_staco_ie_z0);
   fChain->SetBranchAddress("mu_staco_ie_phi", &mu_staco_ie_phi, &b_mu_staco_ie_phi);
   fChain->SetBranchAddress("mu_staco_ie_theta", &mu_staco_ie_theta, &b_mu_staco_ie_theta);
   fChain->SetBranchAddress("mu_staco_ie_qoverp", &mu_staco_ie_qoverp, &b_mu_staco_ie_qoverp);
   fChain->SetBranchAddress("mu_staco_nOutliersOnTrack", &mu_staco_nOutliersOnTrack, &b_mu_staco_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_staco_nBLHits", &mu_staco_nBLHits, &b_mu_staco_nBLHits);
   fChain->SetBranchAddress("mu_staco_nPixHits", &mu_staco_nPixHits, &b_mu_staco_nPixHits);
   fChain->SetBranchAddress("mu_staco_nSCTHits", &mu_staco_nSCTHits, &b_mu_staco_nSCTHits);
   fChain->SetBranchAddress("mu_staco_nTRTHits", &mu_staco_nTRTHits, &b_mu_staco_nTRTHits);
   fChain->SetBranchAddress("mu_staco_nTRTHighTHits", &mu_staco_nTRTHighTHits, &b_mu_staco_nTRTHighTHits);
   fChain->SetBranchAddress("mu_staco_nBLSharedHits", &mu_staco_nBLSharedHits, &b_mu_staco_nBLSharedHits);
   fChain->SetBranchAddress("mu_staco_nPixSharedHits", &mu_staco_nPixSharedHits, &b_mu_staco_nPixSharedHits);
   fChain->SetBranchAddress("mu_staco_nPixHoles", &mu_staco_nPixHoles, &b_mu_staco_nPixHoles);
   fChain->SetBranchAddress("mu_staco_nSCTSharedHits", &mu_staco_nSCTSharedHits, &b_mu_staco_nSCTSharedHits);
   fChain->SetBranchAddress("mu_staco_nSCTHoles", &mu_staco_nSCTHoles, &b_mu_staco_nSCTHoles);
   fChain->SetBranchAddress("mu_staco_nTRTOutliers", &mu_staco_nTRTOutliers, &b_mu_staco_nTRTOutliers);
   fChain->SetBranchAddress("mu_staco_nTRTHighTOutliers", &mu_staco_nTRTHighTOutliers, &b_mu_staco_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_staco_nGangedPixels", &mu_staco_nGangedPixels, &b_mu_staco_nGangedPixels);
   fChain->SetBranchAddress("mu_staco_nPixelDeadSensors", &mu_staco_nPixelDeadSensors, &b_mu_staco_nPixelDeadSensors);
   fChain->SetBranchAddress("mu_staco_nSCTDeadSensors", &mu_staco_nSCTDeadSensors, &b_mu_staco_nSCTDeadSensors);
   fChain->SetBranchAddress("mu_staco_nTRTDeadStraws", &mu_staco_nTRTDeadStraws, &b_mu_staco_nTRTDeadStraws);
   fChain->SetBranchAddress("mu_staco_expectBLayerHit", &mu_staco_expectBLayerHit, &b_mu_staco_expectBLayerHit);
   fChain->SetBranchAddress("mu_staco_nMDTHits", &mu_staco_nMDTHits, &b_mu_staco_nMDTHits);
   fChain->SetBranchAddress("mu_staco_nMDTHoles", &mu_staco_nMDTHoles, &b_mu_staco_nMDTHoles);
   fChain->SetBranchAddress("mu_staco_nCSCEtaHits", &mu_staco_nCSCEtaHits, &b_mu_staco_nCSCEtaHits);
   fChain->SetBranchAddress("mu_staco_nCSCEtaHoles", &mu_staco_nCSCEtaHoles, &b_mu_staco_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nCSCUnspoiledEtaHits", &mu_staco_nCSCUnspoiledEtaHits, &b_mu_staco_nCSCUnspoiledEtaHits);
   fChain->SetBranchAddress("mu_staco_nCSCPhiHits", &mu_staco_nCSCPhiHits, &b_mu_staco_nCSCPhiHits);
   fChain->SetBranchAddress("mu_staco_nCSCPhiHoles", &mu_staco_nCSCPhiHoles, &b_mu_staco_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nRPCEtaHits", &mu_staco_nRPCEtaHits, &b_mu_staco_nRPCEtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCEtaHoles", &mu_staco_nRPCEtaHoles, &b_mu_staco_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nRPCPhiHits", &mu_staco_nRPCPhiHits, &b_mu_staco_nRPCPhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCPhiHoles", &mu_staco_nRPCPhiHoles, &b_mu_staco_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nTGCEtaHits", &mu_staco_nTGCEtaHits, &b_mu_staco_nTGCEtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCEtaHoles", &mu_staco_nTGCEtaHoles, &b_mu_staco_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_staco_nTGCPhiHits", &mu_staco_nTGCPhiHits, &b_mu_staco_nTGCPhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCPhiHoles", &mu_staco_nTGCPhiHoles, &b_mu_staco_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_staco_nprecisionLayers", &mu_staco_nprecisionLayers, &b_mu_staco_nprecisionLayers);
   fChain->SetBranchAddress("mu_staco_nprecisionHoleLayers", &mu_staco_nprecisionHoleLayers, &b_mu_staco_nprecisionHoleLayers);
   fChain->SetBranchAddress("mu_staco_nphiLayers", &mu_staco_nphiLayers, &b_mu_staco_nphiLayers);
   fChain->SetBranchAddress("mu_staco_ntrigEtaLayers", &mu_staco_ntrigEtaLayers, &b_mu_staco_ntrigEtaLayers);
   fChain->SetBranchAddress("mu_staco_nphiHoleLayers", &mu_staco_nphiHoleLayers, &b_mu_staco_nphiHoleLayers);
   fChain->SetBranchAddress("mu_staco_ntrigEtaHoleLayers", &mu_staco_ntrigEtaHoleLayers, &b_mu_staco_ntrigEtaHoleLayers);
   fChain->SetBranchAddress("mu_staco_nMDTBIHits", &mu_staco_nMDTBIHits, &b_mu_staco_nMDTBIHits);
   fChain->SetBranchAddress("mu_staco_nMDTBMHits", &mu_staco_nMDTBMHits, &b_mu_staco_nMDTBMHits);
   fChain->SetBranchAddress("mu_staco_nMDTBOHits", &mu_staco_nMDTBOHits, &b_mu_staco_nMDTBOHits);
   fChain->SetBranchAddress("mu_staco_nMDTBEEHits", &mu_staco_nMDTBEEHits, &b_mu_staco_nMDTBEEHits);
   fChain->SetBranchAddress("mu_staco_nMDTBIS78Hits", &mu_staco_nMDTBIS78Hits, &b_mu_staco_nMDTBIS78Hits);
   fChain->SetBranchAddress("mu_staco_nMDTEIHits", &mu_staco_nMDTEIHits, &b_mu_staco_nMDTEIHits);
   fChain->SetBranchAddress("mu_staco_nMDTEMHits", &mu_staco_nMDTEMHits, &b_mu_staco_nMDTEMHits);
   fChain->SetBranchAddress("mu_staco_nMDTEOHits", &mu_staco_nMDTEOHits, &b_mu_staco_nMDTEOHits);
   fChain->SetBranchAddress("mu_staco_nMDTEEHits", &mu_staco_nMDTEEHits, &b_mu_staco_nMDTEEHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer1EtaHits", &mu_staco_nRPCLayer1EtaHits, &b_mu_staco_nRPCLayer1EtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer2EtaHits", &mu_staco_nRPCLayer2EtaHits, &b_mu_staco_nRPCLayer2EtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer3EtaHits", &mu_staco_nRPCLayer3EtaHits, &b_mu_staco_nRPCLayer3EtaHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer1PhiHits", &mu_staco_nRPCLayer1PhiHits, &b_mu_staco_nRPCLayer1PhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer2PhiHits", &mu_staco_nRPCLayer2PhiHits, &b_mu_staco_nRPCLayer2PhiHits);
   fChain->SetBranchAddress("mu_staco_nRPCLayer3PhiHits", &mu_staco_nRPCLayer3PhiHits, &b_mu_staco_nRPCLayer3PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer1EtaHits", &mu_staco_nTGCLayer1EtaHits, &b_mu_staco_nTGCLayer1EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer2EtaHits", &mu_staco_nTGCLayer2EtaHits, &b_mu_staco_nTGCLayer2EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer3EtaHits", &mu_staco_nTGCLayer3EtaHits, &b_mu_staco_nTGCLayer3EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer4EtaHits", &mu_staco_nTGCLayer4EtaHits, &b_mu_staco_nTGCLayer4EtaHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer1PhiHits", &mu_staco_nTGCLayer1PhiHits, &b_mu_staco_nTGCLayer1PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer2PhiHits", &mu_staco_nTGCLayer2PhiHits, &b_mu_staco_nTGCLayer2PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer3PhiHits", &mu_staco_nTGCLayer3PhiHits, &b_mu_staco_nTGCLayer3PhiHits);
   fChain->SetBranchAddress("mu_staco_nTGCLayer4PhiHits", &mu_staco_nTGCLayer4PhiHits, &b_mu_staco_nTGCLayer4PhiHits);
   fChain->SetBranchAddress("mu_staco_barrelSectors", &mu_staco_barrelSectors, &b_mu_staco_barrelSectors);
   fChain->SetBranchAddress("mu_staco_endcapSectors", &mu_staco_endcapSectors, &b_mu_staco_endcapSectors);
   fChain->SetBranchAddress("mu_staco_trackd0", &mu_staco_trackd0, &b_mu_staco_trackd0);
   fChain->SetBranchAddress("mu_staco_trackz0", &mu_staco_trackz0, &b_mu_staco_trackz0);
   fChain->SetBranchAddress("mu_staco_trackphi", &mu_staco_trackphi, &b_mu_staco_trackphi);
   fChain->SetBranchAddress("mu_staco_tracktheta", &mu_staco_tracktheta, &b_mu_staco_tracktheta);
   fChain->SetBranchAddress("mu_staco_trackqoverp", &mu_staco_trackqoverp, &b_mu_staco_trackqoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_d0", &mu_staco_trackcov_d0, &b_mu_staco_trackcov_d0);
   fChain->SetBranchAddress("mu_staco_trackcov_z0", &mu_staco_trackcov_z0, &b_mu_staco_trackcov_z0);
   fChain->SetBranchAddress("mu_staco_trackcov_phi", &mu_staco_trackcov_phi, &b_mu_staco_trackcov_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_theta", &mu_staco_trackcov_theta, &b_mu_staco_trackcov_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_qoverp", &mu_staco_trackcov_qoverp, &b_mu_staco_trackcov_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_z0", &mu_staco_trackcov_d0_z0, &b_mu_staco_trackcov_d0_z0);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_phi", &mu_staco_trackcov_d0_phi, &b_mu_staco_trackcov_d0_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_theta", &mu_staco_trackcov_d0_theta, &b_mu_staco_trackcov_d0_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_d0_qoverp", &mu_staco_trackcov_d0_qoverp, &b_mu_staco_trackcov_d0_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_z0_phi", &mu_staco_trackcov_z0_phi, &b_mu_staco_trackcov_z0_phi);
   fChain->SetBranchAddress("mu_staco_trackcov_z0_theta", &mu_staco_trackcov_z0_theta, &b_mu_staco_trackcov_z0_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_z0_qoverp", &mu_staco_trackcov_z0_qoverp, &b_mu_staco_trackcov_z0_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_phi_theta", &mu_staco_trackcov_phi_theta, &b_mu_staco_trackcov_phi_theta);
   fChain->SetBranchAddress("mu_staco_trackcov_phi_qoverp", &mu_staco_trackcov_phi_qoverp, &b_mu_staco_trackcov_phi_qoverp);
   fChain->SetBranchAddress("mu_staco_trackcov_theta_qoverp", &mu_staco_trackcov_theta_qoverp, &b_mu_staco_trackcov_theta_qoverp);
   fChain->SetBranchAddress("mu_staco_trackfitchi2", &mu_staco_trackfitchi2, &b_mu_staco_trackfitchi2);
   fChain->SetBranchAddress("mu_staco_trackfitndof", &mu_staco_trackfitndof, &b_mu_staco_trackfitndof);
   fChain->SetBranchAddress("mu_staco_hastrack", &mu_staco_hastrack, &b_mu_staco_hastrack);
   fChain->SetBranchAddress("mu_staco_trackd0beam", &mu_staco_trackd0beam, &b_mu_staco_trackd0beam);
   fChain->SetBranchAddress("mu_staco_trackz0beam", &mu_staco_trackz0beam, &b_mu_staco_trackz0beam);
   fChain->SetBranchAddress("mu_staco_tracksigd0beam", &mu_staco_tracksigd0beam, &b_mu_staco_tracksigd0beam);
   fChain->SetBranchAddress("mu_staco_tracksigz0beam", &mu_staco_tracksigz0beam, &b_mu_staco_tracksigz0beam);
   fChain->SetBranchAddress("mu_staco_trackd0pv", &mu_staco_trackd0pv, &b_mu_staco_trackd0pv);
   fChain->SetBranchAddress("mu_staco_trackz0pv", &mu_staco_trackz0pv, &b_mu_staco_trackz0pv);
   fChain->SetBranchAddress("mu_staco_tracksigd0pv", &mu_staco_tracksigd0pv, &b_mu_staco_tracksigd0pv);
   fChain->SetBranchAddress("mu_staco_tracksigz0pv", &mu_staco_tracksigz0pv, &b_mu_staco_tracksigz0pv);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_d0_biasedpvunbiased", &mu_staco_trackIPEstimate_d0_biasedpvunbiased, &b_mu_staco_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_z0_biasedpvunbiased", &mu_staco_trackIPEstimate_z0_biasedpvunbiased, &b_mu_staco_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_sigd0_biasedpvunbiased", &mu_staco_trackIPEstimate_sigd0_biasedpvunbiased, &b_mu_staco_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_sigz0_biasedpvunbiased", &mu_staco_trackIPEstimate_sigz0_biasedpvunbiased, &b_mu_staco_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_d0_unbiasedpvunbiased", &mu_staco_trackIPEstimate_d0_unbiasedpvunbiased, &b_mu_staco_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_z0_unbiasedpvunbiased", &mu_staco_trackIPEstimate_z0_unbiasedpvunbiased, &b_mu_staco_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased", &mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased", &mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_staco_trackd0pvunbiased", &mu_staco_trackd0pvunbiased, &b_mu_staco_trackd0pvunbiased);
   fChain->SetBranchAddress("mu_staco_trackz0pvunbiased", &mu_staco_trackz0pvunbiased, &b_mu_staco_trackz0pvunbiased);
   fChain->SetBranchAddress("mu_staco_tracksigd0pvunbiased", &mu_staco_tracksigd0pvunbiased, &b_mu_staco_tracksigd0pvunbiased);
   fChain->SetBranchAddress("mu_staco_tracksigz0pvunbiased", &mu_staco_tracksigz0pvunbiased, &b_mu_staco_tracksigz0pvunbiased);
   fChain->SetBranchAddress("mu_staco_EFCB_index", &mu_staco_EFCB_index, &b_mu_staco_EFCB_index);
   fChain->SetBranchAddress("mu_staco_EFMG_index", &mu_staco_EFMG_index, &b_mu_staco_EFMG_index);
   fChain->SetBranchAddress("mu_staco_EFME_index", &mu_staco_EFME_index, &b_mu_staco_EFME_index);
   fChain->SetBranchAddress("mu_calo_n", &mu_calo_n, &b_mu_calo_n);
   fChain->SetBranchAddress("mu_calo_E", &mu_calo_E, &b_mu_calo_E);
   fChain->SetBranchAddress("mu_calo_pt", &mu_calo_pt, &b_mu_calo_pt);
   fChain->SetBranchAddress("mu_calo_m", &mu_calo_m, &b_mu_calo_m);
   fChain->SetBranchAddress("mu_calo_eta", &mu_calo_eta, &b_mu_calo_eta);
   fChain->SetBranchAddress("mu_calo_phi", &mu_calo_phi, &b_mu_calo_phi);
   fChain->SetBranchAddress("mu_calo_px", &mu_calo_px, &b_mu_calo_px);
   fChain->SetBranchAddress("mu_calo_py", &mu_calo_py, &b_mu_calo_py);
   fChain->SetBranchAddress("mu_calo_pz", &mu_calo_pz, &b_mu_calo_pz);
   fChain->SetBranchAddress("mu_calo_charge", &mu_calo_charge, &b_mu_calo_charge);
   fChain->SetBranchAddress("mu_calo_allauthor", &mu_calo_allauthor, &b_mu_calo_allauthor);
   fChain->SetBranchAddress("mu_calo_author", &mu_calo_author, &b_mu_calo_author);
   fChain->SetBranchAddress("mu_calo_beta", &mu_calo_beta, &b_mu_calo_beta);
   fChain->SetBranchAddress("mu_calo_isMuonLikelihood", &mu_calo_isMuonLikelihood, &b_mu_calo_isMuonLikelihood);
   fChain->SetBranchAddress("mu_calo_matchchi2", &mu_calo_matchchi2, &b_mu_calo_matchchi2);
   fChain->SetBranchAddress("mu_calo_matchndof", &mu_calo_matchndof, &b_mu_calo_matchndof);
   fChain->SetBranchAddress("mu_calo_etcone20", &mu_calo_etcone20, &b_mu_calo_etcone20);
   fChain->SetBranchAddress("mu_calo_etcone30", &mu_calo_etcone30, &b_mu_calo_etcone30);
   fChain->SetBranchAddress("mu_calo_etcone40", &mu_calo_etcone40, &b_mu_calo_etcone40);
   fChain->SetBranchAddress("mu_calo_nucone20", &mu_calo_nucone20, &b_mu_calo_nucone20);
   fChain->SetBranchAddress("mu_calo_nucone30", &mu_calo_nucone30, &b_mu_calo_nucone30);
   fChain->SetBranchAddress("mu_calo_nucone40", &mu_calo_nucone40, &b_mu_calo_nucone40);
   fChain->SetBranchAddress("mu_calo_ptcone20", &mu_calo_ptcone20, &b_mu_calo_ptcone20);
   fChain->SetBranchAddress("mu_calo_ptcone30", &mu_calo_ptcone30, &b_mu_calo_ptcone30);
   fChain->SetBranchAddress("mu_calo_ptcone40", &mu_calo_ptcone40, &b_mu_calo_ptcone40);
   fChain->SetBranchAddress("mu_calo_scatteringCurvatureSignificance", &mu_calo_scatteringCurvatureSignificance, &b_mu_calo_scatteringCurvatureSignificance);
   fChain->SetBranchAddress("mu_calo_scatteringNeighbourSignificance", &mu_calo_scatteringNeighbourSignificance, &b_mu_calo_scatteringNeighbourSignificance);
   fChain->SetBranchAddress("mu_calo_momentumBalanceSignificance", &mu_calo_momentumBalanceSignificance, &b_mu_calo_momentumBalanceSignificance);
   fChain->SetBranchAddress("mu_calo_energyLossPar", &mu_calo_energyLossPar, &b_mu_calo_energyLossPar);
   fChain->SetBranchAddress("mu_calo_energyLossErr", &mu_calo_energyLossErr, &b_mu_calo_energyLossErr);
   fChain->SetBranchAddress("mu_calo_etCore", &mu_calo_etCore, &b_mu_calo_etCore);
   fChain->SetBranchAddress("mu_calo_energyLossType", &mu_calo_energyLossType, &b_mu_calo_energyLossType);
   fChain->SetBranchAddress("mu_calo_caloMuonIdTag", &mu_calo_caloMuonIdTag, &b_mu_calo_caloMuonIdTag);
   fChain->SetBranchAddress("mu_calo_caloLRLikelihood", &mu_calo_caloLRLikelihood, &b_mu_calo_caloLRLikelihood);
   fChain->SetBranchAddress("mu_calo_bestMatch", &mu_calo_bestMatch, &b_mu_calo_bestMatch);
   fChain->SetBranchAddress("mu_calo_isStandAloneMuon", &mu_calo_isStandAloneMuon, &b_mu_calo_isStandAloneMuon);
   fChain->SetBranchAddress("mu_calo_isCombinedMuon", &mu_calo_isCombinedMuon, &b_mu_calo_isCombinedMuon);
   fChain->SetBranchAddress("mu_calo_isLowPtReconstructedMuon", &mu_calo_isLowPtReconstructedMuon, &b_mu_calo_isLowPtReconstructedMuon);
   fChain->SetBranchAddress("mu_calo_isSegmentTaggedMuon", &mu_calo_isSegmentTaggedMuon, &b_mu_calo_isSegmentTaggedMuon);
   fChain->SetBranchAddress("mu_calo_isCaloMuonId", &mu_calo_isCaloMuonId, &b_mu_calo_isCaloMuonId);
   fChain->SetBranchAddress("mu_calo_alsoFoundByLowPt", &mu_calo_alsoFoundByLowPt, &b_mu_calo_alsoFoundByLowPt);
   fChain->SetBranchAddress("mu_calo_alsoFoundByCaloMuonId", &mu_calo_alsoFoundByCaloMuonId, &b_mu_calo_alsoFoundByCaloMuonId);
   fChain->SetBranchAddress("mu_calo_isSiliconAssociatedForwardMuon", &mu_calo_isSiliconAssociatedForwardMuon, &b_mu_calo_isSiliconAssociatedForwardMuon);
   fChain->SetBranchAddress("mu_calo_loose", &mu_calo_loose, &b_mu_calo_loose);
   fChain->SetBranchAddress("mu_calo_medium", &mu_calo_medium, &b_mu_calo_medium);
   fChain->SetBranchAddress("mu_calo_tight", &mu_calo_tight, &b_mu_calo_tight);
   fChain->SetBranchAddress("mu_calo_d0_exPV", &mu_calo_d0_exPV, &b_mu_calo_d0_exPV);
   fChain->SetBranchAddress("mu_calo_z0_exPV", &mu_calo_z0_exPV, &b_mu_calo_z0_exPV);
   fChain->SetBranchAddress("mu_calo_phi_exPV", &mu_calo_phi_exPV, &b_mu_calo_phi_exPV);
   fChain->SetBranchAddress("mu_calo_theta_exPV", &mu_calo_theta_exPV, &b_mu_calo_theta_exPV);
   fChain->SetBranchAddress("mu_calo_qoverp_exPV", &mu_calo_qoverp_exPV, &b_mu_calo_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cb_d0_exPV", &mu_calo_cb_d0_exPV, &b_mu_calo_cb_d0_exPV);
   fChain->SetBranchAddress("mu_calo_cb_z0_exPV", &mu_calo_cb_z0_exPV, &b_mu_calo_cb_z0_exPV);
   fChain->SetBranchAddress("mu_calo_cb_phi_exPV", &mu_calo_cb_phi_exPV, &b_mu_calo_cb_phi_exPV);
   fChain->SetBranchAddress("mu_calo_cb_theta_exPV", &mu_calo_cb_theta_exPV, &b_mu_calo_cb_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cb_qoverp_exPV", &mu_calo_cb_qoverp_exPV, &b_mu_calo_cb_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_d0_exPV", &mu_calo_id_d0_exPV, &b_mu_calo_id_d0_exPV);
   fChain->SetBranchAddress("mu_calo_id_z0_exPV", &mu_calo_id_z0_exPV, &b_mu_calo_id_z0_exPV);
   fChain->SetBranchAddress("mu_calo_id_phi_exPV", &mu_calo_id_phi_exPV, &b_mu_calo_id_phi_exPV);
   fChain->SetBranchAddress("mu_calo_id_theta_exPV", &mu_calo_id_theta_exPV, &b_mu_calo_id_theta_exPV);
   fChain->SetBranchAddress("mu_calo_id_qoverp_exPV", &mu_calo_id_qoverp_exPV, &b_mu_calo_id_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_d0_exPV", &mu_calo_me_d0_exPV, &b_mu_calo_me_d0_exPV);
   fChain->SetBranchAddress("mu_calo_me_z0_exPV", &mu_calo_me_z0_exPV, &b_mu_calo_me_z0_exPV);
   fChain->SetBranchAddress("mu_calo_me_phi_exPV", &mu_calo_me_phi_exPV, &b_mu_calo_me_phi_exPV);
   fChain->SetBranchAddress("mu_calo_me_theta_exPV", &mu_calo_me_theta_exPV, &b_mu_calo_me_theta_exPV);
   fChain->SetBranchAddress("mu_calo_me_qoverp_exPV", &mu_calo_me_qoverp_exPV, &b_mu_calo_me_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_ie_d0_exPV", &mu_calo_ie_d0_exPV, &b_mu_calo_ie_d0_exPV);
   fChain->SetBranchAddress("mu_calo_ie_z0_exPV", &mu_calo_ie_z0_exPV, &b_mu_calo_ie_z0_exPV);
   fChain->SetBranchAddress("mu_calo_ie_phi_exPV", &mu_calo_ie_phi_exPV, &b_mu_calo_ie_phi_exPV);
   fChain->SetBranchAddress("mu_calo_ie_theta_exPV", &mu_calo_ie_theta_exPV, &b_mu_calo_ie_theta_exPV);
   fChain->SetBranchAddress("mu_calo_ie_qoverp_exPV", &mu_calo_ie_qoverp_exPV, &b_mu_calo_ie_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_SpaceTime_detID", &mu_calo_SpaceTime_detID, &b_mu_calo_SpaceTime_detID);
   fChain->SetBranchAddress("mu_calo_SpaceTime_t", &mu_calo_SpaceTime_t, &b_mu_calo_SpaceTime_t);
   fChain->SetBranchAddress("mu_calo_SpaceTime_tError", &mu_calo_SpaceTime_tError, &b_mu_calo_SpaceTime_tError);
   fChain->SetBranchAddress("mu_calo_SpaceTime_weight", &mu_calo_SpaceTime_weight, &b_mu_calo_SpaceTime_weight);
   fChain->SetBranchAddress("mu_calo_SpaceTime_x", &mu_calo_SpaceTime_x, &b_mu_calo_SpaceTime_x);
   fChain->SetBranchAddress("mu_calo_SpaceTime_y", &mu_calo_SpaceTime_y, &b_mu_calo_SpaceTime_y);
   fChain->SetBranchAddress("mu_calo_SpaceTime_z", &mu_calo_SpaceTime_z, &b_mu_calo_SpaceTime_z);
   fChain->SetBranchAddress("mu_calo_cov_d0_exPV", &mu_calo_cov_d0_exPV, &b_mu_calo_cov_d0_exPV);
   fChain->SetBranchAddress("mu_calo_cov_z0_exPV", &mu_calo_cov_z0_exPV, &b_mu_calo_cov_z0_exPV);
   fChain->SetBranchAddress("mu_calo_cov_phi_exPV", &mu_calo_cov_phi_exPV, &b_mu_calo_cov_phi_exPV);
   fChain->SetBranchAddress("mu_calo_cov_theta_exPV", &mu_calo_cov_theta_exPV, &b_mu_calo_cov_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cov_qoverp_exPV", &mu_calo_cov_qoverp_exPV, &b_mu_calo_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_z0_exPV", &mu_calo_cov_d0_z0_exPV, &b_mu_calo_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_phi_exPV", &mu_calo_cov_d0_phi_exPV, &b_mu_calo_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_theta_exPV", &mu_calo_cov_d0_theta_exPV, &b_mu_calo_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cov_d0_qoverp_exPV", &mu_calo_cov_d0_qoverp_exPV, &b_mu_calo_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_z0_phi_exPV", &mu_calo_cov_z0_phi_exPV, &b_mu_calo_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_cov_z0_theta_exPV", &mu_calo_cov_z0_theta_exPV, &b_mu_calo_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cov_z0_qoverp_exPV", &mu_calo_cov_z0_qoverp_exPV, &b_mu_calo_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_phi_theta_exPV", &mu_calo_cov_phi_theta_exPV, &b_mu_calo_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_calo_cov_phi_qoverp_exPV", &mu_calo_cov_phi_qoverp_exPV, &b_mu_calo_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_cov_theta_qoverp_exPV", &mu_calo_cov_theta_qoverp_exPV, &b_mu_calo_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_d0_exPV", &mu_calo_id_cov_d0_exPV, &b_mu_calo_id_cov_d0_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_z0_exPV", &mu_calo_id_cov_z0_exPV, &b_mu_calo_id_cov_z0_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_phi_exPV", &mu_calo_id_cov_phi_exPV, &b_mu_calo_id_cov_phi_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_theta_exPV", &mu_calo_id_cov_theta_exPV, &b_mu_calo_id_cov_theta_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_qoverp_exPV", &mu_calo_id_cov_qoverp_exPV, &b_mu_calo_id_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_d0_z0_exPV", &mu_calo_id_cov_d0_z0_exPV, &b_mu_calo_id_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_d0_phi_exPV", &mu_calo_id_cov_d0_phi_exPV, &b_mu_calo_id_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_d0_theta_exPV", &mu_calo_id_cov_d0_theta_exPV, &b_mu_calo_id_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_d0_qoverp_exPV", &mu_calo_id_cov_d0_qoverp_exPV, &b_mu_calo_id_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_z0_phi_exPV", &mu_calo_id_cov_z0_phi_exPV, &b_mu_calo_id_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_z0_theta_exPV", &mu_calo_id_cov_z0_theta_exPV, &b_mu_calo_id_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_z0_qoverp_exPV", &mu_calo_id_cov_z0_qoverp_exPV, &b_mu_calo_id_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_phi_theta_exPV", &mu_calo_id_cov_phi_theta_exPV, &b_mu_calo_id_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_phi_qoverp_exPV", &mu_calo_id_cov_phi_qoverp_exPV, &b_mu_calo_id_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_id_cov_theta_qoverp_exPV", &mu_calo_id_cov_theta_qoverp_exPV, &b_mu_calo_id_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_d0_exPV", &mu_calo_me_cov_d0_exPV, &b_mu_calo_me_cov_d0_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_z0_exPV", &mu_calo_me_cov_z0_exPV, &b_mu_calo_me_cov_z0_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_phi_exPV", &mu_calo_me_cov_phi_exPV, &b_mu_calo_me_cov_phi_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_theta_exPV", &mu_calo_me_cov_theta_exPV, &b_mu_calo_me_cov_theta_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_qoverp_exPV", &mu_calo_me_cov_qoverp_exPV, &b_mu_calo_me_cov_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_d0_z0_exPV", &mu_calo_me_cov_d0_z0_exPV, &b_mu_calo_me_cov_d0_z0_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_d0_phi_exPV", &mu_calo_me_cov_d0_phi_exPV, &b_mu_calo_me_cov_d0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_d0_theta_exPV", &mu_calo_me_cov_d0_theta_exPV, &b_mu_calo_me_cov_d0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_d0_qoverp_exPV", &mu_calo_me_cov_d0_qoverp_exPV, &b_mu_calo_me_cov_d0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_z0_phi_exPV", &mu_calo_me_cov_z0_phi_exPV, &b_mu_calo_me_cov_z0_phi_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_z0_theta_exPV", &mu_calo_me_cov_z0_theta_exPV, &b_mu_calo_me_cov_z0_theta_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_z0_qoverp_exPV", &mu_calo_me_cov_z0_qoverp_exPV, &b_mu_calo_me_cov_z0_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_phi_theta_exPV", &mu_calo_me_cov_phi_theta_exPV, &b_mu_calo_me_cov_phi_theta_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_phi_qoverp_exPV", &mu_calo_me_cov_phi_qoverp_exPV, &b_mu_calo_me_cov_phi_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_me_cov_theta_qoverp_exPV", &mu_calo_me_cov_theta_qoverp_exPV, &b_mu_calo_me_cov_theta_qoverp_exPV);
   fChain->SetBranchAddress("mu_calo_ms_d0", &mu_calo_ms_d0, &b_mu_calo_ms_d0);
   fChain->SetBranchAddress("mu_calo_ms_z0", &mu_calo_ms_z0, &b_mu_calo_ms_z0);
   fChain->SetBranchAddress("mu_calo_ms_phi", &mu_calo_ms_phi, &b_mu_calo_ms_phi);
   fChain->SetBranchAddress("mu_calo_ms_theta", &mu_calo_ms_theta, &b_mu_calo_ms_theta);
   fChain->SetBranchAddress("mu_calo_ms_qoverp", &mu_calo_ms_qoverp, &b_mu_calo_ms_qoverp);
   fChain->SetBranchAddress("mu_calo_id_d0", &mu_calo_id_d0, &b_mu_calo_id_d0);
   fChain->SetBranchAddress("mu_calo_id_z0", &mu_calo_id_z0, &b_mu_calo_id_z0);
   fChain->SetBranchAddress("mu_calo_id_phi", &mu_calo_id_phi, &b_mu_calo_id_phi);
   fChain->SetBranchAddress("mu_calo_id_theta", &mu_calo_id_theta, &b_mu_calo_id_theta);
   fChain->SetBranchAddress("mu_calo_id_qoverp", &mu_calo_id_qoverp, &b_mu_calo_id_qoverp);
   fChain->SetBranchAddress("mu_calo_me_d0", &mu_calo_me_d0, &b_mu_calo_me_d0);
   fChain->SetBranchAddress("mu_calo_me_z0", &mu_calo_me_z0, &b_mu_calo_me_z0);
   fChain->SetBranchAddress("mu_calo_me_phi", &mu_calo_me_phi, &b_mu_calo_me_phi);
   fChain->SetBranchAddress("mu_calo_me_theta", &mu_calo_me_theta, &b_mu_calo_me_theta);
   fChain->SetBranchAddress("mu_calo_me_qoverp", &mu_calo_me_qoverp, &b_mu_calo_me_qoverp);
   fChain->SetBranchAddress("mu_calo_ie_d0", &mu_calo_ie_d0, &b_mu_calo_ie_d0);
   fChain->SetBranchAddress("mu_calo_ie_z0", &mu_calo_ie_z0, &b_mu_calo_ie_z0);
   fChain->SetBranchAddress("mu_calo_ie_phi", &mu_calo_ie_phi, &b_mu_calo_ie_phi);
   fChain->SetBranchAddress("mu_calo_ie_theta", &mu_calo_ie_theta, &b_mu_calo_ie_theta);
   fChain->SetBranchAddress("mu_calo_ie_qoverp", &mu_calo_ie_qoverp, &b_mu_calo_ie_qoverp);
   fChain->SetBranchAddress("mu_calo_nOutliersOnTrack", &mu_calo_nOutliersOnTrack, &b_mu_calo_nOutliersOnTrack);
   fChain->SetBranchAddress("mu_calo_nBLHits", &mu_calo_nBLHits, &b_mu_calo_nBLHits);
   fChain->SetBranchAddress("mu_calo_nPixHits", &mu_calo_nPixHits, &b_mu_calo_nPixHits);
   fChain->SetBranchAddress("mu_calo_nSCTHits", &mu_calo_nSCTHits, &b_mu_calo_nSCTHits);
   fChain->SetBranchAddress("mu_calo_nTRTHits", &mu_calo_nTRTHits, &b_mu_calo_nTRTHits);
   fChain->SetBranchAddress("mu_calo_nTRTHighTHits", &mu_calo_nTRTHighTHits, &b_mu_calo_nTRTHighTHits);
   fChain->SetBranchAddress("mu_calo_nBLSharedHits", &mu_calo_nBLSharedHits, &b_mu_calo_nBLSharedHits);
   fChain->SetBranchAddress("mu_calo_nPixSharedHits", &mu_calo_nPixSharedHits, &b_mu_calo_nPixSharedHits);
   fChain->SetBranchAddress("mu_calo_nPixHoles", &mu_calo_nPixHoles, &b_mu_calo_nPixHoles);
   fChain->SetBranchAddress("mu_calo_nSCTSharedHits", &mu_calo_nSCTSharedHits, &b_mu_calo_nSCTSharedHits);
   fChain->SetBranchAddress("mu_calo_nSCTHoles", &mu_calo_nSCTHoles, &b_mu_calo_nSCTHoles);
   fChain->SetBranchAddress("mu_calo_nTRTOutliers", &mu_calo_nTRTOutliers, &b_mu_calo_nTRTOutliers);
   fChain->SetBranchAddress("mu_calo_nTRTHighTOutliers", &mu_calo_nTRTHighTOutliers, &b_mu_calo_nTRTHighTOutliers);
   fChain->SetBranchAddress("mu_calo_nGangedPixels", &mu_calo_nGangedPixels, &b_mu_calo_nGangedPixels);
   fChain->SetBranchAddress("mu_calo_nPixelDeadSensors", &mu_calo_nPixelDeadSensors, &b_mu_calo_nPixelDeadSensors);
   fChain->SetBranchAddress("mu_calo_nSCTDeadSensors", &mu_calo_nSCTDeadSensors, &b_mu_calo_nSCTDeadSensors);
   fChain->SetBranchAddress("mu_calo_nTRTDeadStraws", &mu_calo_nTRTDeadStraws, &b_mu_calo_nTRTDeadStraws);
   fChain->SetBranchAddress("mu_calo_expectBLayerHit", &mu_calo_expectBLayerHit, &b_mu_calo_expectBLayerHit);
   fChain->SetBranchAddress("mu_calo_nMDTHits", &mu_calo_nMDTHits, &b_mu_calo_nMDTHits);
   fChain->SetBranchAddress("mu_calo_nMDTHoles", &mu_calo_nMDTHoles, &b_mu_calo_nMDTHoles);
   fChain->SetBranchAddress("mu_calo_nCSCEtaHits", &mu_calo_nCSCEtaHits, &b_mu_calo_nCSCEtaHits);
   fChain->SetBranchAddress("mu_calo_nCSCEtaHoles", &mu_calo_nCSCEtaHoles, &b_mu_calo_nCSCEtaHoles);
   fChain->SetBranchAddress("mu_calo_nCSCUnspoiledEtaHits", &mu_calo_nCSCUnspoiledEtaHits, &b_mu_calo_nCSCUnspoiledEtaHits);
   fChain->SetBranchAddress("mu_calo_nCSCPhiHits", &mu_calo_nCSCPhiHits, &b_mu_calo_nCSCPhiHits);
   fChain->SetBranchAddress("mu_calo_nCSCPhiHoles", &mu_calo_nCSCPhiHoles, &b_mu_calo_nCSCPhiHoles);
   fChain->SetBranchAddress("mu_calo_nRPCEtaHits", &mu_calo_nRPCEtaHits, &b_mu_calo_nRPCEtaHits);
   fChain->SetBranchAddress("mu_calo_nRPCEtaHoles", &mu_calo_nRPCEtaHoles, &b_mu_calo_nRPCEtaHoles);
   fChain->SetBranchAddress("mu_calo_nRPCPhiHits", &mu_calo_nRPCPhiHits, &b_mu_calo_nRPCPhiHits);
   fChain->SetBranchAddress("mu_calo_nRPCPhiHoles", &mu_calo_nRPCPhiHoles, &b_mu_calo_nRPCPhiHoles);
   fChain->SetBranchAddress("mu_calo_nTGCEtaHits", &mu_calo_nTGCEtaHits, &b_mu_calo_nTGCEtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCEtaHoles", &mu_calo_nTGCEtaHoles, &b_mu_calo_nTGCEtaHoles);
   fChain->SetBranchAddress("mu_calo_nTGCPhiHits", &mu_calo_nTGCPhiHits, &b_mu_calo_nTGCPhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCPhiHoles", &mu_calo_nTGCPhiHoles, &b_mu_calo_nTGCPhiHoles);
   fChain->SetBranchAddress("mu_calo_nprecisionLayers", &mu_calo_nprecisionLayers, &b_mu_calo_nprecisionLayers);
   fChain->SetBranchAddress("mu_calo_nprecisionHoleLayers", &mu_calo_nprecisionHoleLayers, &b_mu_calo_nprecisionHoleLayers);
   fChain->SetBranchAddress("mu_calo_nphiLayers", &mu_calo_nphiLayers, &b_mu_calo_nphiLayers);
   fChain->SetBranchAddress("mu_calo_ntrigEtaLayers", &mu_calo_ntrigEtaLayers, &b_mu_calo_ntrigEtaLayers);
   fChain->SetBranchAddress("mu_calo_nphiHoleLayers", &mu_calo_nphiHoleLayers, &b_mu_calo_nphiHoleLayers);
   fChain->SetBranchAddress("mu_calo_ntrigEtaHoleLayers", &mu_calo_ntrigEtaHoleLayers, &b_mu_calo_ntrigEtaHoleLayers);
   fChain->SetBranchAddress("mu_calo_nMDTBIHits", &mu_calo_nMDTBIHits, &b_mu_calo_nMDTBIHits);
   fChain->SetBranchAddress("mu_calo_nMDTBMHits", &mu_calo_nMDTBMHits, &b_mu_calo_nMDTBMHits);
   fChain->SetBranchAddress("mu_calo_nMDTBOHits", &mu_calo_nMDTBOHits, &b_mu_calo_nMDTBOHits);
   fChain->SetBranchAddress("mu_calo_nMDTBEEHits", &mu_calo_nMDTBEEHits, &b_mu_calo_nMDTBEEHits);
   fChain->SetBranchAddress("mu_calo_nMDTBIS78Hits", &mu_calo_nMDTBIS78Hits, &b_mu_calo_nMDTBIS78Hits);
   fChain->SetBranchAddress("mu_calo_nMDTEIHits", &mu_calo_nMDTEIHits, &b_mu_calo_nMDTEIHits);
   fChain->SetBranchAddress("mu_calo_nMDTEMHits", &mu_calo_nMDTEMHits, &b_mu_calo_nMDTEMHits);
   fChain->SetBranchAddress("mu_calo_nMDTEOHits", &mu_calo_nMDTEOHits, &b_mu_calo_nMDTEOHits);
   fChain->SetBranchAddress("mu_calo_nMDTEEHits", &mu_calo_nMDTEEHits, &b_mu_calo_nMDTEEHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer1EtaHits", &mu_calo_nRPCLayer1EtaHits, &b_mu_calo_nRPCLayer1EtaHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer2EtaHits", &mu_calo_nRPCLayer2EtaHits, &b_mu_calo_nRPCLayer2EtaHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer3EtaHits", &mu_calo_nRPCLayer3EtaHits, &b_mu_calo_nRPCLayer3EtaHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer1PhiHits", &mu_calo_nRPCLayer1PhiHits, &b_mu_calo_nRPCLayer1PhiHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer2PhiHits", &mu_calo_nRPCLayer2PhiHits, &b_mu_calo_nRPCLayer2PhiHits);
   fChain->SetBranchAddress("mu_calo_nRPCLayer3PhiHits", &mu_calo_nRPCLayer3PhiHits, &b_mu_calo_nRPCLayer3PhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer1EtaHits", &mu_calo_nTGCLayer1EtaHits, &b_mu_calo_nTGCLayer1EtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer2EtaHits", &mu_calo_nTGCLayer2EtaHits, &b_mu_calo_nTGCLayer2EtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer3EtaHits", &mu_calo_nTGCLayer3EtaHits, &b_mu_calo_nTGCLayer3EtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer4EtaHits", &mu_calo_nTGCLayer4EtaHits, &b_mu_calo_nTGCLayer4EtaHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer1PhiHits", &mu_calo_nTGCLayer1PhiHits, &b_mu_calo_nTGCLayer1PhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer2PhiHits", &mu_calo_nTGCLayer2PhiHits, &b_mu_calo_nTGCLayer2PhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer3PhiHits", &mu_calo_nTGCLayer3PhiHits, &b_mu_calo_nTGCLayer3PhiHits);
   fChain->SetBranchAddress("mu_calo_nTGCLayer4PhiHits", &mu_calo_nTGCLayer4PhiHits, &b_mu_calo_nTGCLayer4PhiHits);
   fChain->SetBranchAddress("mu_calo_barrelSectors", &mu_calo_barrelSectors, &b_mu_calo_barrelSectors);
   fChain->SetBranchAddress("mu_calo_endcapSectors", &mu_calo_endcapSectors, &b_mu_calo_endcapSectors);
   fChain->SetBranchAddress("mu_calo_trackd0", &mu_calo_trackd0, &b_mu_calo_trackd0);
   fChain->SetBranchAddress("mu_calo_trackz0", &mu_calo_trackz0, &b_mu_calo_trackz0);
   fChain->SetBranchAddress("mu_calo_trackphi", &mu_calo_trackphi, &b_mu_calo_trackphi);
   fChain->SetBranchAddress("mu_calo_tracktheta", &mu_calo_tracktheta, &b_mu_calo_tracktheta);
   fChain->SetBranchAddress("mu_calo_trackqoverp", &mu_calo_trackqoverp, &b_mu_calo_trackqoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_d0", &mu_calo_trackcov_d0, &b_mu_calo_trackcov_d0);
   fChain->SetBranchAddress("mu_calo_trackcov_z0", &mu_calo_trackcov_z0, &b_mu_calo_trackcov_z0);
   fChain->SetBranchAddress("mu_calo_trackcov_phi", &mu_calo_trackcov_phi, &b_mu_calo_trackcov_phi);
   fChain->SetBranchAddress("mu_calo_trackcov_theta", &mu_calo_trackcov_theta, &b_mu_calo_trackcov_theta);
   fChain->SetBranchAddress("mu_calo_trackcov_qoverp", &mu_calo_trackcov_qoverp, &b_mu_calo_trackcov_qoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_d0_z0", &mu_calo_trackcov_d0_z0, &b_mu_calo_trackcov_d0_z0);
   fChain->SetBranchAddress("mu_calo_trackcov_d0_phi", &mu_calo_trackcov_d0_phi, &b_mu_calo_trackcov_d0_phi);
   fChain->SetBranchAddress("mu_calo_trackcov_d0_theta", &mu_calo_trackcov_d0_theta, &b_mu_calo_trackcov_d0_theta);
   fChain->SetBranchAddress("mu_calo_trackcov_d0_qoverp", &mu_calo_trackcov_d0_qoverp, &b_mu_calo_trackcov_d0_qoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_z0_phi", &mu_calo_trackcov_z0_phi, &b_mu_calo_trackcov_z0_phi);
   fChain->SetBranchAddress("mu_calo_trackcov_z0_theta", &mu_calo_trackcov_z0_theta, &b_mu_calo_trackcov_z0_theta);
   fChain->SetBranchAddress("mu_calo_trackcov_z0_qoverp", &mu_calo_trackcov_z0_qoverp, &b_mu_calo_trackcov_z0_qoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_phi_theta", &mu_calo_trackcov_phi_theta, &b_mu_calo_trackcov_phi_theta);
   fChain->SetBranchAddress("mu_calo_trackcov_phi_qoverp", &mu_calo_trackcov_phi_qoverp, &b_mu_calo_trackcov_phi_qoverp);
   fChain->SetBranchAddress("mu_calo_trackcov_theta_qoverp", &mu_calo_trackcov_theta_qoverp, &b_mu_calo_trackcov_theta_qoverp);
   fChain->SetBranchAddress("mu_calo_trackfitchi2", &mu_calo_trackfitchi2, &b_mu_calo_trackfitchi2);
   fChain->SetBranchAddress("mu_calo_trackfitndof", &mu_calo_trackfitndof, &b_mu_calo_trackfitndof);
   fChain->SetBranchAddress("mu_calo_hastrack", &mu_calo_hastrack, &b_mu_calo_hastrack);
   fChain->SetBranchAddress("mu_calo_trackd0beam", &mu_calo_trackd0beam, &b_mu_calo_trackd0beam);
   fChain->SetBranchAddress("mu_calo_trackz0beam", &mu_calo_trackz0beam, &b_mu_calo_trackz0beam);
   fChain->SetBranchAddress("mu_calo_tracksigd0beam", &mu_calo_tracksigd0beam, &b_mu_calo_tracksigd0beam);
   fChain->SetBranchAddress("mu_calo_tracksigz0beam", &mu_calo_tracksigz0beam, &b_mu_calo_tracksigz0beam);
   fChain->SetBranchAddress("mu_calo_trackd0pv", &mu_calo_trackd0pv, &b_mu_calo_trackd0pv);
   fChain->SetBranchAddress("mu_calo_trackz0pv", &mu_calo_trackz0pv, &b_mu_calo_trackz0pv);
   fChain->SetBranchAddress("mu_calo_tracksigd0pv", &mu_calo_tracksigd0pv, &b_mu_calo_tracksigd0pv);
   fChain->SetBranchAddress("mu_calo_tracksigz0pv", &mu_calo_tracksigz0pv, &b_mu_calo_tracksigz0pv);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_d0_biasedpvunbiased", &mu_calo_trackIPEstimate_d0_biasedpvunbiased, &b_mu_calo_trackIPEstimate_d0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_z0_biasedpvunbiased", &mu_calo_trackIPEstimate_z0_biasedpvunbiased, &b_mu_calo_trackIPEstimate_z0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_sigd0_biasedpvunbiased", &mu_calo_trackIPEstimate_sigd0_biasedpvunbiased, &b_mu_calo_trackIPEstimate_sigd0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_sigz0_biasedpvunbiased", &mu_calo_trackIPEstimate_sigz0_biasedpvunbiased, &b_mu_calo_trackIPEstimate_sigz0_biasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_d0_unbiasedpvunbiased", &mu_calo_trackIPEstimate_d0_unbiasedpvunbiased, &b_mu_calo_trackIPEstimate_d0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_z0_unbiasedpvunbiased", &mu_calo_trackIPEstimate_z0_unbiasedpvunbiased, &b_mu_calo_trackIPEstimate_z0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased", &mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased, &b_mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased", &mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased, &b_mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased);
   fChain->SetBranchAddress("mu_calo_trackd0pvunbiased", &mu_calo_trackd0pvunbiased, &b_mu_calo_trackd0pvunbiased);
   fChain->SetBranchAddress("mu_calo_trackz0pvunbiased", &mu_calo_trackz0pvunbiased, &b_mu_calo_trackz0pvunbiased);
   fChain->SetBranchAddress("mu_calo_tracksigd0pvunbiased", &mu_calo_tracksigd0pvunbiased, &b_mu_calo_tracksigd0pvunbiased);
   fChain->SetBranchAddress("mu_calo_tracksigz0pvunbiased", &mu_calo_tracksigz0pvunbiased, &b_mu_calo_tracksigz0pvunbiased);
   fChain->SetBranchAddress("mu_calo_EFCB_index", &mu_calo_EFCB_index, &b_mu_calo_EFCB_index);
   fChain->SetBranchAddress("mu_calo_EFMG_index", &mu_calo_EFMG_index, &b_mu_calo_EFMG_index);
   fChain->SetBranchAddress("mu_calo_EFME_index", &mu_calo_EFME_index, &b_mu_calo_EFME_index);
   fChain->SetBranchAddress("MET_RefFinal_phi", &MET_RefFinal_phi, &b_MET_RefFinal_phi);
   fChain->SetBranchAddress("MET_RefFinal_et", &MET_RefFinal_et, &b_MET_RefFinal_et);
   fChain->SetBranchAddress("MET_RefFinal_sumet", &MET_RefFinal_sumet, &b_MET_RefFinal_sumet);
   fChain->SetBranchAddress("MET_RefFinal_etx_CentralReg", &MET_RefFinal_etx_CentralReg, &b_MET_RefFinal_etx_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_ety_CentralReg", &MET_RefFinal_ety_CentralReg, &b_MET_RefFinal_ety_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_sumet_CentralReg", &MET_RefFinal_sumet_CentralReg, &b_MET_RefFinal_sumet_CentralReg);
   fChain->SetBranchAddress("MET_RefFinal_etx_EndcapRegion", &MET_RefFinal_etx_EndcapRegion, &b_MET_RefFinal_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_ety_EndcapRegion", &MET_RefFinal_ety_EndcapRegion, &b_MET_RefFinal_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_sumet_EndcapRegion", &MET_RefFinal_sumet_EndcapRegion, &b_MET_RefFinal_sumet_EndcapRegion);
   fChain->SetBranchAddress("MET_RefFinal_etx_ForwardReg", &MET_RefFinal_etx_ForwardReg, &b_MET_RefFinal_etx_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_ety_ForwardReg", &MET_RefFinal_ety_ForwardReg, &b_MET_RefFinal_ety_ForwardReg);
   fChain->SetBranchAddress("MET_RefFinal_sumet_ForwardReg", &MET_RefFinal_sumet_ForwardReg, &b_MET_RefFinal_sumet_ForwardReg);
   fChain->SetBranchAddress("MET_MuonBoy_phi", &MET_MuonBoy_phi, &b_MET_MuonBoy_phi);
   fChain->SetBranchAddress("MET_MuonBoy_et", &MET_MuonBoy_et, &b_MET_MuonBoy_et);
   fChain->SetBranchAddress("MET_RefMuon_Track_phi", &MET_RefMuon_Track_phi, &b_MET_RefMuon_Track_phi);
   fChain->SetBranchAddress("MET_RefMuon_Track_et", &MET_RefMuon_Track_et, &b_MET_RefMuon_Track_et);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_CentralReg", &MET_LocHadTopo_etx_CentralReg, &b_MET_LocHadTopo_etx_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_CentralReg", &MET_LocHadTopo_ety_CentralReg, &b_MET_LocHadTopo_ety_CentralReg);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_EndcapRegion", &MET_LocHadTopo_etx_EndcapRegion, &b_MET_LocHadTopo_etx_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_EndcapRegion", &MET_LocHadTopo_ety_EndcapRegion, &b_MET_LocHadTopo_ety_EndcapRegion);
   fChain->SetBranchAddress("MET_LocHadTopo_etx_ForwardReg", &MET_LocHadTopo_etx_ForwardReg, &b_MET_LocHadTopo_etx_ForwardReg);
   fChain->SetBranchAddress("MET_LocHadTopo_ety_ForwardReg", &MET_LocHadTopo_ety_ForwardReg, &b_MET_LocHadTopo_ety_ForwardReg);
   fChain->SetBranchAddress("vxp_n", &vxp_n, &b_vxp_n);
   fChain->SetBranchAddress("vxp_x", &vxp_x, &b_vxp_x);
   fChain->SetBranchAddress("vxp_y", &vxp_y, &b_vxp_y);
   fChain->SetBranchAddress("vxp_z", &vxp_z, &b_vxp_z);
   fChain->SetBranchAddress("vxp_cov_x", &vxp_cov_x, &b_vxp_cov_x);
   fChain->SetBranchAddress("vxp_cov_y", &vxp_cov_y, &b_vxp_cov_y);
   fChain->SetBranchAddress("vxp_cov_z", &vxp_cov_z, &b_vxp_cov_z);
   fChain->SetBranchAddress("vxp_cov_xy", &vxp_cov_xy, &b_vxp_cov_xy);
   fChain->SetBranchAddress("vxp_cov_xz", &vxp_cov_xz, &b_vxp_cov_xz);
   fChain->SetBranchAddress("vxp_cov_yz", &vxp_cov_yz, &b_vxp_cov_yz);
   fChain->SetBranchAddress("vxp_type", &vxp_type, &b_vxp_type);
   fChain->SetBranchAddress("vxp_chi2", &vxp_chi2, &b_vxp_chi2);
   fChain->SetBranchAddress("vxp_ndof", &vxp_ndof, &b_vxp_ndof);
   fChain->SetBranchAddress("vxp_px", &vxp_px, &b_vxp_px);
   fChain->SetBranchAddress("vxp_py", &vxp_py, &b_vxp_py);
   fChain->SetBranchAddress("vxp_pz", &vxp_pz, &b_vxp_pz);
   fChain->SetBranchAddress("vxp_E", &vxp_E, &b_vxp_E);
   fChain->SetBranchAddress("vxp_m", &vxp_m, &b_vxp_m);
   fChain->SetBranchAddress("vxp_nTracks", &vxp_nTracks, &b_vxp_nTracks);
   fChain->SetBranchAddress("vxp_sumPt", &vxp_sumPt, &b_vxp_sumPt);
   fChain->SetBranchAddress("vxp_trk_weight", &vxp_trk_weight, &b_vxp_trk_weight);
   fChain->SetBranchAddress("vxp_trk_n", &vxp_trk_n, &b_vxp_trk_n);
   fChain->SetBranchAddress("vxp_trk_index", &vxp_trk_index, &b_vxp_trk_index);
   fChain->SetBranchAddress("trig_DB_SMK", &trig_DB_SMK, &b_trig_DB_SMK);
   fChain->SetBranchAddress("trig_L1_mu_eta", &trig_L1_mu_eta, &b_trig_L1_mu_eta);
   fChain->SetBranchAddress("trig_L1_mu_phi", &trig_L1_mu_phi, &b_trig_L1_mu_phi);
   fChain->SetBranchAddress("trig_L1_mu_thrName", &trig_L1_mu_thrName, &b_trig_L1_mu_thrName);
   fChain->SetBranchAddress("trig_L2_muonfeature_eta", &trig_L2_muonfeature_eta, &b_trig_L2_muonfeature_eta);
   fChain->SetBranchAddress("trig_L2_muonfeature_phi", &trig_L2_muonfeature_phi, &b_trig_L2_muonfeature_phi);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_eta", &trig_L2_combmuonfeature_eta, &b_trig_L2_combmuonfeature_eta);
   fChain->SetBranchAddress("trig_L2_combmuonfeature_phi", &trig_L2_combmuonfeature_phi, &b_trig_L2_combmuonfeature_phi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_pt", &trig_EF_trigmuonef_track_SA_pt, &b_trig_EF_trigmuonef_track_SA_pt);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_eta", &trig_EF_trigmuonef_track_SA_eta, &b_trig_EF_trigmuonef_track_SA_eta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_SA_phi", &trig_EF_trigmuonef_track_SA_phi, &b_trig_EF_trigmuonef_track_SA_phi);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_pt", &trig_EF_trigmuonef_track_CB_pt, &b_trig_EF_trigmuonef_track_CB_pt);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_eta", &trig_EF_trigmuonef_track_CB_eta, &b_trig_EF_trigmuonef_track_CB_eta);
   fChain->SetBranchAddress("trig_EF_trigmuonef_track_CB_phi", &trig_EF_trigmuonef_track_CB_phi, &b_trig_EF_trigmuonef_track_CB_phi);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_pt", &trig_EF_trigmugirl_track_CB_pt, &b_trig_EF_trigmugirl_track_CB_pt);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_eta", &trig_EF_trigmugirl_track_CB_eta, &b_trig_EF_trigmugirl_track_CB_eta);
   fChain->SetBranchAddress("trig_EF_trigmugirl_track_CB_phi", &trig_EF_trigmugirl_track_CB_phi, &b_trig_EF_trigmugirl_track_CB_phi);
   fChain->SetBranchAddress("trig_Nav_n", &trig_Nav_n, &b_trig_Nav_n);
   fChain->SetBranchAddress("trig_Nav_chain_ChainId", &trig_Nav_chain_ChainId, &b_trig_Nav_chain_ChainId);
   fChain->SetBranchAddress("trig_Nav_chain_RoIType", &trig_Nav_chain_RoIType, &b_trig_Nav_chain_RoIType);
   fChain->SetBranchAddress("trig_Nav_chain_RoIIndex", &trig_Nav_chain_RoIIndex, &b_trig_Nav_chain_RoIIndex);
   fChain->SetBranchAddress("trig_RoI_L2_mu_MuonFeature", &trig_RoI_L2_mu_MuonFeature, &b_trig_RoI_L2_mu_MuonFeature);
   fChain->SetBranchAddress("trig_RoI_L2_mu_CombinedMuonFeature", &trig_RoI_L2_mu_CombinedMuonFeature, &b_trig_RoI_L2_mu_CombinedMuonFeature);
   fChain->SetBranchAddress("trig_RoI_L2_mu_CombinedMuonFeatureStatus", &trig_RoI_L2_mu_CombinedMuonFeatureStatus, &b_trig_RoI_L2_mu_CombinedMuonFeatureStatus);
   fChain->SetBranchAddress("trig_RoI_L2_mu_Muon_ROI", &trig_RoI_L2_mu_Muon_ROI, &b_trig_RoI_L2_mu_Muon_ROI);
   fChain->SetBranchAddress("trig_RoI_EF_mu_Muon_ROI", &trig_RoI_EF_mu_Muon_ROI, &b_trig_RoI_EF_mu_Muon_ROI);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainer", &trig_RoI_EF_mu_TrigMuonEFInfoContainer, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainer);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus", &trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus, &b_trig_RoI_EF_mu_TrigMuonEFInfoContainerStatus);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFIsolationContainer", &trig_RoI_EF_mu_TrigMuonEFIsolationContainer, &b_trig_RoI_EF_mu_TrigMuonEFIsolationContainer);
   fChain->SetBranchAddress("trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus", &trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus, &b_trig_RoI_EF_mu_TrigMuonEFIsolationContainerStatus);
   fChain->SetBranchAddress("trig_EF_el_n", &trig_EF_el_n, &b_trig_EF_el_n);
   fChain->SetBranchAddress("trig_EF_el_eta", &trig_EF_el_eta, &b_trig_EF_el_eta);
   fChain->SetBranchAddress("trig_EF_el_phi", &trig_EF_el_phi, &b_trig_EF_el_phi);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_Electrons", &trig_RoI_EF_e_egammaContainer_egamma_Electrons, &b_trig_RoI_EF_e_egammaContainer_egamma_Electrons);
   fChain->SetBranchAddress("trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus", &trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus, &b_trig_RoI_EF_e_egammaContainer_egamma_ElectronsStatus);
   fChain->SetBranchAddress("Eta1", &Eta1, &b_Eta1);
   fChain->SetBranchAddress("Eta2", &Eta2, &b_Eta2);
   fChain->SetBranchAddress("Eta3", &Eta3, &b_Eta3);
   fChain->SetBranchAddress("Eta4", &Eta4, &b_Eta4);
   fChain->SetBranchAddress("Lep1CaloIso", &Lep1CaloIso, &b_Lep1CaloIso);
   fChain->SetBranchAddress("Lep1Charge", &Lep1Charge, &b_Lep1Charge);
   fChain->SetBranchAddress("Lep1Eta", &Lep1Eta, &b_Lep1Eta);
   fChain->SetBranchAddress("Lep1Fla", &Lep1Fla, &b_Lep1Fla);
   fChain->SetBranchAddress("Lep1Phi", &Lep1Phi, &b_Lep1Phi);
   fChain->SetBranchAddress("Lep1Pt", &Lep1Pt, &b_Lep1Pt);
   fChain->SetBranchAddress("Lep1TrkIso", &Lep1TrkIso, &b_Lep1TrkIso);
   fChain->SetBranchAddress("Lep1d0", &Lep1d0, &b_Lep1d0);
   fChain->SetBranchAddress("Lep1d0Sig", &Lep1d0Sig, &b_Lep1d0Sig);
   fChain->SetBranchAddress("Lep1z0", &Lep1z0, &b_Lep1z0);
   fChain->SetBranchAddress("Lep1z0Sig", &Lep1z0Sig, &b_Lep1z0Sig);
   fChain->SetBranchAddress("Lep2CaloIso", &Lep2CaloIso, &b_Lep2CaloIso);
   fChain->SetBranchAddress("Lep2Charge", &Lep2Charge, &b_Lep2Charge);
   fChain->SetBranchAddress("Lep2Eta", &Lep2Eta, &b_Lep2Eta);
   fChain->SetBranchAddress("Lep2Fla", &Lep2Fla, &b_Lep2Fla);
   fChain->SetBranchAddress("Lep2Phi", &Lep2Phi, &b_Lep2Phi);
   fChain->SetBranchAddress("Lep2Pt", &Lep2Pt, &b_Lep2Pt);
   fChain->SetBranchAddress("Lep2TrkIso", &Lep2TrkIso, &b_Lep2TrkIso);
   fChain->SetBranchAddress("Lep2d0", &Lep2d0, &b_Lep2d0);
   fChain->SetBranchAddress("Lep2d0Sig", &Lep2d0Sig, &b_Lep2d0Sig);
   fChain->SetBranchAddress("Lep2z0", &Lep2z0, &b_Lep2z0);
   fChain->SetBranchAddress("Lep2z0Sig", &Lep2z0Sig, &b_Lep2z0Sig);
   fChain->SetBranchAddress("Lep3CaloIso", &Lep3CaloIso, &b_Lep3CaloIso);
   fChain->SetBranchAddress("Lep3Charge", &Lep3Charge, &b_Lep3Charge);
   fChain->SetBranchAddress("Lep3Eta", &Lep3Eta, &b_Lep3Eta);
   fChain->SetBranchAddress("Lep3Fla", &Lep3Fla, &b_Lep3Fla);
   fChain->SetBranchAddress("Lep3Phi", &Lep3Phi, &b_Lep3Phi);
   fChain->SetBranchAddress("Lep3Pt", &Lep3Pt, &b_Lep3Pt);
   fChain->SetBranchAddress("Lep3TrkIso", &Lep3TrkIso, &b_Lep3TrkIso);
   fChain->SetBranchAddress("Lep3d0", &Lep3d0, &b_Lep3d0);
   fChain->SetBranchAddress("Lep3d0Sig", &Lep3d0Sig, &b_Lep3d0Sig);
   fChain->SetBranchAddress("Lep3z0", &Lep3z0, &b_Lep3z0);
   fChain->SetBranchAddress("Lep3z0Sig", &Lep3z0Sig, &b_Lep3z0Sig);
   fChain->SetBranchAddress("Lep4CaloIso", &Lep4CaloIso, &b_Lep4CaloIso);
   fChain->SetBranchAddress("Lep4Charge", &Lep4Charge, &b_Lep4Charge);
   fChain->SetBranchAddress("Lep4Eta", &Lep4Eta, &b_Lep4Eta);
   fChain->SetBranchAddress("Lep4Fla", &Lep4Fla, &b_Lep4Fla);
   fChain->SetBranchAddress("Lep4Phi", &Lep4Phi, &b_Lep4Phi);
   fChain->SetBranchAddress("Lep4Pt", &Lep4Pt, &b_Lep4Pt);
   fChain->SetBranchAddress("Lep4TrkIso", &Lep4TrkIso, &b_Lep4TrkIso);
   fChain->SetBranchAddress("Lep4d0", &Lep4d0, &b_Lep4d0);
   fChain->SetBranchAddress("Lep4d0Sig", &Lep4d0Sig, &b_Lep4d0Sig);
   fChain->SetBranchAddress("Lep4z0", &Lep4z0, &b_Lep4z0);
   fChain->SetBranchAddress("Lep4z0Sig", &Lep4z0Sig, &b_Lep4z0Sig);
   fChain->SetBranchAddress("LepEta", &LepEta, &b_LepEta);
   fChain->SetBranchAddress("LepPhi", &LepPhi, &b_LepPhi);
   fChain->SetBranchAddress("LepPt", &LepPt, &b_LepPt);
   fChain->SetBranchAddress("MZ1", &MZ1, &b_MZ1);
   fChain->SetBranchAddress("MZ2", &MZ2, &b_MZ2);
   fChain->SetBranchAddress("MZZ", &MZZ, &b_MZZ);
   fChain->SetBranchAddress("N_vx", &N_vx, &b_N_vx);
   fChain->SetBranchAddress("Phi1", &Phi1, &b_Phi1);
   fChain->SetBranchAddress("Phi2", &Phi2, &b_Phi2);
   fChain->SetBranchAddress("Phi3", &Phi3, &b_Phi3);
   fChain->SetBranchAddress("Phi4", &Phi4, &b_Phi4);
   fChain->SetBranchAddress("Pt1", &Pt1, &b_Pt1);
   fChain->SetBranchAddress("Pt2", &Pt2, &b_Pt2);
   fChain->SetBranchAddress("Pt3", &Pt3, &b_Pt3);
   fChain->SetBranchAddress("Pt4", &Pt4, &b_Pt4);
   fChain->SetBranchAddress("Z1Eta", &Z1Eta, &b_Z1Eta);
   fChain->SetBranchAddress("Z1Phi", &Z1Phi, &b_Z1Phi);
   fChain->SetBranchAddress("Z1Pt", &Z1Pt, &b_Z1Pt);
   fChain->SetBranchAddress("Z2Eta", &Z2Eta, &b_Z2Eta);
   fChain->SetBranchAddress("Z2Phi", &Z2Phi, &b_Z2Phi);
   fChain->SetBranchAddress("Z2Pt", &Z2Pt, &b_Z2Pt);
   fChain->SetBranchAddress("ZZPt", &ZZPt, &b_ZZPt);
   fChain->SetBranchAddress("Z_Mee", &Z_Mee, &b_Z_Mee);
   fChain->SetBranchAddress("Z_Mmm", &Z_Mmm, &b_Z_Mmm);
   fChain->SetBranchAddress("Zee_Lep1_Eta", &Zee_Lep1_Eta, &b_Zee_Lep1_Eta);
   fChain->SetBranchAddress("Zee_Lep1_Phi", &Zee_Lep1_Phi, &b_Zee_Lep1_Phi);
   fChain->SetBranchAddress("Zee_Lep1_Pt", &Zee_Lep1_Pt, &b_Zee_Lep1_Pt);
   fChain->SetBranchAddress("Zee_Lep2_Eta", &Zee_Lep2_Eta, &b_Zee_Lep2_Eta);
   fChain->SetBranchAddress("Zee_Lep2_Phi", &Zee_Lep2_Phi, &b_Zee_Lep2_Phi);
   fChain->SetBranchAddress("Zee_Lep2_Pt", &Zee_Lep2_Pt, &b_Zee_Lep2_Pt);
   fChain->SetBranchAddress("Zmm_Lep1_Eta", &Zmm_Lep1_Eta, &b_Zmm_Lep1_Eta);
   fChain->SetBranchAddress("Zmm_Lep1_Phi", &Zmm_Lep1_Phi, &b_Zmm_Lep1_Phi);
   fChain->SetBranchAddress("Zmm_Lep1_Pt", &Zmm_Lep1_Pt, &b_Zmm_Lep1_Pt);
   fChain->SetBranchAddress("Zmm_Lep2_Eta", &Zmm_Lep2_Eta, &b_Zmm_Lep2_Eta);
   fChain->SetBranchAddress("Zmm_Lep2_Phi", &Zmm_Lep2_Phi, &b_Zmm_Lep2_Phi);
   fChain->SetBranchAddress("Zmm_Lep2_Pt", &Zmm_Lep2_Pt, &b_Zmm_Lep2_Pt);
   fChain->SetBranchAddress("dEtaZ1", &dEtaZ1, &b_dEtaZ1);
   fChain->SetBranchAddress("dEtaZ2", &dEtaZ2, &b_dEtaZ2);
   fChain->SetBranchAddress("dPhiZ1", &dPhiZ1, &b_dPhiZ1);
   fChain->SetBranchAddress("dPhiZ2", &dPhiZ2, &b_dPhiZ2);
   fChain->SetBranchAddress("dPhiZZ", &dPhiZZ, &b_dPhiZZ);
   fChain->SetBranchAddress("dPt", &dPt, &b_dPt);
   fChain->SetBranchAddress("dRZ1", &dRZ1, &b_dRZ1);
   fChain->SetBranchAddress("dRZ2", &dRZ2, &b_dRZ2);
   fChain->SetBranchAddress("dRZZ", &dRZZ, &b_dRZZ);
   fChain->SetBranchAddress("dR_min", &dR_min, &b_dR_min);
   fChain->SetBranchAddress("dd0_max", &dd0_max, &b_dd0_max);
   fChain->SetBranchAddress("dd0_min", &dd0_min, &b_dd0_min);
   fChain->SetBranchAddress("dz0_max", &dz0_max, &b_dz0_max);
   fChain->SetBranchAddress("dz0_min", &dz0_min, &b_dz0_min);
   fChain->SetBranchAddress("FLAG_eeee_2Lep", &FLAG_eeee_2Lep, &b_FLAG_eeee_2Lep);
   fChain->SetBranchAddress("FLAG_eeee_4Lep", &FLAG_eeee_4Lep, &b_FLAG_eeee_4Lep);
   fChain->SetBranchAddress("FLAG_eeee_CaloIso", &FLAG_eeee_CaloIso, &b_FLAG_eeee_CaloIso);
   fChain->SetBranchAddress("FLAG_eeee_D3PD", &FLAG_eeee_D3PD, &b_FLAG_eeee_D3PD);
   fChain->SetBranchAddress("FLAG_eeee_DR", &FLAG_eeee_DR, &b_FLAG_eeee_DR);
   fChain->SetBranchAddress("FLAG_eeee_GRL", &FLAG_eeee_GRL, &b_FLAG_eeee_GRL);
   fChain->SetBranchAddress("FLAG_eeee_IP", &FLAG_eeee_IP, &b_FLAG_eeee_IP);
   fChain->SetBranchAddress("FLAG_eeee_JPsiVeto", &FLAG_eeee_JPsiVeto, &b_FLAG_eeee_JPsiVeto);
   fChain->SetBranchAddress("FLAG_eeee_Kine", &FLAG_eeee_Kine, &b_FLAG_eeee_Kine);
   fChain->SetBranchAddress("FLAG_eeee_LAr", &FLAG_eeee_LAr, &b_FLAG_eeee_LAr);
   fChain->SetBranchAddress("FLAG_eeee_OneQuad", &FLAG_eeee_OneQuad, &b_FLAG_eeee_OneQuad);
   fChain->SetBranchAddress("FLAG_eeee_PV", &FLAG_eeee_PV, &b_FLAG_eeee_PV);
   fChain->SetBranchAddress("FLAG_eeee_Quad", &FLAG_eeee_Quad, &b_FLAG_eeee_Quad);
   fChain->SetBranchAddress("FLAG_eeee_TrackIso", &FLAG_eeee_TrackIso, &b_FLAG_eeee_TrackIso);
   fChain->SetBranchAddress("FLAG_eeee_TrigMatch", &FLAG_eeee_TrigMatch, &b_FLAG_eeee_TrigMatch);
   fChain->SetBranchAddress("FLAG_eeee_Trigger", &FLAG_eeee_Trigger, &b_FLAG_eeee_Trigger);
   fChain->SetBranchAddress("FLAG_eeee_Z1", &FLAG_eeee_Z1, &b_FLAG_eeee_Z1);
   fChain->SetBranchAddress("FLAG_eeee_Z2", &FLAG_eeee_Z2, &b_FLAG_eeee_Z2);
   fChain->SetBranchAddress("FLAG_eemm_2Lep", &FLAG_eemm_2Lep, &b_FLAG_eemm_2Lep);
   fChain->SetBranchAddress("FLAG_eemm_4Lep", &FLAG_eemm_4Lep, &b_FLAG_eemm_4Lep);
   fChain->SetBranchAddress("FLAG_eemm_CaloIso", &FLAG_eemm_CaloIso, &b_FLAG_eemm_CaloIso);
   fChain->SetBranchAddress("FLAG_eemm_D3PD", &FLAG_eemm_D3PD, &b_FLAG_eemm_D3PD);
   fChain->SetBranchAddress("FLAG_eemm_DR", &FLAG_eemm_DR, &b_FLAG_eemm_DR);
   fChain->SetBranchAddress("FLAG_eemm_GRL", &FLAG_eemm_GRL, &b_FLAG_eemm_GRL);
   fChain->SetBranchAddress("FLAG_eemm_IP", &FLAG_eemm_IP, &b_FLAG_eemm_IP);
   fChain->SetBranchAddress("FLAG_eemm_JPsiVeto", &FLAG_eemm_JPsiVeto, &b_FLAG_eemm_JPsiVeto);
   fChain->SetBranchAddress("FLAG_eemm_Kine", &FLAG_eemm_Kine, &b_FLAG_eemm_Kine);
   fChain->SetBranchAddress("FLAG_eemm_LAr", &FLAG_eemm_LAr, &b_FLAG_eemm_LAr);
   fChain->SetBranchAddress("FLAG_eemm_OneQuad", &FLAG_eemm_OneQuad, &b_FLAG_eemm_OneQuad);
   fChain->SetBranchAddress("FLAG_eemm_PV", &FLAG_eemm_PV, &b_FLAG_eemm_PV);
   fChain->SetBranchAddress("FLAG_eemm_Quad", &FLAG_eemm_Quad, &b_FLAG_eemm_Quad);
   fChain->SetBranchAddress("FLAG_eemm_TrackIso", &FLAG_eemm_TrackIso, &b_FLAG_eemm_TrackIso);
   fChain->SetBranchAddress("FLAG_eemm_TrigMatch", &FLAG_eemm_TrigMatch, &b_FLAG_eemm_TrigMatch);
   fChain->SetBranchAddress("FLAG_eemm_Trigger", &FLAG_eemm_Trigger, &b_FLAG_eemm_Trigger);
   fChain->SetBranchAddress("FLAG_eemm_Z1", &FLAG_eemm_Z1, &b_FLAG_eemm_Z1);
   fChain->SetBranchAddress("FLAG_eemm_Z2", &FLAG_eemm_Z2, &b_FLAG_eemm_Z2);
   fChain->SetBranchAddress("FLAG_incl_2Lep", &FLAG_incl_2Lep, &b_FLAG_incl_2Lep);
   fChain->SetBranchAddress("FLAG_incl_4Lep", &FLAG_incl_4Lep, &b_FLAG_incl_4Lep);
   fChain->SetBranchAddress("FLAG_incl_CaloIso", &FLAG_incl_CaloIso, &b_FLAG_incl_CaloIso);
   fChain->SetBranchAddress("FLAG_incl_D3PD", &FLAG_incl_D3PD, &b_FLAG_incl_D3PD);
   fChain->SetBranchAddress("FLAG_incl_DR", &FLAG_incl_DR, &b_FLAG_incl_DR);
   fChain->SetBranchAddress("FLAG_incl_GRL", &FLAG_incl_GRL, &b_FLAG_incl_GRL);
   fChain->SetBranchAddress("FLAG_incl_IP", &FLAG_incl_IP, &b_FLAG_incl_IP);
   fChain->SetBranchAddress("FLAG_incl_JPsiVeto", &FLAG_incl_JPsiVeto, &b_FLAG_incl_JPsiVeto);
   fChain->SetBranchAddress("FLAG_incl_Kine", &FLAG_incl_Kine, &b_FLAG_incl_Kine);
   fChain->SetBranchAddress("FLAG_incl_LAr", &FLAG_incl_LAr, &b_FLAG_incl_LAr);
   fChain->SetBranchAddress("FLAG_incl_OneQuad", &FLAG_incl_OneQuad, &b_FLAG_incl_OneQuad);
   fChain->SetBranchAddress("FLAG_incl_PV", &FLAG_incl_PV, &b_FLAG_incl_PV);
   fChain->SetBranchAddress("FLAG_incl_Quad", &FLAG_incl_Quad, &b_FLAG_incl_Quad);
   fChain->SetBranchAddress("FLAG_incl_TrackIso", &FLAG_incl_TrackIso, &b_FLAG_incl_TrackIso);
   fChain->SetBranchAddress("FLAG_incl_TrigMatch", &FLAG_incl_TrigMatch, &b_FLAG_incl_TrigMatch);
   fChain->SetBranchAddress("FLAG_incl_Trigger", &FLAG_incl_Trigger, &b_FLAG_incl_Trigger);
   fChain->SetBranchAddress("FLAG_incl_Z1", &FLAG_incl_Z1, &b_FLAG_incl_Z1);
   fChain->SetBranchAddress("FLAG_incl_Z2", &FLAG_incl_Z2, &b_FLAG_incl_Z2);
   fChain->SetBranchAddress("FLAG_mmee_2Lep", &FLAG_mmee_2Lep, &b_FLAG_mmee_2Lep);
   fChain->SetBranchAddress("FLAG_mmee_4Lep", &FLAG_mmee_4Lep, &b_FLAG_mmee_4Lep);
   fChain->SetBranchAddress("FLAG_mmee_CaloIso", &FLAG_mmee_CaloIso, &b_FLAG_mmee_CaloIso);
   fChain->SetBranchAddress("FLAG_mmee_D3PD", &FLAG_mmee_D3PD, &b_FLAG_mmee_D3PD);
   fChain->SetBranchAddress("FLAG_mmee_DR", &FLAG_mmee_DR, &b_FLAG_mmee_DR);
   fChain->SetBranchAddress("FLAG_mmee_GRL", &FLAG_mmee_GRL, &b_FLAG_mmee_GRL);
   fChain->SetBranchAddress("FLAG_mmee_IP", &FLAG_mmee_IP, &b_FLAG_mmee_IP);
   fChain->SetBranchAddress("FLAG_mmee_JPsiVeto", &FLAG_mmee_JPsiVeto, &b_FLAG_mmee_JPsiVeto);
   fChain->SetBranchAddress("FLAG_mmee_Kine", &FLAG_mmee_Kine, &b_FLAG_mmee_Kine);
   fChain->SetBranchAddress("FLAG_mmee_LAr", &FLAG_mmee_LAr, &b_FLAG_mmee_LAr);
   fChain->SetBranchAddress("FLAG_mmee_OneQuad", &FLAG_mmee_OneQuad, &b_FLAG_mmee_OneQuad);
   fChain->SetBranchAddress("FLAG_mmee_PV", &FLAG_mmee_PV, &b_FLAG_mmee_PV);
   fChain->SetBranchAddress("FLAG_mmee_Quad", &FLAG_mmee_Quad, &b_FLAG_mmee_Quad);
   fChain->SetBranchAddress("FLAG_mmee_TrackIso", &FLAG_mmee_TrackIso, &b_FLAG_mmee_TrackIso);
   fChain->SetBranchAddress("FLAG_mmee_TrigMatch", &FLAG_mmee_TrigMatch, &b_FLAG_mmee_TrigMatch);
   fChain->SetBranchAddress("FLAG_mmee_Trigger", &FLAG_mmee_Trigger, &b_FLAG_mmee_Trigger);
   fChain->SetBranchAddress("FLAG_mmee_Z1", &FLAG_mmee_Z1, &b_FLAG_mmee_Z1);
   fChain->SetBranchAddress("FLAG_mmee_Z2", &FLAG_mmee_Z2, &b_FLAG_mmee_Z2);
   fChain->SetBranchAddress("FLAG_mmmm_2Lep", &FLAG_mmmm_2Lep, &b_FLAG_mmmm_2Lep);
   fChain->SetBranchAddress("FLAG_mmmm_4Lep", &FLAG_mmmm_4Lep, &b_FLAG_mmmm_4Lep);
   fChain->SetBranchAddress("FLAG_mmmm_CaloIso", &FLAG_mmmm_CaloIso, &b_FLAG_mmmm_CaloIso);
   fChain->SetBranchAddress("FLAG_mmmm_D3PD", &FLAG_mmmm_D3PD, &b_FLAG_mmmm_D3PD);
   fChain->SetBranchAddress("FLAG_mmmm_DR", &FLAG_mmmm_DR, &b_FLAG_mmmm_DR);
   fChain->SetBranchAddress("FLAG_mmmm_GRL", &FLAG_mmmm_GRL, &b_FLAG_mmmm_GRL);
   fChain->SetBranchAddress("FLAG_mmmm_IP", &FLAG_mmmm_IP, &b_FLAG_mmmm_IP);
   fChain->SetBranchAddress("FLAG_mmmm_JPsiVeto", &FLAG_mmmm_JPsiVeto, &b_FLAG_mmmm_JPsiVeto);
   fChain->SetBranchAddress("FLAG_mmmm_Kine", &FLAG_mmmm_Kine, &b_FLAG_mmmm_Kine);
   fChain->SetBranchAddress("FLAG_mmmm_LAr", &FLAG_mmmm_LAr, &b_FLAG_mmmm_LAr);
   fChain->SetBranchAddress("FLAG_mmmm_OneQuad", &FLAG_mmmm_OneQuad, &b_FLAG_mmmm_OneQuad);
   fChain->SetBranchAddress("FLAG_mmmm_PV", &FLAG_mmmm_PV, &b_FLAG_mmmm_PV);
   fChain->SetBranchAddress("FLAG_mmmm_Quad", &FLAG_mmmm_Quad, &b_FLAG_mmmm_Quad);
   fChain->SetBranchAddress("FLAG_mmmm_TrackIso", &FLAG_mmmm_TrackIso, &b_FLAG_mmmm_TrackIso);
   fChain->SetBranchAddress("FLAG_mmmm_TrigMatch", &FLAG_mmmm_TrigMatch, &b_FLAG_mmmm_TrigMatch);
   fChain->SetBranchAddress("FLAG_mmmm_Trigger", &FLAG_mmmm_Trigger, &b_FLAG_mmmm_Trigger);
   fChain->SetBranchAddress("FLAG_mmmm_Z1", &FLAG_mmmm_Z1, &b_FLAG_mmmm_Z1);
   fChain->SetBranchAddress("FLAG_mmmm_Z2", &FLAG_mmmm_Z2, &b_FLAG_mmmm_Z2);
}

Bool_t D3PDAnalysisBase::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

#endif // #ifdef D3PDAnalysisBase_cxx
