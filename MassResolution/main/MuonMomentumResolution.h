// MuonMomentumResolution class
// To calculate the muon momentum resolution for MS/ID/total
// <Yutong Pan, 2012>

#ifndef MuonMomentumResolution_h
#define MuonMomentumResolution_h

// Value from note http://arxiv.org/pdf/1201.4704.pdf
/* const double p0_ms[4] = {0.25, 0, 0, 0.15}; */
/* const double p1_ms[4] = {0.0327, 0.0649, 0.0379, 0.0282}; */
/* const double p2_ms[4] = {0.000168, 0.000336, 0.000196, 0.000469}; */
/* const double p1_id[4] = {0.0155, 0.0255, 0.0332, 0.0486}; */
/* const double p2_id[4] = {0.000417, 0.000801, 0.000985, 0.000069}; */

// Value from SmearingClass package
const double p0_ms[4] = {0.24, 0, 0, 0.14};
const double p1_ms[4] = {0.0331, 0.0601, 0.0424, 0.0320};
const double p2_ms[4] = {0.000144, 0.000510, 0.000216, 0.000159};
const double p1_id[4] = {0.0161, 0.0259, 0.0339, 0.0512};
const double p2_id[4] = {0.000363, 0.000412, 0.000662, 0};

const double p0_ms_MC[4] = {0.24, 0, 0, 0.14};
const double p1_ms_MC[4] = {0.02676, 0.04520, 0.03121, 0.02635};
const double p2_ms_MC[4] = {0.000103, 0.000192, 0.00008, 0.000051};
const double p1_id_MC[4] = {0.0161, 0.0259, 0.0339, 0.0512};
const double p2_id_MC[4] = {0.000307, 0.000331, 0.000436, 0};


class MuonMomentumResolution{
public:
    int getRegion(double eta);
    double getMSReso(double pt, double eta, bool isData);
    double getIDReso(double pt, double eta, double theta, bool isData);
    double getMuonReso(double pt, double eta, double theta, double pt_ms, double pt_id, bool isData);
};
#endif
