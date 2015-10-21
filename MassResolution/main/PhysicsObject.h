//<PhysicsObject.h>
//<Object definition for analysis>
//<Yusheng Wu, 2012, CERN>

#include "HZZAnalysis.h"
#include <math.h>

//<HZZAnalysis::MUON> ...
void HZZAnalysis::LoadMuon(OBJ_MUON& m, string SET, int i, double npv, MUONTYPE type) {

    m.hasPht=m.phtAdded=false;
    
    //<for STACO>
    if(type==STACO) {
        //common kine
        m.L.SetPtEtaPhiM(mu_staco_pt->at(i), mu_staco_eta->at(i), mu_staco_phi->at(i), m_mass);    
        m.p=m.L.P(); m.pt=m.L.Pt(); m.px=m.L.Px(); m.py=m.L.Py(); m.pz=m.L.Pz(); 
        m.E=m.L.E(); m.Et=m.L.Et(); 
        m.eta=m.L.Eta(); m.phi=m.L.Phi();
        m.m=m_mass;
        //impact parameter
        m.d0=mu_staco_trackIPEstimate_d0_unbiasedpvunbiased->at(i);
        if(STREAM=="MC") m.d0=m.d0-2.e-3;
        m.z0=mu_staco_trackIPEstimate_z0_unbiasedpvunbiased->at(i);
        m.d0err=mu_staco_trackIPEstimate_sigd0_unbiasedpvunbiased->at(i);
        m.z0err=mu_staco_trackIPEstimate_sigz0_unbiasedpvunbiased->at(i);
        m.d0sig=m.d0err!=0 ? fabs(m.d0/m.d0err) : 9999.;
        m.z0sig=m.z0err!=0 ? fabs(m.z0/m.z0err) : 9999.;
        m.d0_old=mu_staco_d0_exPV->at(i); 
        m.z0_old=mu_staco_z0_exPV->at(i);
        m.d0err_old=mu_staco_cov_d0_exPV->at(i); 
        m.z0err_old=mu_staco_cov_z0_exPV->at(i);
        m.d0sig_old=m.d0err>0 ? m.d0/sqrt(m.d0err) : 9999.;
        m.z0sig_old=m.z0err>0 ? m.z0/sqrt(m.z0err) : 9999.;
        //muID
        m.iscombined=mu_staco_isCombinedMuon->at(i);
        m.isloose=mu_staco_loose->at(i);
        m.ismedium=mu_staco_medium->at(i);
        m.istight=mu_staco_tight->at(i);
        m.istag=mu_staco_isLowPtReconstructedMuon->at(i);
        m.issa=mu_staco_isStandAloneMuon->at(i);
        //ptID, ptMS, ptME
        m.ptid=(mu_staco_id_qoverp->at(i) !=0.) ? fabs(1.0/mu_staco_id_qoverp->at(i)*sin(mu_staco_id_theta->at(i))) : 0.;
        m.ptme=(mu_staco_me_qoverp->at(i) !=0.) ? fabs(1.0/mu_staco_me_qoverp->at(i)*sin(mu_staco_me_theta->at(i))) : 0.;
        //cout << "loadmuon 1" << endl;
        m.L_id.SetPtEtaPhiM(m.ptid,mu_staco_id_theta->at(i)>0. ? -1.0*log(tan(mu_staco_id_theta->at(i)/2.0)) : 0., mu_staco_id_phi->at(i), m_mass);
        //cout << "loadmuon 2" << endl;
        m.L_me.SetPtEtaPhiM(m.ptme,mu_staco_me_theta->at(i)>0. ? -1.0*log(tan(mu_staco_me_theta->at(i)/2.0)) : 0., mu_staco_me_phi->at(i), m_mass);
        //cout << "loadmuon 3" << endl;
        //Charges
        m.author=mu_staco_author->at(i);
        m.charge=mu_staco_charge->at(i);
        m.index=i;
        //Hits requirement
        int tmp_passhits=1;
        tmp_passhits = tmp_passhits && (!mu_staco_expectBLayerHit->at(i) || mu_staco_nBLHits->at(i)>0);
        tmp_passhits = tmp_passhits && (mu_staco_nPixHits->at(i)+mu_staco_nPixelDeadSensors->at(i))>0;
        tmp_passhits = tmp_passhits && (mu_staco_nSCTHits->at(i)+mu_staco_nSCTDeadSensors->at(i))>4;
        tmp_passhits = tmp_passhits && (mu_staco_nPixHoles->at(i)+mu_staco_nSCTHoles->at(i))<3;
        int nTRT=0, nTRTOutliers=0, nTRTtot=0;
        nTRT = mu_staco_nTRTHits->at(i);
        nTRTOutliers = mu_staco_nTRTOutliers->at(i);
        nTRTtot = nTRT + nTRTOutliers;
        //hits for staco CB,ST
        m.passhits_staco = (fabs(m.eta)>0.1 && fabs(m.eta)<1.9) ? tmp_passhits && (nTRTtot>5 && nTRTOutliers<0.9*nTRTtot) :
                                    tmp_passhits && (nTRTtot>5 ? nTRTOutliers<0.9*nTRTtot : 1);
        //hits for standalone muons
        int cscetahits = mu_staco_nCSCEtaHits->at(i);
        int cscphihits = mu_staco_nCSCPhiHits->at(i);
        int emhits = mu_staco_nMDTEMHits->at(i);
        int eohits = mu_staco_nMDTEOHits->at(i);
        m.passhits_sa = fabs(m.eta)>2.5 && m.issa==1 && m.author==6 && (cscetahits+cscphihits)>0 && emhits>0 && eohits>0 ? 1 : 0;  
        //Ioslation variables
        m.etcone20=mu_staco_etcone20->at(i);
        m.etcone30=mu_staco_etcone30->at(i);
        m.etcone40=mu_staco_etcone40->at(i);
        m.ptcone20=mu_staco_ptcone20->at(i);
        m.ptcone30=mu_staco_ptcone30->at(i);
        m.ptcone40=mu_staco_ptcone40->at(i);
    }

    //<for CALO>
    if(type==CALO) {
        //common kine
        m.L.SetPtEtaPhiM(mu_calo_pt->at(i), mu_calo_eta->at(i), mu_calo_phi->at(i), m_mass);    
        m.p=m.L.P(); m.pt=m.L.Pt(); m.px=m.L.Px(); m.py=m.L.Py(); m.pz=m.L.Pz(); 
        m.E=m.L.E(); m.Et=m.L.Et(); 
        m.eta=m.L.Eta(); m.phi=m.L.Phi();
        m.m=m_mass;
        //impact parameter
        m.d0=mu_calo_trackIPEstimate_d0_unbiasedpvunbiased->at(i);
        if(STREAM=="MC") m.d0=m.d0-2.e-3;
        m.z0=mu_calo_trackIPEstimate_z0_unbiasedpvunbiased->at(i);
        m.d0err=mu_calo_trackIPEstimate_sigd0_unbiasedpvunbiased->at(i);
        m.z0err=mu_calo_trackIPEstimate_sigz0_unbiasedpvunbiased->at(i);
        m.d0sig=m.d0err!=0 ? fabs(m.d0/m.d0err) : 9999.;
        m.z0sig=m.z0err!=0 ? fabs(m.z0/m.z0err) : 9999.;
        m.d0_old=mu_calo_d0_exPV->at(i); 
        m.z0_old=mu_calo_z0_exPV->at(i);
        m.d0err_old=mu_calo_cov_d0_exPV->at(i); 
        m.z0err_old=mu_calo_cov_z0_exPV->at(i);
        m.d0sig_old=m.d0err>0 ? m.d0/sqrt(m.d0err) : 9999.;
        m.z0sig_old=m.z0err>0 ? m.z0/sqrt(m.z0err) : 9999.;
        //muID
        m.iscombined=mu_calo_isCombinedMuon->at(i);
        m.isloose=mu_calo_loose->at(i);
        m.ismedium=mu_calo_medium->at(i);
        m.istight=mu_calo_tight->at(i);
        m.istag=mu_calo_isLowPtReconstructedMuon->at(i);
        m.issa=mu_calo_isStandAloneMuon->at(i);
        //ptID, ptMS, ptME
        m.ptid=(mu_calo_id_qoverp->at(i) !=0.) ? fabs(1.0/mu_calo_id_qoverp->at(i)*sin(mu_calo_id_theta->at(i))) : 0.;
        m.ptme=(mu_calo_me_qoverp->at(i) !=0.) ? fabs(1.0/mu_calo_me_qoverp->at(i)*sin(mu_calo_me_theta->at(i))) : 0.;
        m.L_id.SetPtEtaPhiM(m.ptid,mu_calo_id_theta->at(i)>0. ? -1.0*log(tan(mu_calo_id_theta->at(i)/2.0)) : 0., mu_calo_id_phi->at(i), m_mass);
        m.L_me.SetPtEtaPhiM(m.ptme,mu_calo_me_theta->at(i)>0. ? -1.0*log(tan(mu_calo_me_theta->at(i)/2.0)) : 0., mu_calo_me_phi->at(i), m_mass);
        //Charges
        m.author=mu_calo_author->at(i);
        m.charge=mu_calo_charge->at(i);
        m.index=i;
        //Calo Muon Info
        m.caloId=mu_calo_caloMuonIdTag->at(i);
        m.caloLikelihood=mu_calo_caloLRLikelihood->at(i);
        //Hits requirement
        int tmp_passhits=1;
        tmp_passhits = tmp_passhits && (!mu_calo_expectBLayerHit->at(i) || mu_calo_nBLHits->at(i)>0);
        tmp_passhits = tmp_passhits && (mu_calo_nPixHits->at(i)+mu_calo_nPixelDeadSensors->at(i))>0;
        tmp_passhits = tmp_passhits && (mu_calo_nSCTHits->at(i)+mu_calo_nSCTDeadSensors->at(i))>4;
        tmp_passhits = tmp_passhits && (mu_calo_nPixHoles->at(i)+mu_calo_nSCTHoles->at(i))<3;
        int nTRT=0, nTRTOutliers=0, nTRTtot=0;
        nTRT = mu_calo_nTRTHits->at(i);
        nTRTOutliers = mu_calo_nTRTOutliers->at(i);
        nTRTtot = nTRT + nTRTOutliers;
        //hits for calo muons, only |eta|<0.1
        m.passhits_calo = (nTRTtot<6 || nTRTOutliers<0.9*nTRTtot) ? tmp_passhits : 0;
        //Ioslation variables
        m.etcone20=mu_calo_etcone20->at(i);
        m.etcone30=mu_calo_etcone30->at(i);
        m.etcone40=mu_calo_etcone40->at(i);
        m.ptcone20=mu_calo_ptcone20->at(i);
        m.ptcone30=mu_calo_ptcone30->at(i);
        m.ptcone40=mu_calo_ptcone40->at(i);
    }

    //<muon isolation correction tool>
    //m.npv=npv;
    //m.etcone20_corr=etcone_cor->CorrectEtCone(m.etcone20,m.npv,m.eta,"cone20Comb");

    //<The smearing or energy correction>
    if(SETTING[SET]["docorr"]==1 && STREAM=="MC") {
        mcp_smear->SetSeed(EventNumber, i); 
        mcp_smear->Event(m.ptme, m.ptid,m.pt,m.eta,m.charge); 
        if(m.istag==1 || type==CALO) m.pt_corr=mcp_smear->pTID();
        else if(m.issa==1) m.pt_corr=mcp_smear->pTMS();
        else m.pt_corr=mcp_smear->pTCB();
        m.ptme_corr=mcp_smear->pTMS(); 
        m.ptid_corr=mcp_smear->pTID(); 
    }
    else {
        m.pt_corr=m.pt;
        m.ptme_corr=m.ptme;
        m.ptid_corr=m.ptid;
    }
    m.Lori=m.L;
    m.Lcorr.SetPtEtaPhiM(m.pt_corr, m.eta, m.phi, m_mass);
    m.Lcorr_me.SetPtEtaPhiM(m.ptme_corr, m.L_me.Eta(), m.L_me.Phi(), m_mass);
    m.Lcorr_id.SetPtEtaPhiM(m.ptid_corr, m.L_id.Eta(), m.L_id.Phi(), m_mass);
    //<The correction to be propogated to MET>
    m.met_corrx=m.px-m.Lcorr.Px();
    m.met_corry=m.py-m.Lcorr.Py();
    //<The final LorentzVecor to be used>
    if(SETTING[SET]["docorr"]==1) {m.LF=m.Lcorr; m.LF_me=m.Lcorr_me; m.LF_id=m.Lcorr_id;}
    else {m.LF=m.L; m.LF_me=m.L_me; m.LF_id=m.L_id;}
    //<scale factor, domcwt>1>
    //no SF for muon pt < 5GeV; for calo muon, eta < 0.1
    //if(SETTING[SET]["domcwt"]>1 && STREAM=="MC" && m.LF.Pt()>=5.e3 && fabs(m.eta)<2.5) {
    if(SETTING[SET]["domcwt"]>1 && STREAM=="MC" && m.LF.Pt()>=6.e3) {
        if(type==STACO) {
            if(m.issa==1) m.sf_loose=mcp_sf_sa->scaleFactor(m.charge,m.LF) > 0 ? mcp_sf_sa->scaleFactor(m.charge,m.LF) : 1.;
            else m.sf_loose=mcp_sf->scaleFactor(m.charge,m.LF) > 0 ? mcp_sf->scaleFactor(m.charge,m.LF) : 1.;
            //m.sf_cb=mcp_sf_cb->scaleFactor(m.LF) > 0 ? mcp_sf_cb->scaleFactor(m.LF) : 1.;
        }
        if(type==CALO && fabs(m.eta)<0.1) 
            m.sf_calo=mcp_sf_calo->scaleFactor(m.LF) > 0 ? mcp_sf_calo->scaleFactor(m.LF) : 1.;
    }
    else {m.sf_loose=m.sf_calo=1.0;}

    //<FSR>
    //FsrPhotons fsrphotons;
    vector<FsrPhotons::FsrCandidate>* list = fsrphotons->getFsrPhotons(m.LF.Eta(),m.LF.Phi(),m.LF_id.Theta(),m.LF_id.Phi(),ph_eta,ph_phi,ph_Et,ph_f1,ph_author,el_cl_eta,el_cl_phi,el_Et,el_f1,el_tracktheta,el_trackphi,0.15,3500.0,0.1);
    for(int j=0; j<(int)list->size(); j++) {
        if(list->at(j).container!="photon" && list->at(j).container!="electron") continue;
        //cout << list->at(j).container << endl;
        m.fsr_type.push_back(list->at(j).container);
        m.fsr_index.push_back(list->at(j).index);
        m.fsr_dR.push_back(list->at(j).deltaR);
    }
}


//<HZZAnalysis::ELECTRON> ...
void HZZAnalysis::LoadElectron(OBJ_ELECTRON& e, string SET, int i, int npv) {

    //<define ele source>
    //1: Z, 2: b/c, 3: hadron, 4: conversion, 5: unknown, 6: W, 0: others
    e.source=0;
    e.hasPht=e.phtAdded=false;
/*    if(STREAM=="MC") {
        if((el_type->at(i)==2 && el_origin->at(i)==13) || (el_type->at(i)==4 && el_originbkg->at(i)==13)) e.source=1;
        else if (el_type->at(i)==3) e.source=2;
        else if (el_type->at(i)==17) e.source=3;
        else if (el_type->at(i)==4 && (el_origin->at(i)==5 || el_originbkg->at(i)==40)) e.source=4;
        else if (el_type->at(i)==0 || el_type->at(i)==1) e.source=5;
        else if ((el_type->at(i)==2 && el_origin->at(i)==12) || (el_type->at(i)==4 && el_originbkg->at(i)==12)) e.source=6;
    }
*/
    //<Kinematics>
    e.L.SetPtEtaPhiM(el_pt->at(i), el_eta->at(i), el_phi->at(i), e_mass);    
    e.p=e.L.P(); e.pt=e.L.Pt(); e.px=e.L.Px(); e.py=e.L.Py(); e.pz=e.L.Pz(); 
    e.E=e.L.E(); e.Et=e.L.Et(); 
    e.eta=e.L.Eta(); e.phi=e.L.Phi();
    e.m=e_mass;
    //<Impact parameter>
    e.d0=el_trackd0pvunbiased->at(i); e.z0=el_trackz0pvunbiased->at(i);
    if(STREAM=="MC") e.d0=e.d0-2.e-3;
    e.d0err=el_tracksigd0pvunbiased->at(i); e.z0err=el_tracksigz0pvunbiased->at(i);
    e.d0sig=e.d0err!=0 ? fabs(e.d0/e.d0err) : 9999.;
    e.z0sig=e.z0err!=0 ? fabs(e.z0/e.z0err) : 9999.;
    e.charge=el_charge->at(i);
    e.index=i;
    //<Author and eID>
    e.isloose=el_loose->at(i);
    e.isloosepp=el_loosePP->at(i);
    e.ismedium=el_medium->at(i);
    e.ismediumpp=el_mediumPP->at(i);
    e.istight=el_tight->at(i);
    e.istightpp=el_tightPP->at(i);
    e.author=el_author->at(i);
    //<Cluster Kinematics>
    e.clE=el_cl_E->at(i);
    e.clpt=el_cl_pt->at(i);
    e.cleta=el_cl_eta->at(i);
    e.clphi=el_cl_phi->at(i);
    e.Lcl.SetPtEtaPhiM(e.clpt,e.cleta,e.clphi,e_mass);    
    //<Inner Track Kinematics>
//    e.trketa=el_tracketa->at(i);
//    e.trkphi=el_trackphi->at(i);    
//    e.trkpt=el_trackpt->at(i);
    e.trketa=el_Unrefittedtrack_eta->at(i);
    e.trkphi=el_Unrefittedtrack_phi->at(i);    
    e.trkpt=el_Unrefittedtrack_pt->at(i);
    e.Ltrk.SetPtEtaPhiM(e.trkpt,e.trketa,e.trkphi,e_mass);
    //<Pt 2, egamma recommended way to reconstruct electron pt>
    if((el_nSCTHits->at(i)+el_nPixHits->at(i))>=4) {e.pt2=e.clE/cosh(e.trketa);}
    else {e.pt2=e.clE/cosh(e.cleta);}
    //<Special Higgs ZZ eID>
//    e.islooseppzz = isLoosePlusPlusH4l(e.cleta,e.clpt,el_Ethad->at(i)/e.clpt,el_Ethad1->at(i)/e.clpt,
//        el_reta->at(i),el_weta2->at(i),el_f1->at(i),el_wstot->at(i),
//        (el_emaxs1->at(i)-el_Emax2->at(i))/(el_emaxs1->at(i)+el_Emax2->at(i)),
//        el_deltaeta1->at(i),el_nSiHits->at(i),el_nSCTOutliers->at(i)+el_nPixelOutliers->at(i),
//        el_nPixHits->at(i), el_nPixelOutliers->at(i), false, false);
//    e.islooseppzz = isLoosePlusPlusH4l(e.cleta,e.clpt,el_Ethad->at(i)/e.clpt,el_Ethad1->at(i)/e.clpt,
//        el_reta->at(i),el_weta2->at(i),el_f1->at(i),el_wstot->at(i),
//        (el_emaxs1->at(i)-el_Emax2->at(i))/(el_emaxs1->at(i)+el_Emax2->at(i)),
//        el_deltaeta1->at(i),el_nSiHits->at(i),el_nSCTOutliers->at(i),
//        el_nPixHits->at(i), el_nPixelOutliers->at(i), false, false);
//    cout << "loadelectron 1" << endl;
    double dpOverp=0.;
    double rTRT=0.;
    rTRT = (el_nTRTHits->at(i)+el_nTRTOutliers->at(i))>0 ? ((double)(el_nTRTHighTHits->at(i)+el_nTRTHighTOutliers->at(i))/(el_nTRTHits->at(i)+el_nTRTOutliers->at(i))) : 0;
//    cout << "loadelectron 2" << endl;
    for(int j=0; j<(int)el_refittedTrack_LMqoverp->at(i).size(); j++) {
        if(el_refittedTrack_author->at(i)[j]==4)
            dpOverp=1.-el_trackqoverp->at(i)/el_refittedTrack_LMqoverp->at(i)[j];
    }
//    cout << "loadelectron 3" << endl;
    double Et_cl           =  el_cl_E->at(i)/cosh(el_etas2->at(i));
    double etas2           =  el_etas2->at(i);
    double rHad            =  el_Ethad->at(i)/Et_cl;
    double rHad1           =  el_Ethad1->at(i)/Et_cl;
    double Reta            =  el_reta->at(i);
    double w2              =  el_weta2->at(i);
    double f1              =  el_f1->at(i);
    double f3              =  el_f3->at(i);
    double wstot           =  el_wstot->at(i); 
    double DEmaxs1         = (el_emaxs1->at(i)-el_Emax2->at(i))/(el_emaxs1->at(i)+el_Emax2->at(i));
    double deltaEta        = el_deltaeta1->at(i);
    double deltaPhiRescaled = el_deltaphiRescaled->at(i);
    int    nSi              = el_nSiHits->at(i);
    int    nSiDeadSensors   = el_nSCTDeadSensors->at(i)+el_nPixelDeadSensors->at(i);
    int    nPix             = el_nPixHits->at(i);
    int    nPixDeadSensors  = el_nPixelDeadSensors->at(i);
    int    nTRThigh         = el_nTRTHighTHits->at(i);
    int    nTRThighOutliers = el_nTRTHighTOutliers->at(i);
    int    nTRT             = el_nTRTHits->at(i);   
    int    nTRTOutliers     = el_nTRTOutliers->at(i);  
    bool   expectBlayer     = el_expectBLayerHit->at(i); 
    int    nBlayerHits      = el_nBLHits->at(i);
    int nTRTTotal = nTRT+nTRTOutliers;

    e.ismultilep=passMultiLepton(etas2, Et_cl,
            rHad, rHad1, Reta, w2,
            f1,f3, wstot, DEmaxs1, 
            deltaEta, nSi,nSiDeadSensors, nPix, 
            nPixDeadSensors,deltaPhiRescaled,dpOverp,
            rTRT,nTRTTotal,nBlayerHits,expectBlayer);

//    cout << "loadelectron 4" << endl;
    //<OQ Quality>
    e.passOQ=!(el_OQ->at(i)&1446);    
    //<The smearing or energy correction>, no electron crack calibration for 2012 data and MC12a
    if(STREAM=="MC" && SETTING[SET]["docorr"]==1) {
        egamma_smear->SetRandomSeed(EventNumber + 100*i);
        //e.clE_corr=e.clE*fabs(egamma_smear->getSmearingCorrectionGeV(e.cleta, e.clE/Unit_GeV, 0, false, "2011"));
        e.clE_corr=e.clE*fabs(egamma_smear->getSmearingCorrectionGeV(e.cleta, e.clE/Unit_GeV, 0, false));
    }
    else if(STREAM!="MC" && SETTING[SET]["docorr"]==1) {
        //e.clE_corr=egamma_smear->applyEnergyCorrectionGeV(e.cleta, e.clphi, e.clE/Unit_GeV, e.pt2/Unit_GeV, 0, "ELECTRON")*Unit_GeV;
        e.clE_corr=egamma_smear->applyEnergyCorrectionMeV(e.cleta, e.clphi, e.clE, e.clE/cosh(e.trketa), 0, "ELECTRON");
    }
    else {e.clE_corr=e.clE;}
    
   //<Egamma Recommended Way to construct Electron LorentzVector>
    //<If electron has less than 4 silicon hits, use el_cl_eta and el_cl_phi>
    //<If electron has more than 4 silicon hits, use el_trk_eta and el_trk_phi / this is always true after medium/tight cut>
    if((el_nSCTHits->at(i)+el_nPixHits->at(i))>=4) { 
        e.pt2=e.clE/cosh(e.trketa);
        e.pt2_corr=e.clE_corr/cosh(e.trketa);
        e.Lori.SetPtEtaPhiM(e.pt2,e.trketa,e.trkphi,e_mass);    
        e.Lcorr.SetPtEtaPhiM(e.pt2_corr,e.trketa,e.trkphi,e_mass); 
    }
    else {
        //e.pt2=e.clE/cosh(e.cleta);
        //e.pt2_corr=e.clE_corr/cosh(e.cleta);  
        e.pt2=e.clE/cosh(e.trketa);
        e.pt2_corr=e.clE_corr/cosh(e.trketa);  
        e.Lori.SetPtEtaPhiM(e.pt2,e.cleta,e.clphi,e_mass);    
        e.Lcorr.SetPtEtaPhiM(e.pt2_corr,e.cleta,e.clphi,e_mass); 
    }

    //<The final LorentzVecor to be used>
    if(SETTING[SET]["docorr"]==1) e.LF=e.Lcorr; 
    else e.LF=e.Lori;
    
    //<Ioslation Variables>
    e.etcone20=el_topoEtcone20->at(i);
    e.etcone30=el_Etcone30->at(i);
    e.etcone40=el_Etcone40->at(i);
    e.ptcone20=el_ptcone20->at(i);
    e.ptcone30=el_ptcone30->at(i);
    e.ptcone40=el_ptcone40->at(i);  
    
    //<The correction to be propogated to MET>
    e.met_corrx=e.Lori.Px()-e.Lcorr.Px();
    e.met_corry=e.Lori.Py()-e.Lcorr.Py();

    //<scale factor, domcwt>1 >
    e.sf_loosepp=e.sf_mediumpp=e.sf_tightpp=1.0;
    if(fabs(e.cleta)<2.47 && e.LF.Pt()>=7.e3 && STREAM=="MC" && SETTING[SET]["domcwt"]>=2) {
        //reco+trk * identification, current support up to 20GeV
        if(e.isloosepp) e.sf_loosepp=egamma_sf->scaleFactor(e.cleta,e.LF.Pt(),30,0,8,1,RunNumber).first*
            egamma_sf->scaleFactor(e.cleta,e.LF.Pt(),4,0,8,1,RunNumber).first;
        //if(e.ismediumpp) e.sf_mediumpp=egamma_sf->scaleFactor(e.cleta,e.LF.Et(),6,0,6).first*
        //    egamma_sf->scaleFactor(e.cleta,e.LF.Et(),4,0,6).first;
        //if(e.istightpp) e.sf_tightpp=egamma_sf->scaleFactor(e.cleta,e.LF.Et(),7,0,6).first*
        //    egamma_sf->scaleFactor(e.cleta,e.LF.Et(),4,0,6).first;
        e.sf_loosepp=e.sf_loosepp>0. ? e.sf_loosepp: 1.0;
        //e.sf_mediumpp=e.sf_mediumpp>0. ? e.sf_mediumpp : 1.0;
        //e.sf_tightpp=e.sf_tightpp>0. ? e.sf_tightpp: 1.0;
    }

    //<electron isolation correction tool>
    e.npv = npv;
    //e.etcone20_corr = CaloIsoCorrection::GetNPVCorrectedIsolation(e.npv, el_etas2->at(i), 20,
    //                STREAM=="MC" ? true:false, e.etcone20, CaloIsoCorrection::ELECTRON);
    //if(SETTING[SET]["docorr"]==1)
    //    e.etcone20 = CaloIsoCorrection::GetNPVCorrectedIsolation(e.npv, el_etas2->at(i), 20,
    //                STREAM=="MC" ? true:false, e.etcone20, CaloIsoCorrection::ELECTRON);
    e.etcone20_corr = CaloIsoCorrection::GetPtEDCorrectedTopoIsolation(el_ED_median->at(i),e.clE_corr,el_etas2->at(i),el_etap->at(i),
            el_cl_eta->at(i),20,STREAM=="MC" ? true:false,e.etcone20,
            el_isConv->at(i),CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);
    if(SETTING[SET]["docorr"]==1)
        e.etcone20 = CaloIsoCorrection::GetPtEDCorrectedTopoIsolation(el_ED_median->at(i),e.clE_corr,el_etas2->at(i),el_etap->at(i),
                el_cl_eta->at(i),20,STREAM=="MC" ? true:false,e.etcone20,
                el_isConv->at(i),CaloIsoCorrection::ELECTRON,CaloIsoCorrection::REL17);

}   


template <typename T>
void HZZAnalysis::FSRPhoton(string str, T& o) {

    if (str=="Add" || str=="ADD" || str=="add") {
	if (o.phtAdded || !o.hasPht) return;
	o.LF += o.LPht;
	o.phtAdded = true;
    }
    else if (str=="Remove" || str=="REMOVE" || str=="remove") {
	if (!o.phtAdded || !o.hasPht) return;
	o.LF -= o.LPht;
	o.phtAdded = false;
    }
    else if (str=="skip");
    else cout<<"ERROR: Option "<<str<<" is not recognized in FSRPhoton!!!"<<endl;

    o.E = o.LF.E(); o.Et = o.LF.Et();
    o.p = o.LF.P(); o.pt = o.LF.Pt();
    o.px = o.LF.Px(); o.py = o.LF.Py(); o.pz = o.LF.Pz();
    o.eta = o.LF.Eta(); o.phi = o.LF.Phi();
}


template <typename T>
void HZZAnalysis::AddPhotonLV(T& o, TLorentzVector Pht) {

    o.hasPht = true;
    o.phtAdded = true;
    o.LPht += Pht; o.LF += Pht;
    FSRPhoton("skip", o);
}


//<HZZAnalysis::JET> ...
void HZZAnalysis::LoadJet(OBJ_JET& j, string SET, int i) {
    /*
    //<Kinematics>
    j.L.SetPtEtaPhiM(jet_AntiKt4TopoEM_pt->at(i), jet_AntiKt4TopoEM_eta->at(i), jet_AntiKt4TopoEM_phi->at(i), jet_AntiKt4TopoEM_m->at(i));    
    j.p=j.L.P(); j.pt=j.L.Pt(); j.px=j.L.Px(); j.py=j.L.Py(); j.pz=j.L.Pz(); 
    j.E=j.L.E(); j.Et=j.L.Et(); j.eta=j.L.Eta(); j.phi=j.L.Phi();
    //<em scale kinematics>
    j.pt_em=jet_AntiKt4TopoEM_emscale_pt->at(i);
    j.eta_em=jet_AntiKt4TopoEM_emscale_eta->at(i);
    j.phi_em=jet_AntiKt4TopoEM_emscale_phi->at(i);
    j.m_em=jet_AntiKt4TopoEM_emscale_m->at(i);
    j.isbad=jet_AntiKt4TopoEM_isBadLoose->at(i);
    j.islooserbad=IsLooserBadJet( j.pt, j.eta_em, jet_AntiKt4TopoEM_sumPtTrk->at(i), jet_AntiKt4TopoEM_LArQuality->at(i),
                              jet_AntiKt4TopoEM_NegativeE->at(i), jet_AntiKt4TopoEM_emfrac->at(i), 
                              jet_AntiKt4TopoEM_hecf->at(i), jet_AntiKt4TopoEM_Timing->at(i),
                              jet_AntiKt4TopoEM_fracSamplingMax->at(i), jet_AntiKt4TopoEM_HECQuality->at(i),
                              jet_AntiKt4TopoEM_AverageLArQF->at(i) );
    j.isugly=jet_AntiKt4TopoEM_isUgly->at(i);
    j.jes=jet_AntiKt4TopoEM_EMJES->at(i);
    j.LEM.SetPtEtaPhiM(j.pt_em*j.jes,j.eta_em,j.phi_em,j.m_em);
    */
}


//<HZZAnalysis::MET> <!Important MET should be loaded after lepton selection>
void HZZAnalysis::LoadMET(OBJ_MET& met, string SET, double corrx_add, double corry_add) {
    
    //<Kinematics>
    double met_muon_x = MET_MuonBoy_et * cos(MET_MuonBoy_phi);
    double met_muon_y = MET_MuonBoy_et * sin(MET_MuonBoy_phi);
    double met_mutrk_x = MET_RefMuon_Track_et * cos(MET_RefMuon_Track_phi);
    double met_mutrk_y = MET_RefMuon_Track_et * sin(MET_RefMuon_Track_phi);
    double met_old_x = MET_LocHadTopo_etx_ForwardReg+MET_LocHadTopo_etx_EndcapRegion+MET_LocHadTopo_etx_CentralReg+met_muon_x-met_mutrk_x;
    double met_old_y = MET_LocHadTopo_ety_ForwardReg+MET_LocHadTopo_ety_EndcapRegion+MET_LocHadTopo_ety_CentralReg+met_muon_y-met_mutrk_y;
    double met_old_et = sqrt(met_old_x*met_old_x + met_old_y*met_old_y);
    met.L_Topo.SetPxPyPzE(met_old_x, met_old_y, 0, met_old_et);
    met.L_RefFinal.SetPxPyPzE(MET_RefFinal_et*cos(MET_RefFinal_phi), MET_RefFinal_et*sin(MET_RefFinal_phi), 0, MET_RefFinal_et);
    met.L=met.L_RefFinal;
    met.pt=met.L.Pt(); met.px=met.L.Px(); met.py=met.L.Py(); met.pz=met.L.Pz(); 
    met.E=met.L.E(); met.Et=met.L.Et(); met.eta=met.L.Eta(); met.phi=met.L.Phi();
    //MET correction from selected muons and electrons
    double corrx=0;
    double corry=0;
    for(int j=0; j<(int)goode_met.size(); j++) {corrx+=goode_met[j].met_corrx; corry+=goode_met[j].met_corry;}
    for(int j=0; j<(int)goodm_met.size(); j++) {corrx+=goodm_met[j].met_corrx; corry+=goodm_met[j].met_corry;}
    corrx += corrx_add;
    corry += corry_add;
    met.px_corr=corrx + met.px;
    met.py_corr=corry + met.py;
    met.pt_corr=sqrt(met.px_corr*met.px_corr+met.py_corr*met.py_corr);
    met.Lcorr.SetPxPyPzE(met.px_corr,met.py_corr,0,met.pt_corr);
    met.L_RefFinal_Corr=met.Lcorr;
    met.L_Topo_Corr.SetPxPyPzE(met.L_Topo.Px()+corrx,met.L_Topo.Py()+corry,0,\
        sqrt(pow(met.L_Topo.Px()+corrx,2)+pow(met.L_Topo.Py()+corry,2)));
    //<The final LorentzVecor to be used>
    if(SETTING[SET]["docorr"]) met.LF=met.Lcorr;
    else met.LF=met.L;

}


