#include <TH1.h>
#include <TH2.h>
#include <string>
#include <vector>
#include "AtlasStyle.h"
#include <TStyle.h>
#include <TCanvas.h>
#include <TLegend.h>
#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <fstream>
#include <sstream>


using namespace std;


int main() {

cout<<"hello"<<endl;
  string file = "output.txt";

  SetAtlasStyle();
  TCanvas *MyC = new TCanvas("MyC","MyC",800,600);
//  gStyle->SetOptStat(1110);
//  gStyle->SetOptFit(111);
//  gStyle->SetStatX(0.98);
//  gStyle->SetStatW(0.13);

  TH2F * hist_ee = new TH2F("hist_ee","",700,0,700,20000,0,20);
  TH2F * hist_em = new TH2F("hist_em","",700,0,700,20000,0,20);
  TH2F * hist_me = new TH2F("hist_me","",700,0,700,20000,0,20);
  TH2F * hist_mm = new TH2F("hist_mm","",700,0,700,20000,0,20);


  ifstream info;
  info.open(file.c_str());
  if(!info.good()) {
    cout<<"ERROR: Cannot find the input, now quit!"<<endl;
    exit(-1);
  }

  //<Add trees into TChain>
  string line;
  while(!info.eof()) {
    getline(info,line);
    if(line.size()==0) continue; //remove the blank lines

    istringstream iss(line);
    string s;
    vector<string> sline;
    //split the line with space 
    while( getline(iss, s, ' ') ) {
      if(s.size()==0) continue;
      else sline.push_back(s);
    }
    if (sline.size()==0 || line.find("style")!=string::npos) continue;

    string type = sline[0];
    double mass = atof(sline[1].c_str());
    double res = atof(sline[2].c_str());
cout<<"Type: "<<type<<" "<<mass<<" "<<res<<endl;
    if (type=="eeee") hist_ee->Fill(mass,res);
    if (type=="eemm") hist_em->Fill(mass,res);
    if (type=="mmee") hist_me->Fill(mass,res);
    if (type=="mmmm") hist_mm->Fill(mass,res);

  }

  TLegend *lg = new TLegend(0.79, 0.77, 0.91, 0.92); 
  lg->SetFillColor(10);
  lg->SetTextSize(0.045);
  lg->AddEntry(hist_ee,"eeee","P");
  lg->AddEntry(hist_em,"eemm","P");
  lg->AddEntry(hist_me,"mmee","P");
  lg->AddEntry(hist_mm,"mmmm","P");


  hist_ee->SetMarkerStyle(20);
  hist_ee->SetMarkerColor(1);
  hist_em->SetMarkerStyle(24);
  hist_em->SetMarkerColor(2);
  hist_me->SetMarkerStyle(26);
  hist_me->SetMarkerColor(6);
  hist_mm->SetMarkerStyle(22);
  hist_mm->SetMarkerColor(4);

  hist_ee->GetXaxis()->SetRangeUser(80,160);
  hist_ee->GetYaxis()->SetRangeUser(.01,.035);
  hist_em->GetXaxis()->SetRangeUser(80,160);
  hist_em->GetYaxis()->SetRangeUser(.01,.035);
  hist_me->GetXaxis()->SetRangeUser(80,160);
  hist_me->GetYaxis()->SetRangeUser(.01,.035);
  hist_mm->GetXaxis()->SetRangeUser(80,160);
  hist_mm->GetYaxis()->SetRangeUser(.01,.035);


  string name = "incl_MResVsM.png";
  hist_ee->Draw();
  hist_em->Draw("SAME");
  hist_me->Draw("SAME");
  hist_mm->Draw("SAME");
  lg->Draw("SAME");
  MyC->Print(name.c_str());

  hist_ee->GetXaxis()->SetRangeUser(80,600);
  hist_ee->GetYaxis()->SetRangeUser(0,1);
  hist_em->GetXaxis()->SetRangeUser(80,500);
  hist_em->GetYaxis()->SetRangeUser(0,1);
  hist_me->GetXaxis()->SetRangeUser(80,400);
  hist_me->GetYaxis()->SetRangeUser(0,1);
  hist_mm->GetXaxis()->SetRangeUser(80,600);

  name = "eeee_MResVsM.png";
  hist_ee->Draw();
  MyC->Print(name.c_str());

  name = "eemm_MResVsM.png";
  hist_em->Draw();
  MyC->Print(name.c_str());

  name = "mmee_MResVsM.png";
  hist_me->Draw();
  MyC->Print(name.c_str());
 
  name = "mmmm_MResVsM.png";
  hist_mm->Draw();
  MyC->Print(name.c_str());

return 0;
}




