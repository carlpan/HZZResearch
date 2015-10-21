# Use the following on IRIX 6.5 and Linux 2.4
# Last tested with p15.06.01
#

ROOTLIBS = `/afs/atlas.umich.edu/opt/root/bin/root-config --libs`
OPTCOMP  = `/afs/atlas.umich.edu/opt/root/bin/root-config --cflags`

SPECIALFLAGS= --exceptions
CFLAGS = -I. 
LFLAGS =

RCXX = $(CFLAGS) $(ROOTCFLAGS)
DBG = -g -L -O
CC = g++ ${DBG} $(RCXX) $(OPTCOMP) 
F77 = f77

all: run

run:  run.C   Pow.C   Pow.h
	$(CC) run.C  Pow.C  $(ROOTLIBS) -o $@

clean:
	\rm -f *.o
