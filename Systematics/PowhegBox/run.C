//<Cut-flow study on PowhegBox MC
//<Yutong Pan, July 2012, Ann Arbor>

#include <vector>
#include <iostream>
#include <fstream>
#include <string.h>
#include <cmath>

#include "Pow.h"

int run(string inputlist="input_list.txt", string treename="truth") {

	//<Get input list>
    ifstream filelist;
    filelist.open(inputlist.c_str());
    if(!filelist.good()) {
        cout<<"ERROR: Cannot find the input filelist, now quit!"<<endl;
        exit(-1);
    }

	//<Define root TChain, tree name comes from input>
    TChain *chain = new TChain(treename.c_str());

	//<Add trees into TChain>
    string file;
    while(!filelist.eof()) {
        getline(filelist,file);
        if(file.size()==0) continue; //remove the blank lines
        cout<<"Add file \""<<file<<"\""<<endl;
        chain->Add(file.c_str());
    }

    //<Set up loading options to make it loop faster>
    chain->SetCacheSize(10000000);
	
	Pow *myPow = new Pow();
	myPow->Init(chain);
	myPow->Loop();

}

int main(int argc, char* argv[]) {

	if(argc==1) run();
    else if(argc==2) run(argv[1]);
    else if(argc==3) run(argv[1],argv[2]);

	return 0;
}
