# <Makefile for Higgs ZZ Analysis>
# <Yushneg Wu @ 2012>

#<Related Directory>
Main=main
Side=side
Extra=/atlas/data18a/bili/work/ZZ/tools/SVNPackages/MyUtils/code

#<Code Search Path>
VPATH=$(Main):$(Side):$(Extra)

#<ROOT Lib and Include>
RootLibs=`root-config --libs`
RootHeader=`root-config --cflags`

#<Compiler Setting>
INC = -I. -I$(Main) -I$(Side) -I$(Extra)
OPT = -O3
CC = g++ $(OPT) $(INC) $(RootHeader) 

#<Code>
RootDict=$(Main)/Dict.cpp
RootClass=D3PDAnalysisBase.h
RootLinkDef=LinkDef.h
ifeq ($(wildcard $(Main)/Dict*cpp),$(RootDict))
        SRC_CPP=$(wildcard $(Main)/*.cpp $(Side)/*.cpp)
else
        SRC_CPP=$(wildcard $(Main)/*.cpp $(Side)/*.cpp) $(RootDict)
endif
OBJ_CPP=$(SRC_CPP:.cpp=.o)
SRC_CXX=$(wildcard $(Main)/*.cxx $(Side)/*.cxx)
OBJ_CXX=$(SRC_CXX:.cxx=.o)
SRC_C=$(wildcard $(Main)/*.C $(Side)/*.C)
OBJ_C=$(SRC_C:.C=.o)
OBJ_EXTRA=$(wildcard $(Extra)/*.o)
EXE=run-hzz.exe

#<Rules>

all : $(RootDict) $(EXE)

$(RootDict) : $(RootClass) $(RootLinkDef) 
	@echo "<Generate ROOT dicts>"
	rootcint -v4 -f $(RootDict) -c $(INC) $(RootClass) $(RootLinkDef)

$(EXE) : $(OBJ_CPP) $(OBJ_CXX) $(OBJ_C)
	@echo "<Now link objects to executable>"
	$(CC) -o $@ $^ $(OBJ_EXTRA) $(RootLibs)

$(OBJ_CPP) : %.o : %.cpp
	$(CC) -c $< -o $@

$(OBJ_CXX) : %.o : %.cxx
	$(CC) -c $< -o $@

$(OBJ_C) : %.o : %.C
	$(CC) -c $< -o $@

clean:
	\rm -f *.o *.so *.exe
	\rm -f $(Main)/*.o $(Main)/*.so $(Main)/*.exe
	\rm -f $(Side)/*.o $(Side)/*.so $(Side)/*.exe
