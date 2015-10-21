###################################      
## Set PyRoot Environment first ###
###################################
import sys
ROOTSYS = '/afs/atlas.umich.edu/opt/root/lib'
sys.path.append(ROOTSYS)

#####################
## Import Module  ###
#####################
import time
import array
import socket
import os
import glob
from math import sqrt,fabs,sin
from ROOT import TFile,TTree,TChain,TBranch,TH1F
from ROOT import TLorentzVector
from ROOT import gDirectory,TCanvas,TLegend
from ROOT import TColor

###############################      
## Define the Function Here ###
###############################

def parse_correction_factor(corr):
    # input corr factor can be "A+C/D+E*F" ...
    # will return the value of the expression

    # handle exception first
    ch_permit=['.','+','*']
    for ch in corr:
        if not ch.isdigit() and not ch in ch_permit: 
            print "ERROR => When parse correction factor"
            sys.exit(1)
    # do caculation
    value=0.
    sum_collection=corr.split('+')
    for isum in sum_collection:
        imulti=isum.split('*')
        this_value=1.
        if len(imulti)==1: value+=float(imulti[0])
        else:
            for num in imulti: this_value=this_value*float(num)
            value+=this_value

    return value

def atlas_style():
    #%%%% Set Atlas Style
    from ROOT import gROOT,gStyle
    gROOT.SetMacroPath("/afs/atlas.umich.edu/home/wyusheng/tools/atlas_plot_style/")
    gROOT.LoadMacro("AtlasStyle.C")
    gROOT.ProcessLine("SetAtlasStyle()")
     #gStyle.SetTitleSize(0.035,"x")
     #gStyle.SetTitleSize(0.035,"y")

def color_convert(string=''):
    #%%%% Get the root format color from input string

    # If string='number'
    if string.isdigit(): return int(string)       
 
    # If string='kColor+/-Number'    
    # Should parse the kColor first
    # kWhite=0,kBlack=1,kGray=920,
    # kRed=632,kGreen=416,kBlue=600,kYellow=400,kMagenta=616,kCyan=432,
    # kOrange=800,kSpring=820,kTeal=840,kAzure =860,kViolet=880,kPink=900
    color1,color2=0,0
    dict_color={'kWhite':0,'kBlack':1,'kGray':920,'kRed':632,'kGreen':416,'kBlue':600,'kYellow':400, \
                'kMagenta':616,'kCyan':432,'kOrange':800,'kSpring':820,'kTeal':840,'kAzure':860,\
                'kViolet':880,'kPink':900}
    operator=''
    if '+' in string: operator='+'
    if '-' in string: operator='-'
    if operator: items=string.split(operator)
    else: items=string.split()
    if len(items)==2:
        if not dict_color.has_key(items[0]): return -1
        color1=dict_color[items[0]]
        if items[1].isdigit(): color2=int(items[1])
        else: return -1
        if operator=='+': return color1+color2
        elif operator=='-': return color1-color2
        else: return -1
    elif len(items)==1:
        if not dict_color.has_key(items[0]): return -1
        color1=dict_color[items[0]]
        return color1
    else: return -1
