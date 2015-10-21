#!/usr/bin/python

###############################
## A base function for plots ##
###############################

#######################################################      
## Set PyRoot Environment and PlotConfig Path first ###
#######################################################
import sys
ROOTSYS = '/afs/atlas.umich.edu/opt/root/lib'
sys.path.append(ROOTSYS)
PlotConfig='../'
PlotConfig2='.'
sys.path.append(PlotConfig)
sys.path.append(PlotConfig2)

#####################
## Import Module  ###
#####################
import array
import os
import glob
from math import sqrt,fabs,sin
from ROOT import TFile,TTree,TChain,TBranch,TH1,TH1F,TList
from ROOT import TLorentzVector
from ROOT import THStack,TCanvas,TLegend,TColor,TPaveText
from ROOT import gStyle,gDirectory

####################
## Import Template #
####################
from plot_template import plot_template
from plot_template_combined import plot_template_combined

###############
## Plotting ###
###############
RatioSize=0.2
RatioErr=1
RatioMin,RatioMax=0.5,1.5
RatioAdj=-1

ATLAS='ATLAS Preliminary'

##  CutMll
CutMll_NRePtll_ll, CutMll_NRePtll_em = 5, 5
### Pt, dPhi ranges
PtllMin, PtllMax =  0, 200

figFormat='png'
Rebin=1
Events=str('Events / %dGeV' % Rebin)
plot_template(hname='CutMzWindow_M2l_ee',hxt='m_{ee} [GeV]',hyt=Events,hrebin=Rebin,xmin=76,xmax=106,ratio=RatioSize,ratio_min=RatioMin,ratio_max=RatioMax,ratio_adj=RatioAdj,ratio_err=RatioErr,showATLAS=ATLAS,figformat=figFormat)
plot_template_combined(hname='CutMzWindow_M2l',hxt='m_{ll} [GeV]',hyt=Events,hrebin=Rebin,xmin=76,xmax=106,ratio=RatioSize,ratio_min=RatioMin,ratio_max=RatioMax,ratio_adj=RatioAdj,ratio_err=RatioErr,showATLAS=ATLAS,figformat=figFormat)


ATLAS='ATLAS For Approval'
figFormat='pdf'
Rebin=5
Events=str('Events / %dGeV' % Rebin)
plot_template(hname='CutMzWindow_MET_ee',hxt='E_{T}^{miss} [GeV]',hyt=Events,hrebin=Rebin,xmin=0,xmax=140,ratio=RatioSize,ratio_min=RatioMin,ratio_max=RatioMax,ratio_adj=RatioAdj,ratio_err=RatioErr,showATLAS=ATLAS,figformat=figFormat)
