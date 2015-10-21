#!/usr/bin/python

import sys
import os
import glob

#############################################################
## Read Configure Info from Configure File                ###
## Parse the info, search and combine datasets into       ###
## python dictionary ( the return value of this function) ###
#############################################################

def plot_config(configfile='plot_configure',**kw):

    ############
    ## Start ###
    ###########
    print 'INFO ==> Start to parse the config file'

    #######################
    ## Define Dictionary ##
    #######################

    list_sample=[]
    list_inputdataset=[]
    dict_mcinfo={}
    dict_read={}
    dict_parsed={}

    ##################################################################
    ## Part1: Read the configuration File, put info into dict_read ###
    ##################################################################

#    print 'INFO1 ==> Start to parse the config file'
    try: f_config=open(configfile,'r')
    except IOError:
        print 'ERROR ==> This file can not be opened %s !!!' % configfile
        sys.exit(1)
    for this_line in f_config.readlines():
        # Drop the CR if there is one at the end of this line
        if this_line[-1]=='\n': line=this_line[:-1]
        else : line=this_line
        # Split the line
        sline=line.split()
        # Skip empty line
        if len(sline)==0 : continue
        # Skip comment line in config file, '#' need to be at the very beginning of the line        
        if ('#' in this_line) and sline[0][0]=='#' : continue
        # GetInfo, write settings into dicts
        # 1) Write global setting variables into dicts
        if len(sline)==2 : dict_read[sline[0]]=sline[1]
        # 2) Write dataset related info into dicts
        if len(sline)>2 :
            sub_dict={}
            sub_dict['OverLay']=sline[1]
            sub_dict['ID']=sline[2]
            sub_dict['Color']=sline[3]
            if len(sline)==5 : sub_dict['Corr']=sline[4]
            else: sub_dict['Corr']='1.0'
            dict_read[sline[0]]=sub_dict
            list_sample.append(sline[0])

    ################################################################
    ## Part2: Check global settings, and load files if necessary ###
    ################################################################
   
#    print 'INFO2 ==> Start to parse the config file'
    # Check and open files
    try: 
        f_list=open(dict_read['DatasetList'],'r')
        f_mcinfo=open(dict_read['MCInfo'],'r') 
    except IOError:
        print 'ERROR ==> These file can not be open %s or %s!!!' % (dict_read['DatasetList'],dict_read['MCInfo'])
        sys.exit(1)
    # Load DataSetList into a list
    for this_line in f_list.readlines():
        if this_line[-1]=='\n': line=this_line[:-1]
        else: line=this_line
        list_inputdataset.append(line) 
    # Load MCinfo into a dict
    for this_line in f_mcinfo.readlines():
        if this_line[-1]=='\n': line=this_line[:-1]
        else: line=this_line
        items=line.split()
        if len(items)<1: continue
        if items[0]=='MCID': continue #skip first line
        if ('#' in line) and items[0][0]=='#' : continue
        # the line format in mcinfo file is: 
        # MCID:Sample:Generator:Nevts(Total):Xsection(pb):k-factor:FilterEff(gen):Nevts(Weight):ConfigTag
        #new format 01/09/2012
        # MCID:sample(tag):k_factor:filter_eff:xs(pb):Nevt:Nevt_weighted
        # sample(tag) example: mc11_7TeV.106011.gg2WW0240_JIMMY_WW_enuenu.merge.NTUP_SMWZ.e968_s1310_s1300_r2920_r2900_p833_tid620721_00
        sub_dict={}
        #keys=['Sample','Generator','Nevts(Total)','Nevts(Weight)','k-factor','FilterEff(gen)','Xsection(pb)'] 
        keys=['Sample','k-factor','FilterEff(gen)','Xsection(pb)','Nevts(Total)','Nevts(Weight)'] 
        sub_items=items[1].split('.')
        sample=sub_items[2] #sample
        tag=sub_items[5] #tid
        for i in range(len(keys)):            
            if i==0: sub_dict['Sample']=sample
            else: sub_dict[keys[i]]=items[i+1]
        if not dict_mcinfo.has_key(items[0]):
            dict_mcinfo[items[0]]={}
        if len(items)==7: dict_mcinfo[items[0]][tag]=sub_dict
        else:  dict_mcinfo[items[0]]['default']=sub_dict

    ###############################
    ## Part3: ID match function ###
    ###############################
#    print 'INFO3 ==> Start to parse the config file'

    #%%%% Define the ID match function first, we need this function to
    #%%%% use a string(e.g. AAAA-BBBB) to identify which mc/data datasets
    #%%%% will be included in this Process
    def id_match(sample,string):

        # 'sample' should be samples name, e.g.  mc09_7TeV.106044.XXXX
        #  split the sample name by '.' snd grab 'id' from second place
        items_sample=sample.split('.')
        if len(items_sample)<2: return -1
        id=items_sample[1]
        if id.isdigit(): id='%d' % int(id)

        # Handle Exception
        if len(string)==0 : return -1
        
        # Match the patterns: if matched, return 1; if not matched, return 0; for exception, return -1
        # Pattern strings are seperated by ','
        patterns=string.split(',')
        for this_pattern in patterns:

            str_id=''
            str_tag=''
            match_id,match_tag=0,0
            # If this_pattern = "IDIDID:TAGTAGTAG" => str_id="IDIDID", str_tag="TAGTAGTAG"
            if ':' in this_pattern:
                items=this_pattern.split(':')
                if len(items)<2: return -1
                str_tag=items[1]
                str_id=items[0]
            if not str_id: str_id=this_pattern
            # if the pattern string contains multiple tags, use '/' for separation
            # match_tag will be true if one of the tags are matched
            if str_tag=='': match_tag=1
            else:
                list_tag=str_tag.split('/')
                for tag in list_tag: 
                    if tag in sample: match_tag=1
            # If '-' in str_id 
            if '-' in str_id:
                range=str_id.split('-')
                if len(range)!=2: return -1
                if (not range[0].isdigit()) or (not range[1].isdigit()): return -1
                if id.isdigit() and int(id)<=int(range[1]) and int(id)>=int(range[0]): match_id=1
            # If str_id is AAAA+  
            elif '+' in str_id:
                items=str_id.split('+')
                if len(items)<1: return -1
                if items[0] in sample: match_id=1
            # If str_id is AAAA
            else:
                if str_id==id: match_id=1

            # combine match_id and match_tag
            if match_id==1 and match_tag==1: return 1
        return 0

    ##################################################################################
    ## Part4: Begin to Parse and Write All Parsed info into New dict 'dict_parsed' ###
    ##################################################################################
#    print 'INFO5 ==> Start to parse the config file'

    #%%%% The structure for 'dict_parsed' will be
    #%%%% >> GlobalVariables:Value
    #%%%% >> List of samples category: 'data sig bg dijet ...'
    #%%%% >> In each category:
    #%%%% >>   If Data =>  Color, dataset_folder1, dataset_folder2, ...
    #%%%% >>   If MC   =>  Color, ExtraCorrFactor, MCID1
    #%%%% >>                                         File1: k_factor, mc_xs, mc_fe, mc_weightedentry
    #%%%% >>                                         File2: k_factor, mc_xs, mc_fe, mc_weightedentry  
    #%%%% >>                                       MCID2 ...
 
    from plot_style import parse_correction_factor

    #%%%% Write Global variables into 'dict_parsed'
    dict_parsed['IntLumi']=parse_correction_factor(dict_read['IntLumi'])    
    dict_parsed['MCScale']=parse_correction_factor(dict_read['MCScale'])    
    dict_parsed['Datasets']=list_sample

    #%%%% Loop 'list_inputdataset', match datasets
    for sample in list_sample:
        # Make sure this sample name exist in both list and dict
        if not dict_read.has_key(sample) :
            print 'ERROR ==> key %s not exist in dict_read?'
            sys.exit(1)
        # Write dict_parsed
        dict_parsed[sample]={}
        dict_parsed[sample]['OverLay']=dict_read[sample]['OverLay']
        dict_parsed[sample]['Color']=dict_read[sample]['Color']
        dict_parsed[sample]['Corr']=parse_correction_factor(dict_read[sample]['Corr'])
        # Parse the RunPeriod/MCID
        for dataset in list_inputdataset:
            items=dataset.split('/')        
            if len(items)<1: continue
            if id_match(items[-1],dict_read[sample]['ID']) == 1:
                # If data, create a empty sub key with the name: dataset
                if 'data' in items[-1]: dict_parsed[sample][dataset]={}
                # If mc, create a empty sub key with the name: dataset
                if 'mc' in items[-1]: 
                    mcid=items[-1].split('.')[1]
                    if not dict_parsed[sample].has_key(mcid): dict_parsed[sample][mcid]={}
                    dict_parsed[sample][mcid][dataset]={}
            if id_match(items[-1],dict_read[sample]['ID']) == -1:
                print 'ERROR ==> There are errors when trying to match "%s" with pattern "%s"' % (items[-1],dict_read[sample]['ID'])
                print 'ERROR ==> Please chech this carefully'
                sys.exit(1) 

#    print 'INFO6 ==> Start to parse the config file'
    #%%%% Write MC Info into 'dict_parsed'
    for sample in list_sample:
        for key_mcid in dict_parsed[sample].keys():
            if key_mcid=='Color' or key_mcid=='Corr' or key_mcid=='OverLay' or ('data' in key_mcid): continue
#            print sample+'   '+key_mcid
            for key_dataset in dict_parsed[sample][key_mcid].keys():
                for key_mcinfo in dict_mcinfo.keys():
                    matched=0
                    matched_tag=''
                    if key_mcinfo in key_dataset:
                        tags=dict_mcinfo[key_mcinfo].keys()
                        ##print tags
                        if len(tags)==1 and tags[0]=='default': 
                            matched=1
                            matched_tag='default'
                        else:
                            for tag in tags:
                                if tag in key_dataset:
                                    matched=1
                                    matched_tag=tag
                    if matched==1:
                        dict_parsed[sample][key_mcid][key_dataset]['Xsection(pb)']=dict_mcinfo[key_mcinfo][matched_tag]['Xsection(pb)']
                        dict_parsed[sample][key_mcid][key_dataset]['k-factor']=dict_mcinfo[key_mcinfo][matched_tag]['k-factor']
                        dict_parsed[sample][key_mcid][key_dataset]['FilterEff(gen)']=dict_mcinfo[key_mcinfo][matched_tag]['FilterEff(gen)']
                        dict_parsed[sample][key_mcid][key_dataset]['Nevts(Weight)']=dict_mcinfo[key_mcinfo][matched_tag]['Nevts(Weight)']
 			##print  dict_parsed[sample][key_mcid][key_dataset]['Xsection(pb)']
			##print  dict_parsed[sample][key_mcid][key_dataset]['k-factor']
			##print  dict_parsed[sample][key_mcid][key_dataset]['FilterEff(gen)']
			##print  dict_parsed[sample][key_mcid][key_dataset]['Nevts(Weight)']

    ###################################
    ## Part5: Done, return the dict ###
    ###################################
    print 'INFO ==> Done!'
    return dict_parsed


###################
## Main Function ##
###################
if __name__ == "__main__":
    dict_parsed=plot_config()
    print 'INFO ==> The pharsed dict is '
    for key in dict_parsed.keys():
        print '%s:' % key,dict_parsed[key]
