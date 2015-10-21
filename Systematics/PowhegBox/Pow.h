//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jul 24 14:21:41 2012 by ROOT version 5.28/00a
// from TTree truth/truth
// found on file: pwgevents.lhe.8TeV.1.root
//////////////////////////////////////////////////////////

#ifndef Pow_h
#define Pow_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

#include <TLorentzVector.h>
#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

class Pow {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           npar;
   Float_t         evt_weight;
   Float_t         evt_scale;
   Float_t         evt_alpha_em;
   Float_t         evt_alpha_qcd;
   vector<int>     *p_id;
   vector<int>     *p_status;
   vector<int>     *p_mother1;
   vector<int>     *p_mother2;
   vector<int>     *p_color1;
   vector<int>     *p_color2;
   vector<float>   *p_px;
   vector<float>   *p_py;
   vector<float>   *p_pz;
   vector<float>   *p_E;
   vector<float>   *p_M;
   vector<float>   *p_lifetime;
   vector<int>     *p_spin;

   // List of branches
   TBranch        *b_npar;   //!
   TBranch        *b_evt_weight;   //!
   TBranch        *b_evt_scale;   //!
   TBranch        *b_evt_alpha_em;   //!
   TBranch        *b_evt_alpha_qcd;   //!
   TBranch        *b_p_id;   //!
   TBranch        *b_p_status;   //!
   TBranch        *b_p_mother1;   //!
   TBranch        *b_p_mother2;   //!
   TBranch        *b_p_color1;   //!
   TBranch        *b_p_color2;   //!
   TBranch        *b_p_px;   //!
   TBranch        *b_p_py;   //!
   TBranch        *b_p_pz;   //!
   TBranch        *b_p_E;   //!
   TBranch        *b_p_M;   //!
   TBranch        *b_p_lifetime;   //!
   TBranch        *b_p_spin;   //!

   Pow(TTree *tree=0);
   virtual ~Pow();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Pow_cxx
Pow::Pow(TTree *tree)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("pwgevents.lhe.8TeV.1.root");
      if (!f) {
         f = new TFile("pwgevents.lhe.8TeV.1.root");
      }
      tree = (TTree*)gDirectory->Get("truth");

   }
   Init(tree);
}

Pow::~Pow()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Pow::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Pow::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!fChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)fChain;
   if (chain->GetTreeNumber() != fCurrent) {
      fCurrent = chain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Pow::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   p_id = 0;
   p_status = 0;
   p_mother1 = 0;
   p_mother2 = 0;
   p_color1 = 0;
   p_color2 = 0;
   p_px = 0;
   p_py = 0;
   p_pz = 0;
   p_E = 0;
   p_M = 0;
   p_lifetime = 0;
   p_spin = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("npar", &npar, &b_npar);
   fChain->SetBranchAddress("evt_weight", &evt_weight, &b_evt_weight);
   fChain->SetBranchAddress("evt_scale", &evt_scale, &b_evt_scale);
   fChain->SetBranchAddress("evt_alpha_em", &evt_alpha_em, &b_evt_alpha_em);
   fChain->SetBranchAddress("evt_alpha_qcd", &evt_alpha_qcd, &b_evt_alpha_qcd);
   fChain->SetBranchAddress("p_id", &p_id, &b_p_id);
   fChain->SetBranchAddress("p_status", &p_status, &b_p_status);
   fChain->SetBranchAddress("p_mother1", &p_mother1, &b_p_mother1);
   fChain->SetBranchAddress("p_mother2", &p_mother2, &b_p_mother2);
   fChain->SetBranchAddress("p_color1", &p_color1, &b_p_color1);
   fChain->SetBranchAddress("p_color2", &p_color2, &b_p_color2);
   fChain->SetBranchAddress("p_px", &p_px, &b_p_px);
   fChain->SetBranchAddress("p_py", &p_py, &b_p_py);
   fChain->SetBranchAddress("p_pz", &p_pz, &b_p_pz);
   fChain->SetBranchAddress("p_E", &p_E, &b_p_E);
   fChain->SetBranchAddress("p_M", &p_M, &b_p_M);
   fChain->SetBranchAddress("p_lifetime", &p_lifetime, &b_p_lifetime);
   fChain->SetBranchAddress("p_spin", &p_spin, &b_p_spin);
   Notify();
}

Bool_t Pow::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Pow::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Pow::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Pow_cxx
