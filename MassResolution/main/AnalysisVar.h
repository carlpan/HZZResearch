//<AnalysisVar.h>
//<Aim to provide variables and objects for analysis>
//<Yusheng WU, April 2011, Ann Arbor>

#ifndef AnalysisVar_h
#define AnalysisVar_h

#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <math.h> 
#include <string>
#include <map>
#include <vector>
#include <TH1F.h>
#include <TH2F.h>
#include <TFile.h>
#include <TTree.h>
#include <TLorentzVector.h>

//<Use STD map datatypes to manage counting and histograms>
using namespace std;

//<Use this struct for base element in cut flow, {num,error}>
typedef struct{
    double num;
    double err;
} COUNT; 

//<Map type STRING:COUNT...>
typedef map<string, COUNT> MapType_Counting;
typedef map<string, map<string,COUNT> > MapType2_Counting;
typedef map<string, map<string,map<string,COUNT> > > MapType3_Counting;

//<Map type STRING:INT...>
typedef map<string, int> MapType_Int;
typedef map<string, map<string,int> > MapType2_Int;

//<Map type STRING:STRING...>
typedef map<string, string> MapType_String;
typedef map<string, vector<string> > MapType_VString;

//<Map type STRING:DOUBLE...>
typedef map<string, double> MapType_Double;
typedef map<string, vector<double> > MapType_VDouble;
typedef map<string, vector<double>* > MapType_VDoubleStar;
typedef map<string, map<string, double> > MapType2_Double;
typedef map<string, map<string, vector<double> > > MapType2_VDouble;

//<Map type STRING:TH1F...>
typedef map<string, TH1F*> MapType_TH1F;
typedef map<string, map<string,TH1F*> > MapType2_TH1F;
typedef map<string, map<string,map<string,TH1F*> > > MapType3_TH1F;
typedef map<string, map<string,map<string,map<string,TH1F*> > > > MapType4_TH1F;
typedef map<string, vector<TH1F*> > MapType_VTH1F;
typedef map<string, map<string,vector<TH1F*> > > MapType2_VTH1F;
typedef map<string, map<string,map<string,vector<TH1F*> > > > MapType3_VTH1F;

//<Map type STRING:TH2F...>
typedef map<string, TH2F*> MapType_TH2F;
typedef map<string, map<string,TH2F*> > MapType2_TH2F;
typedef map<string, map<string,map<string,TH2F*> > > MapType3_TH2F;
typedef map<string, map<string,map<string,map<string, TH2F*> > > > MapType4_TH2F;

//<Map type STRING:TTree...>
typedef map<string, TTree*> MapType_TTree;

//<Options for Variables to determine using which event weight to fill into histograms>
enum {InBoth,InBothNoPileup,InBothNoSF,InBothNoPileupNoSF,InTreeOnly,InHistoOnly};

//<AnalysisVar Class>
class AnalysisVar {

    public:        
    
        //<Settings in the analysis>
        //<SETTING => setting name: {set1:var1, set2:var2}>
        //<CUTVAR => setting name: {set1:var1, set2:var2}>
        vector<string> SETNAME;
        MapType2_Int SETTING;
        MapType2_Double CUTVAR;

        //<Define analysis channels>
        vector<string> CHN;       
    
        //<Define analysis steps / cut steps>
        vector<string> STEP_cut; // For event selection
        MapType_VString STEP_obj; // For object selection
 
        //<Define interested variables, to be filled in trees or histograms>
        //Name: {NBins, Xmin, Xmax, CutStep, Option,VectorOrNot}
        //NBins, Xmin, Xmax -> used to create histogram for this variable
        //CutStep -> used to decide at which step the variable will be filled in histograms,
        //positive number means this step and after, negative number means exactly at this step
        //Option -> in histogram/in tree/ using which weight...
        //VectorOrNot -> this variable shall be vector or not
        MapType2_Double VarName; 
       
        //<Define Cut Flow Maps>
        //1. Event Counting Map: CNT_XX
        //"setting name" : "Channel" : "CutName" : {number of events, statistic errors}
        //"setting name" : "obj" : "CutName" : {number of events, statistic errors}
        //2. PassFlag for Selection: FLAG_XX
        //"Channel/Obj" : "CutName" : 0 or 1
        //*. Use FLAG_XX_temp first to compute decision
        MapType3_Counting CNT_cut; 
        MapType2_Int     FLAG_cut,FLAG_cut_temp; 
        MapType3_Counting CNT_obj;
        MapType2_Int     FLAG_obj,FLAG_obj_temp;
                
        //<Define the event weight map>
        //i.e. event weights can be different at different cut stages
        //CutName : (Generator Weight, Pileup Weight, Reco SF, Trigger SF, Bunch/Train Weight ...)
        //Make sure you understand exactly what each element of the array means
        MapType_VDouble Evt_Weight;
                
        //<Define Tree Variables and Histogram Maps>        
        //Fill the variables defined in "VarName" into both trees and histograms
        //1. Tree Variable
        //"Variable" : double
        //2. Histogram Map
        //<- TH1F>
        //"SettingName" : "Channel" : "CutName" : "Variable" : TH1F*
        //<- TH2F>
        //"SeetingName" : "Channel" : "CutName" : "Var1_Var2" : TH2F*
        //<- TH2F Helper>
        //"Var1_Var2" : "Var1"{1,xbins,xmin,xmax},"Var2"{2,ybins,ymin,ymax}
        MapType_Double Var;
        MapType_VDoubleStar VVar;
        MapType4_TH1F histo;
        MapType4_TH2F histo_2D;
        MapType2_VDouble helper_2D;
        
        //<Eventually, you'd like to create root files to store
        //trees of pre-selected events and histograms on disk>
        TFile *TreeFile, *HistoFile;      
        MapType_TTree Tree;
        
        //<Functions for Creating ROOT files>
        TFile* CreateRootFile(string);
        void CreateAllFiles(string);
      
        //<Function for Initializing a string vector by a single string using delimition of ','>
        void InitStrVec(vector<string>& out, string in, string de=",");
        
        //<Function for set up setting maps>
        void InitSetting(MapType2_Int& setmap, string setname, string settings);
        void InitSetting(MapType2_Double& setmap, string setname, string settings);

        //<Functions for Initing STEPs and VARs>
        void InitSTEP(vector<string>& STEP, string steps);
        void InitSTEP(MapType_VString& STEP, string obj, string steps);
        void InitVar(string varlist, int nbin, double xmin, double xmax, int cutstep=0, int option=InBoth, int vec=0);
        void Init2DHelper(string var1, int nbinx, double xmin, double xmax, string var2, int nbiny, double ymin, double ymax, int cutstep=0);
        void SetVar(string name, double value);
      
        //<Convert Int/Double to String>
        string ToString(int number);
        string ToString(double number);        
        
        //<Functions for Initializing and Clearing maps>
        void ClearFlags(MapType_Int& map);
        void ClearFlags(MapType2_Int& map);
        void ClearVariables(MapType_Double& map);
        void ClearVariables(MapType_VDoubleStar& map);
        void ClearWeight(MapType_VDouble& map);
        void CreateCountingMap();
        
        //<Functions for Setting Flags, Set "chn" to "ALL" to set all channels>
        void SetFlag(MapType2_Int& map, string cut, string chn, int value);        
        
        //<Functions for Computing Cut Flags and Combining Counting>
        void DoCounting(vector<string> STEP_cut, MapType2_Int FLAG_obj_temp, MapType2_Int& FLAG_obj, MapType2_Counting& CNT_obj, string chn, int applyweight);
        void DoCountingCut(string setname);
        void DoCountingObj(string obj, string setname); // Set obj to "All" to count all objects
                     
        //<Functions for Filling Trees and Histograms>
        void CreateTreeVarHistoMap();
        void AddVarIntoTree(TTree *tree);
        void FillHistograms(string setname);        
      
};

#endif
