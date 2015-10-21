//<AnalysisVar.C>
//<Aim to provide variables and objects for analysis>
//<Yusheng WU, April 2011, Ann Arbor>

#include "AnalysisVar.h"

//<AnalysisVar::ClearFlags>
void AnalysisVar::ClearFlags(MapType_Int& map) {

    MapType_Int::iterator it;
    for(it=map.begin(); it!=map.end(); it++) {
        string varname = (*it).first;
        map[varname] = 0;
    }        
}

void AnalysisVar::ClearFlags(MapType2_Int& map) {

    MapType2_Int::iterator it;
    for(it=map.begin(); it!=map.end(); it++) {
        MapType_Int::iterator it2;
        string chn=(*it).first;
        for(it2=(*it).second.begin(); it2!=(*it).second.end(); it2++) {
            string cut=(*it2).first;
            map[chn][cut] = 0;
        }
    }    
}

//<AnalysisVar::ClearVariables>
void AnalysisVar::ClearVariables(MapType_Double& map) {
    
    MapType_Double::iterator it;
    for(it=map.begin(); it!=map.end(); it++)
        map[(*it).first]=0.;
}

//<AnalysisVar::ClearVariables>
void AnalysisVar::ClearVariables(MapType_VDoubleStar& map) {

    MapType_VDoubleStar::iterator it;
    for(it=map.begin(); it!=map.end(); it++)
        map[(*it).first]->clear();

}

//<AnalysisVar::ClearWeight>
void AnalysisVar::ClearWeight(MapType_VDouble& map) {
    MapType_VDouble::iterator it;
    for(it=map.begin(); it!=map.end(); it++)
        for(int i=0; i<(int)map[(*it).first].size();i++)
            map[(*it).first].at(i)=1.0;
}

//<AnalysisVar::CreateCountingMap>
void AnalysisVar::CreateCountingMap() {
    
    //<Event Counting>
    for(int i=0; i<(int)CHN.size(); i++) {
        string chn=CHN[i];
        for(int j=0; j<(int)STEP_cut.size(); j++) {
            string cut=STEP_cut[j];
            for(int k=0; k<(int)SETNAME.size();k++) {
                COUNT ini={0.,0.};
                CNT_cut[SETNAME[k]][chn][cut]=ini;
            }
            FLAG_cut[chn][cut]=FLAG_cut_temp[chn][cut]=0;
        }
    }
    //<Object Counting>
    MapType_VString::iterator it;
    for(it=STEP_obj.begin(); it!=STEP_obj.end(); it++) {
        string obj=(*it).first;
        for(int i=0; i<(int)(*it).second.size(); i++) {
            string cut=STEP_obj[obj][i];
            for(int k=0; k<(int)SETNAME.size();k++) {
               COUNT ini={0.,0.};
               CNT_obj[SETNAME[k]][obj][cut]=ini;
            }
            FLAG_obj[obj][cut]=FLAG_obj_temp[obj][cut]=0;
        }
    }
    
    //<Weight Map, currently set 8 bits, if not enough can add>
    for(int j=0; j<(int)STEP_cut.size(); j++) {
        string cut=STEP_cut[j];
        vector<double> weight;
        weight.push_back(1.0);
        weight.push_back(1.0);
        weight.push_back(1.0);
        weight.push_back(1.0);
        weight.push_back(1.0);
        weight.push_back(1.0);
        weight.push_back(1.0);
        weight.push_back(1.0);
        Evt_Weight[cut]=weight;
    }
    
}

//<AnalysisVar::SetFlag>
void AnalysisVar::SetFlag(MapType2_Int& map, string cut, string chn, int value) {

    if(chn=="All" || chn=="ALL" || chn=="all") {
        for(int i=0; i<(int)CHN.size(); i++) {
            string chn1=CHN[i];
            map[chn1][cut]=value;
        }
    }
    else {
       map[chn][cut]=value; 
    } 
}

//<AnalysisVar::DoCounting>
void AnalysisVar::DoCounting(vector<string> STEP, MapType2_Int FLAG_temp, MapType2_Int& FLAG, MapType2_Counting& CNT, string chn, int applyweight) {

    int pass=1;
    for(int i=0; i<(int)STEP.size(); i++) {
        string cut = STEP[i];
        double wt_all=1.0;
        if(applyweight==1) {
            for(int j=0; j<(int)Evt_Weight[cut].size();j++)
                wt_all *= Evt_Weight[cut][j];
        }
        if(pass==0) continue;
        pass = pass && FLAG_temp[chn][cut];
        if(pass==1) {
            FLAG[chn][cut]=1;
            CNT[chn][cut].num += wt_all * 1.0; 
            CNT[chn][cut].err = sqrt(pow(CNT[chn][cut].err,2)+pow(wt_all,2));
        }
    }
}

void AnalysisVar::DoCountingCut(string setname) {

    //if no setname in SETNAME vector, raise error
    if(find(SETNAME.begin(),SETNAME.end(),setname)==SETNAME.end()) {
        cout<<"Error => Can not find setting "<<setname<<endl;
        exit(-1);
    }

    for(int i=0; i<(int)CHN.size(); i++)
        if(CHN[i]!="incl")
            DoCounting(STEP_cut,FLAG_cut_temp,FLAG_cut,CNT_cut[setname],CHN[i],1);

    for(int i=0; i<(int)CHN.size(); i++)
        for(int j=0; j<(int)STEP_cut.size(); j++) {
            string chn2=CHN[i];
            string cut=STEP_cut[j];
            FLAG_cut_temp["incl"][cut]=FLAG_cut_temp["incl"][cut] || FLAG_cut[chn2][cut];
        }
    DoCounting(STEP_cut,FLAG_cut_temp,FLAG_cut,CNT_cut[setname],"incl",1);         
        
}

void AnalysisVar::DoCountingObj(string obj, string setname) {
    
    //if no setname in SETNAME vector, raise error
    if(find(SETNAME.begin(),SETNAME.end(),setname)==SETNAME.end()) {
        cout<<"Error => Can not find setting "<<setname<<endl;
        exit(-1);
    }

    if(obj=="All" || obj=="ALL" || obj=="all") {
        MapType_VString::iterator it;
        for(it=STEP_obj.begin(); it!=STEP_obj.end(); it++)
            DoCounting((*it).second, FLAG_obj_temp, FLAG_obj, CNT_obj[setname], (*it).first,0);
    }
    else {
        DoCounting(STEP_obj[obj], FLAG_obj_temp, FLAG_obj, CNT_obj[setname], obj,0);
    }
}

//<AnalysisVar::CreateTreeVarHistoMap>
void AnalysisVar::CreateTreeVarHistoMap() {

    //Check that histo file must exist
    if(!HistoFile) {
        cout<<"ERROR => Histogram file not exist !!!"<<endl;
        cout<<"ERROR => Now quitting"<<endl;
    }
    HistoFile->cd();
    
    //Create subfolders in the root file according to setting names
    for(int i=0; i<(int)SETNAME.size();i++) {
        HistoFile->mkdir(SETNAME[i].c_str());
    }

    // TreeVar & 1-Dimension histogram
    MapType2_Double::iterator it;
    for(it=VarName.begin(); it!=VarName.end(); it++) {
        //<Prepare Variables>
        string varname=(*it).first;
        //<Create Tree Variable First>
        int nbin=0, option=0, cutstep=0, vec=0;
        float xlow=0., xhigh=0.;
        nbin = int((*it).second["NBins"]);
        xlow = double((*it).second["Xmin"]);
        xhigh = double((*it).second["Xmax"]);
        option = int((*it).second["Option"]);
        cutstep = int((*it).second["CutStep"]);
        vec = int((*it).second["Vector"]);
        //<Initialize variable>
        if(vec==1) {
            vector<double>* tmp = new vector<double>();
            VVar[varname] = tmp;
        }
        else Var[varname]=0.;
        if(option==InTreeOnly) continue;
        //<Create Histograms>
        for(int i=0; i<(int)CHN.size(); i++) {
            string chn=CHN[i];
            for(int j=0; j<(int)STEP_cut.size(); j++) {
                if( j<cutstep || (j!=-1*cutstep && cutstep<0) ) continue;            
                string cut=STEP_cut[j];
                for(int k=0; k<(int)SETNAME.size();k++) {
                    if(SETTING[SETNAME[k]]["dohistogram"]==0) continue;
                    HistoFile->cd(SETNAME[k].c_str());
                    string histo_name= SETNAME[k] + "_" + chn + "_" + cut + "_" + varname;
                    TH1F *histo_pointer = new TH1F(histo_name.c_str(),histo_name.c_str(),nbin,xlow,xhigh);
                    histo_pointer->Sumw2();
                    histo[SETNAME[k]][chn][cut][varname]=histo_pointer;
                 }//for::k
            }//for:j
        }//for:i
    }// for:it
    
    // 2-Dimension histogram
    for(int i=0; i<(int)CHN.size(); i++) {
        string chn=CHN[i];
        for(int j=0; j<(int)STEP_cut.size(); j++) {
            string cut=STEP_cut[j];    
            MapType2_VDouble::iterator it2;            
            for(it2=helper_2D.begin(); it2!=helper_2D.end(); it2++) {
                int should_keep=0;
                string base_name=(*it2).first;
                string histo2D_name = chn + "_" + cut + "_" + base_name;       
                vector<double> var1_range, var2_range;
                MapType_VDouble::iterator it3;
                for(it3=(*it2).second.begin(); it3!=(*it2).second.end(); it3++) {
                    string name = (*it3).first;
                    vector<double> setting = (*it3).second;
                    if((j>=setting[4] && setting[4]>=0) || (j==-1*setting[4] && setting[4]<0)) should_keep=1;
                    if(setting[0]==1) {
                        var1_range.push_back(setting[1]);
                        var1_range.push_back(setting[2]);
                        var1_range.push_back(setting[3]);
                    }
                    if(setting[0]==2) {
                        var2_range.push_back(setting[1]);
                        var2_range.push_back(setting[2]);
                        var2_range.push_back(setting[3]);
                    }
                }
                if(!should_keep) continue;
                for(int k=0; k<(int)SETNAME.size();k++) {
                    if(SETTING[SETNAME[k]]["dohistogram"]==0) continue;
                    HistoFile->cd(SETNAME[k].c_str());
                    histo2D_name = SETNAME[k] + "_" + histo2D_name;
                    TH2F *histo2D_pointer = new TH2F(histo2D_name.c_str(),histo2D_name.c_str(),\
                                                    (int)var1_range[0],var1_range[1],var1_range[2],\
                                                    (int)var2_range[0],var2_range[1],var2_range[2]);
                                                
                    histo2D_pointer->Sumw2();
                    histo_2D[SETNAME[k]][chn][cut][base_name]=histo2D_pointer;
                }
            }
        }
    }
    
}

//<AnalysisVar::AddVarIntoTree>
void AnalysisVar::AddVarIntoTree(TTree *tree) {

    //<loop the "treeVar" map to automatically add branches to tree>
    //<To make life easier, all variables are set to be "double">
    MapType2_Double::iterator it;
    for(it=VarName.begin(); it!=VarName.end(); it++) {
        string varname = (*it).first;
        if(VarName[varname]["Vector"])
            tree->Branch(varname.c_str(),"vector<double>",&VVar[varname]);
        else
            tree->Branch(varname.c_str(),&Var[varname]);
    }
    
    //<Also add event selection flags into trees for further look>
    MapType2_Int::iterator it2;
    for(it2=FLAG_cut.begin(); it2!=FLAG_cut.end(); it2++) {
        string chn=(*it2).first;
        MapType_Int::iterator it3;
        for(it3=(*it2).second.begin(); it3!=(*it2).second.end(); it3++) {
            string cut=(*it3).first;
            string varname="FLAG_"+chn+"_"+cut;
            string varname2="FLAG_"+chn+"_"+cut+"/I";
            tree->Branch(varname.c_str(),&FLAG_cut[chn][cut],varname2.c_str());
        }
    }
}

//<AnalysisVar::FillHistograms>
void AnalysisVar::FillHistograms(string setname) {

    //if no setname in SETNAME vector, raise error
    if(find(SETNAME.begin(),SETNAME.end(),setname)==SETNAME.end()) {
        cout<<"Error => Can not find setting "<<setname<<endl;
        exit(-1);
    }

    if(SETTING[setname]["dohistogram"]==0) return;

    //<fill 1D histogram>
    MapType2_Double::iterator it;
    for(it=VarName.begin(); it!=VarName.end(); it++) {
        string varname = (*it).first;
        for(int j=0; j<(int)STEP_cut.size(); j++) {
            string cut = STEP_cut[j];
            int cutstep = (int) VarName[varname]["CutStep"];
            if(j<cutstep || (j!=-1*cutstep && cutstep<0)) continue;
            for(int i=0; i<(int)CHN.size(); i++) {
                string chn = CHN[i];
                double wt_all=1.0, wt_nopileup=1.0, wt_nosf=1.0, wt_nosfnopileup=1.0, wt_histo=1.0;
                wt_all=Evt_Weight[cut][0]*Evt_Weight[cut][1]*Evt_Weight[cut][2]*Evt_Weight[cut][3];
                wt_nopileup=Evt_Weight[cut][0]*Evt_Weight[cut][2]*Evt_Weight[cut][3];
                wt_nosf=Evt_Weight[cut][0]*Evt_Weight[cut][1]*Evt_Weight[cut][3];
                wt_nosfnopileup=Evt_Weight[cut][0]*Evt_Weight[cut][3];

                if(FLAG_cut[chn][cut]) {
                    //get weights
                    if(VarName[varname]["Option"]==InBothNoPileup) wt_histo = wt_nopileup;
                    else if(VarName[varname]["Option"]==InBothNoSF) wt_histo = wt_nosf;
                    else if(VarName[varname]["Option"]==InBothNoPileupNoSF) wt_histo = wt_nosfnopileup;
                    else wt_histo = wt_all;
                    //handle if variable is single or vector
                    vector<double> tmp;
                    if(VarName[varname]["Vector"]) {
                        for(int k=0; k<(int)VVar[varname]->size(); k++)
                            tmp.push_back(VVar[varname]->at(k));
                    
                    }
                    else tmp.push_back(Var[varname]);
                    //fill histogram
                    for(int k=0; k<(int)tmp.size(); k++)
                    histo[setname][chn][cut][varname]->Fill(tmp[k],wt_histo);
                }
            } // for i
        } // for j
    }
    
    //<fill 2D histogram>
    MapType2_VDouble::iterator it2;            
    for(it2=helper_2D.begin(); it2!=helper_2D.end(); it2++) {
        string base_name = (*it2).first;
        string var1,var2;
        MapType_VDouble::iterator it3;
        int cutstep=0;
        //get the x,y component varname
        for(it3=(*it2).second.begin(); it3!=(*it2).second.end(); it3++) {
            string name = (*it3).first;
            vector<double> setting = (*it3).second;        
            if(setting[0]==1) {var1=name;}
            if(setting[0]==2) {var2=name;}
            cutstep=(int)setting[4];
        }
        //if any of the two is vector, then raise error
        if(VarName[var1]["Vector"] || VarName[var2]["Vector"]) {
            cout<<"Error => This 2D histogram can't be filled, since vector component exists, "
                <<base_name<<endl;
            exit(-1);
        }
        //fill 2d
        for(int i=0; i<(int)STEP_cut.size(); i++) {
            string cut = STEP_cut[i];
            if(i<cutstep || (i!=-1*cutstep && cutstep<0)) continue;
            for(int j=0; j<(int)CHN.size(); j++) {
                string chn = CHN[j];
                double wt_all=1.0;
                wt_all=Evt_Weight[cut][0]*Evt_Weight[cut][1]*Evt_Weight[cut][2]*Evt_Weight[cut][3];
                if(FLAG_cut[chn][cut]) {histo_2D[setname][chn][cut][base_name]->Fill(Var[var1],Var[var2],wt_all);}
            }
        }
    }
    
}

//<AnalysisVar::CreateRootFile>
TFile* AnalysisVar::CreateRootFile(string filename) {

    TFile *rootfile = new TFile(filename.c_str(), "recreate"); 
    if(!rootfile) {
        cout<<"ERROR => Can not open RootFile "<<filename<<endl;
        exit(-1);        
    }
    return rootfile;
    
}

//<AnalysisVar::CreateAllFiles>
void AnalysisVar::CreateAllFiles(string filename) {

    string filename1 = filename + "_tree.root";
    TreeFile = CreateRootFile(filename1);
    string filename2 = filename + "_histo.root";
    HistoFile = CreateRootFile(filename2);
    
}  
    
//<AnalysisVar::InitStrVec>
void AnalysisVar::InitStrVec(vector<string>& out, string in, string de) {
    int pos=0, pos_pre=0;
    while(true) {
        pos=in.find(de,pos_pre);
        if(pos==-1) {out.push_back(in.substr(pos_pre,in.size()-pos_pre)); break;}
        else out.push_back(in.substr(pos_pre,pos-pos_pre));
        pos_pre=pos+1;
    }
}

//<AnalysisVar::ToString>
string AnalysisVar::ToString(int number) {
    stringstream ss;
    ss << number;
    return ss.str();
}
string AnalysisVar::ToString(double number) {
    stringstream ss;
    ss << number;
    return ss.str();
}

//<AnalysisVar::InitSTEP>
void AnalysisVar::InitSTEP(vector<string>& STEP, string steps) {
    InitStrVec(STEP, steps, ",");
}
void AnalysisVar::InitSTEP(MapType_VString& STEP, string obj, string steps) {
    vector<string> str;
    InitStrVec(str, steps, ",");
    STEP[obj]=str;
}

//<AnalysisVar::InitVar>
void AnalysisVar::InitVar(string varlist, int nbin, double xmin, double xmax, int cutstep, int option, int vec) {
    vector<string> variables;
    InitStrVec(variables, varlist, ",");
    for(int i=0; i<(int)variables.size(); i++) {
        VarName[variables[i]]["NBins"]=nbin;
        VarName[variables[i]]["Xmin"]=xmin;
        VarName[variables[i]]["Xmax"]=xmax;
        VarName[variables[i]]["Option"]=(double)option;        
        VarName[variables[i]]["CutStep"]=(double)cutstep;   
        VarName[variables[i]]["Vector"]=(double)vec;
    }
}

//<AnalysisVar::InitSetting>
void AnalysisVar::InitSetting(MapType2_Int& setmap, string setname, string settings) {
    vector<string> vsettings;
    InitStrVec(vsettings, settings, ",");
    for(int i=0; i<(int)vsettings.size(); i++) {
        vector<string> pairs;
        InitStrVec(pairs,vsettings[i],"=");
        if(pairs.size()<2) {
            cout<<"Error in setting: can not parse "<<vsettings[i]<<endl; 
            exit(-1);
        }
        setmap[setname][pairs[0]]=atoi(pairs[1].c_str());
    }
}

//<AnalysisVar::InitSetting>
void AnalysisVar::InitSetting(MapType2_Double& setmap, string setname, string settings) {
    vector<string> vsettings;
    InitStrVec(vsettings, settings, ",");
    for(int i=0; i<(int)vsettings.size(); i++) {
        vector<string> pairs;
        InitStrVec(pairs,vsettings[i],"=");
        if(pairs.size()<2) {
            cout<<"Error in setting: can not parse "<<vsettings[i]<<endl; 
            exit(-1);
        }
        setmap[setname][pairs[0]]=atof(pairs[1].c_str());
    }
}

//<AnalysisVar::Init2DHelper>
void AnalysisVar::Init2DHelper(string var1, int nbinx, double xmin, double xmax, string var2, int nbiny, double ymin, double ymax, int cutstep) {
        
    string histo_name=var1+"_"+var2;
    vector<double> setting_var1, setting_var2;
    setting_var1.push_back(1);
    setting_var1.push_back(nbinx);
    setting_var1.push_back(xmin);
    setting_var1.push_back(xmax);
    setting_var1.push_back(cutstep);
    setting_var2.push_back(2);
    setting_var2.push_back(nbiny);
    setting_var2.push_back(ymin);
    setting_var2.push_back(ymax);    
    setting_var2.push_back(cutstep);    
    helper_2D[histo_name][var1]=setting_var1;
    helper_2D[histo_name][var2]=setting_var2;
    
}

//<AnalysisVar::SetVar>
void AnalysisVar::SetVar(string name, double value) {
    Var[name]=value;
}
