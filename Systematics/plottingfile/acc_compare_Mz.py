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
from plot_template_acc import plot_template_acc
from plot_template_combined import plot_template_combined

###############
## Plotting ###
###############
RatioSize=0.2
RatioErr=1
RatioMin,RatioMax=0.5,1.5
RatioAdj=0

############################
## Load Atlas Plot Style ###            
############################

from plot_style import atlas_style
atlas_style()

#ATLAS='ATLAS Preliminary'
ATLAS=' '
figFormat='png'



yscale=1.8

Xmin, Xmax = 30, 120
Rebin=2
Events=str('Events / %dGeV' % Rebin)
hname='hMZ1'
oname='MZ1'
hxt='m_{Z_{1}} [GeV]'
plot_template_acc(hname=hname,oname=oname,hxt=hxt,hyt=Events,hrebin=Rebin,xmin=Xmin,xmax=Xmax,yscale=yscale,ratio=RatioSize,ratio_min=RatioMin,ratio_max=RatioMax,ratio_adj=RatioAdj,ratio_err=RatioErr,showATLAS=ATLAS,figformat=figFormat)

Xmin, Xmax = 5, 120
Rebin=2
Events=str('Events / %dGeV' % Rebin)
hname='hMZ2'
oname='MZ2'
hxt='m_{Z_{2}} [GeV]'
plot_template_acc(hname=hname,oname=oname,hxt=hxt,hyt=Events,hrebin=Rebin,xmin=Xmin,xmax=Xmax,yscale=yscale,ratio=RatioSize,ratio_min=RatioMin,ratio_max=RatioMax,ratio_adj=RatioAdj,ratio_err=RatioErr,showATLAS=ATLAS,figformat=figFormat)

yscale=1.2
Xmin, Xmax = 60, 300
Rebin=5
Events=str('Events / %dGeV' % Rebin)
hname='hMZZ'
oname='MZZ'
hxt='m_{ZZ} [GeV]'
plot_template_acc(hname=hname,oname=oname,hxt=hxt,hyt=Events,hrebin=Rebin,xmin=Xmin,xmax=Xmax,yscale=yscale,ratio=RatioSize,ratio_min=RatioMin,ratio_max=RatioMax,ratio_adj=RatioAdj,ratio_err=RatioErr,showATLAS=ATLAS,figformat=figFormat)

dir='MZ'
if not os.path.isdir(dir): os.mkdir(dir)
cmd='mv *.png '+dir
os.system(cmd)
