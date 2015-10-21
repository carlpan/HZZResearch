// EleEnergyResolution Class
// To calculate the E-dependent terms and constant term in electron energy resolution separately
// <Yutong Pan, 2012>

#ifndef EleEnergyResolution_h
#define EleEnergyResolution_h

class EleEnergyResolution{
public:
    double getResoNonConst(double energy, double cl_eta);
    double getResoConst(double energy, double cl_eta, bool withCT);

};
#endif
