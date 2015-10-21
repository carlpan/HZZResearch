#include "TreeBranch.h"

int TreeBranch(TTree *tree, int DataOrMC, string config) {

    //< tree => input tree pointer
    //  DataOrMC => 0, Data; 1, MC; -1, Select no branches) 
    //  config => the file containing all the branch name to use
    //  the program will first disable all branches and then
    //  enable the selected branches >
    
    //<Open config file>
    ifstream fconfig;
    fconfig.open(config.c_str());
    if(!fconfig.good()) {cout<<"ERROR => Cannot open the input config file "<<config<<"!"<<endl; return -1;}
    
    //<Read the config file and save all need-to-save branches into a array>
    vector<string> branches;
    string branch;
    while(!fconfig.eof()) {
        getline(fconfig,branch);
        if(branch.size()==0) continue; //remove the blank lines
        if(branch[0]=='#') continue; //this line is commented out
        branches.push_back(branch);
    }
    fconfig.close();
    
    //<Set branches using the array>
    tree->SetBranchStatus("*",0);
    for(int i=0; i<(int)branches.size(); i++) {
        if(DataOrMC==0 && branches.at(i).find("mc")!=string::npos) {continue;}
        tree->SetBranchStatus(branches.at(i).c_str(),1);
    }

    return 0;
}
