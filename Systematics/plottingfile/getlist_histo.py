#!/usr/bin/python

import sys
import os
import glob

ROOTSYS = '/afs/atlas.umich.edu/opt/root/lib'
sys.path.append(ROOTSYS)
from ROOT import TFile,TTree,TChain,TBranch,TH1,TH1F,TList
from ROOT import gStyle,gDirectory


#############################################################
# A small script to get histogram list from '../../Result" ##
# Meanwhile, put the histogram range info also in the list ##
# Output name may be
# "histoname 
#############################################################

def getlist_histo(folder='../Result',output='./histo.list',**kw):

    # Get all rootfile names
    names=glob.glob('%s/*/*.root' % folder)
    if not names: 
        print 'ERROR ==> No histo exist in folder: %s' % folder
        sys.exit(1)
    # Get the rootfile with maximum size
    maxindex,maxsize=0,0
    for i in range(len(names)):
        thissize=os.path.getsize(names[i])
        if thissize>maxsize: maxindex,maxsize=i,thissize
    filename=names[maxindex]
    # Get the histolist
    histolist=[]
    print 'INFO ==> Will look at file: %s to get histogram list' % filename
    f = TFile(filename)
    if f.IsZombie():
        print 'ERROR ==> Can not open %s as root file' % filename
        sys.exit(1)
    iter=f.GetListOfKeys().MakeIterator()
    key=iter.Next()
    while key:
        if key.GetClassName()=='TH1F': histolist.append(key.GetTitle())
        if key.GetClassName()=='TH2F': histolist.append(key.GetTitle())
        key=iter.Next()
    # Write histolist into output file
    try: out = open(output,'w')
    except IOError: 
        print 'ERROR ==> Can not open output file: %s' % output
        sys.exit(1)
    for histoname in histolist:
        out.write('%s\n' % histoname)
    out.close()    

if __name__ == "__main__":
    getlist_histo(folder='../Result',output='./histo.list')
