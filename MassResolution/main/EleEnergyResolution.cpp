#include "EleEnergyResolution.h"
#include "EnergyRescaler.h"

#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <iomanip>
#include <cmath>

using namespace std;

double EleEnergyResolution::getResoNonConst(double energy, double cl_eta){
  
    eg2011::EnergyRescaler *eg_smear = new eg2011::EnergyRescaler();

    double a = eg_smear->mcSamplingTerm(cl_eta);
    double b = eg_smear->mcNoiseTerm(cl_eta);
    double sig = sqrt(a*a/energy + b*b/energy/energy);

    return(sig);
}

double EleEnergyResolution::getResoConst(double energy, double cl_eta, bool withCT){

    eg2011::EnergyRescaler *eg_smear = new eg2011::EnergyRescaler();

    double c = eg_smear->mcConstantTerm(cl_eta);
    double d = eg_smear->dataConstantTerm(cl_eta);

    double sig = c;
    if(withCT) sig = sqrt(c*c+d*d);

    return(sig);
}

