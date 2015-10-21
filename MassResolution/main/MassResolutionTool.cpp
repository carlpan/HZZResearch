//<MassResolutionTool.h>
//<Calculate Higgs mass resolution from momentum resolution of four leptons for H->ZZ->4l analysis>
//<Yutong, Ann Arbor, 2012>

#include "HZZAnalysis.h"
#include "MuonMomentumResolution.h"
//#include "EleEnergyResolution.h"
#include <math.h>


//<HZZAnalysis::GetMassReso> ...
double HZZAnalysis::GetMassReso(Quad Higgs, bool isData){
    pair<double, double> Presos;
    double reso = 0;
    double reso_const = 0;
    double angle = 0;
    double P[4] = {0};
    double res[4] = {0};
    double res_const[4] = {0};
    double ddp[4] = {0};
    int i_mu = 0;

    MuonMomentumResolution *muRes;
    // EleEnergyResolution *elRes;

    // compute momentum and corresponding resolution of each lepton
    for(int i=0; i<4; i++){
        if(Higgs.flavor_lep[i]==0) {
            P[i] = Higgs.lepton[i].E();
            res[i] = egamma_smear->resolution(P[i]/Unit_GeV, Higgs.lepton[i].Eta(), isData);

            //res[i] = elRes->getResoNonConst(P[i]/Unit_GeV, Higgs.lepton[i].Eta());
            //res_const[i] = elRes->getResoConst(P[i]/Unit_GeV, Higgs.lepton[i].Eta(), isData);

            //cout << "ELE :: i=" << i << " p=" << P[i] << " eta=" << Higgs.lepton[i].Eta() << " res=" << res[i] << endl;

        } else {
            P[i] = Higgs.lepton[i].P();
      
            i_mu = (int)Higgs.index_lep[i];

            // Use the MuonMomentumResolution class (Xuefei) to compute resolution from the parameterization of 2011 data
            // http://arxiv.org/pdf/1201.4704.pdf

            // Combined muon
            if((goodm[i_mu].author==6||goodm[i_mu].author==7) && goodm[i_mu].issa==0)
                res[i] = muRes->getMuonReso(Higgs.lepton[i].Pt()/Unit_GeV, Higgs.lepton[i].Eta(), Higgs.lepton[i].Theta(), goodm[i_mu].ptme/Unit_GeV, goodm[i_mu].ptid/Unit_GeV, isData);
      
            // Standalone muon
            if(goodm[i_mu].author==6 && goodm[i_mu].issa==1)
                res[i] = muRes->getMSReso(goodm[i_mu].ptme/Unit_GeV, Higgs.lepton[i].Eta(), isData);
      
            // CaloTag muon
            if(goodm[i_mu].author==16)
                res[i] = muRes->getIDReso(goodm[i_mu].ptid/Unit_GeV, Higgs.lepton[i].Eta(), Higgs.lepton[i].Theta(), isData);

            // Use the ExpectedResolution function in the SmearingClass to compute resolution
            // Do not use, gives wrong results
            // res[i] = mcp_smear->ExpectedResolution("CB");

            res_const[i] = 0;
        }
    }


    // compute dM/dp
    for(int i=0; i<4; i++){

        //cout << "i=" << i << " p=" << P[i] << " res=" << res[i] << endl;

        for(int j=0; j<4; j++){
            if(i==j) continue;
            angle = Higgs.lepton[i].Angle(Higgs.lepton[j].Vect());
            ddp[i] += P[j]*(1-cos(angle))/Higgs.ZZ.M();
            // cout << " j=" << j << " p=" << P[j] << " angle=" << cos(angle) << " ddp=" << ddp[i] << endl;
        }

        reso += pow(ddp[i]*P[i]*res[i], 2);
        reso_const += ddp[i]*P[i]*res_const[i];
    }

    //reso = sqrt(reso);
    return reso = sqrt(reso) + reso_const;
}
