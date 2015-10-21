//<run_HZZAnalysis.C>
//<The run script for analysis codes>
//<Usage: root -l -b -q run_HZZAnalysis.C() or Compile it first and then run the executable>
//<Yusheng WU, 2012, CERN>

#include <time.h>
#include <string>
#include <iostream>
#include <iomanip>
#include <fstream>
#include <stdlib.h>
#include <TTree.h>
#include <TChain.h>
#include "HZZAnalysis.h"
#include "TreeBranch.h"
using namespace std;

int run_HZZAnalysis(string stream="MC", string treename="NOM", string inputlist="input_list.txt") {
//int run_HZZAnalysis(string stream="MC", string treename="NOM", string inputlist="input_list.txt") {

    //<A little bit explanation here>
    //stream name:
    //"MC" or "Muons"/"Egamma"
    //tree name: 
    //change the default if neccessary
    //inputlist:
    //put your file list into "input_list.txt"
//    cout << "run_point 1" << endl;    
    //<Evaluate time cost>
    double timedif = 0.;
    time_t start,end;
    time(&start);  
    struct tm * timeinfo;
    timeinfo = localtime(&start);
    string current_time;
    current_time = asctime(timeinfo);
//    cout << "run_point 2" << endl;
    //<Display job information, only for linux system>
    string user, host;
    if(getenv("USER") != NULL) user=getenv("USER");
    if(getenv("HOSTNAME") != NULL) host=getenv("HOSTNAME");
    cout<<endl;
    cout<<"<----------------------->"<<endl;
    cout<<"<Start to run HZZAnalysis>"<<endl;
    cout<<"<----------------------->"<<endl;
    cout<<endl;
    cout<<"User: "<<user<<endl;
    cout<<"Host: "<<host<<endl;
    cout<<"Time: "<<current_time<<endl;
    cout<<endl;
//    cout << "run_point 3" << endl;    

    //<Define root TChain, tree name comes from input>
    TChain *chain = new TChain(treename.c_str());    
    
    //<Get input list>
    ifstream filelist;
    filelist.open(inputlist.c_str());
    if(!filelist.good()) {
        cout<<"ERROR: Cannot find the input filelist, now quit!"<<endl;
        exit(-1);
    }    
//    cout << "run_point 4" << endl;

    //<Add trees into TChain>
    string file;
    while(!filelist.eof()) {
        getline(filelist,file);        
        if(file.size()==0) continue; //remove the blank lines
        cout<<"Add file \""<<file<<"\""<<endl;
        //if dcache, use dcap://dcap.aglt2.org as prefix
        if(file.find("/pnfs")!=string::npos)
            file =  "dcache:" + file;
        chain->Add(file.c_str());
    }   
//    cout << "run_point 5" << endl;

    //<Set up loading options to make it loop faster>
    chain->SetCacheSize(10000000);
    TreeBranch(chain);
//    cout << "run_point 6" << endl;

    //<Process events, do analysis>
    //<Refer to the analysis class for details>
    HZZAnalysis *zz = new HZZAnalysis();
    zz->Init(chain);
//    cout << "run_point 6.1" << endl;
    zz->Begin(chain, stream);
//    cout << "run_point 6.2" << endl;
    long nevts=chain->GetEntriesFast();
//    cout << "run_point 6.21" << endl;
    //long nevts = chain->GetEntries();
//    cout << "run_point 6.3" << endl;
    for(long i=0; i<nevts; i++) {
        //load the D3PD contents
        zz->LoadEntry(i);
//    cout << "run_point 6.4" << endl;
        //consider different settings if any
        MapType2_Int::iterator it;
//    cout << "run_point 6.5" << endl;
        for(it=zz->SETTING.begin();it!=zz->SETTING.end();it++)
            zz->ProcessEntry(i, (*it).first);
//    cout << "run_point 6.6" << endl;
    }
    zz->Terminate();
//    cout << "run_point 7" << endl; 

    //<Job end, calculate how much time elapsed>
    time(&end);
    struct tm * timeinfo2;
    timeinfo2 = localtime(&end);
    string end_time;
    end_time = asctime (timeinfo);
    timedif = difftime(end,start);
//    cout << "run_point 8" << endl;
    cout<<endl;
    cout<<endl;
    cout<<"Job End Time: "<<end_time<<endl;
    if(timedif>3600) {cout<<"Time Cost: "<<setprecision(3)<<timedif/3600.<<" hours"<<endl;}
    else if(timedif>60) {cout<<"Time Cost: "<<setprecision(3)<<timedif/60.<<" minutes"<<endl;}
    else {cout<<"Time Cost: "<<setprecision(3)<<timedif<<" seconds"<<endl;}
    
    //<delete the instance at the end>
    delete zz;
    delete chain;

    //<The END>
    return 0;
}

int main(int argc, char *argv[]) {

//    cout << "run_point 10" << endl;
    if(argc==1) run_HZZAnalysis();
    else if(argc==2) run_HZZAnalysis(argv[1]);
    else if(argc==3) run_HZZAnalysis(argv[1],argv[2]);    
    else if(argc==4) run_HZZAnalysis(argv[1],argv[2],argv[3]);    
    else cout<<"Error => Can not have so many arguments!!! "<<argc-1<<endl;
//    cout << "run_point 11" << endl;
    return 0;
}
