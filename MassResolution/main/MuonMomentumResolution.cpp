//<Yutong, Ann Arbor, 2012>

#include "MuonMomentumResolution.h"


#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

int MuonMomentumResolution::getRegion(double eta){
    int region;
    if(fabs(eta)<1.05) region = 0;
    else if(fabs(eta)<1.7) region = 1;
    else if(fabs(eta)<2.0) region = 2;
    else if(fabs(eta)<2.5) region = 3;
    else region = 3; // for |eta|>2.5, use MS resolution of <2.5 for now

    return (region);
}

double MuonMomentumResolution::getMSReso(double pt, double eta, bool isData){
    int r = getRegion(eta);
    double sigma;
    if(isData) sigma = sqrt(pow(p0_ms[r]/pt, 2)+pow(p1_ms[r],2)+pow(p2_ms[r]*pt,2));
    else sigma = sqrt(pow(p0_ms_MC[r]/pt, 2)+pow(p1_ms_MC[r],2)+pow(p2_ms_MC[r]*pt,2));

    return (sigma);
}

double MuonMomentumResolution::getIDReso(double pt, double eta, double theta, bool isData){
    int r = getRegion(eta);
    double sigma;

    if(isData) sigma = sqrt(pow(p1_id[r],2)+pow(p2_id[r]*pt,2));
    else sigma = sqrt(pow(p1_id_MC[r],2)+pow(p2_id_MC[r]*pt,2));
  
    return (sigma);
}

double MuonMomentumResolution::getMuonReso(double pt, double eta, double theta, double pt_ms, double pt_id, bool isData){

    double sigma_ms = getMSReso(pt_ms, eta, isData);
    double sigma_id = getIDReso(pt_id, eta, theta, isData);
    double sigma, deno;

    if(fabs(eta)<2.5) {
        // sigma = sqrt(sigma_ms*sigma_ms+sigma_id*sigma_id);
        deno = pt*sqrt(pow(sigma_id*pt_id,2)+pow(sigma_ms*pt_ms,2));
        if(deno==0) sigma = 0;
        else sigma = sqrt(2)*sigma_id*pt_id*sigma_ms*pt_ms/deno;
    }
    else sigma = sigma_ms;

    //  cout << " deno=" << deno << " sigma=" << sigma << " sigma_ms=" << sigma_ms << " sigma_id=" << sigma_id << " pt=" << pt << " pt_ms=" << pt_ms << " pt_id=" << pt_id << endl;
    return(sigma);
}

