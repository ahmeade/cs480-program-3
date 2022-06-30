#Authors: 
#Drew Meade, cssc0828, 822332778
#Dylan James, cssc0821, 823281596

#Class: CS480, Summer 2022
#Assignment: Programming Assignment #1, Process Manager
#File Name: Makefile

#This Makefile was created using a template provided by Professor Shen in another class at SDSU

# CXX Make variable for compiler
CXX=g++
# Make variable for compiler options
#	-std=c++11  C/C++ variant to use, e.g. C++ 2011
#	-g          include information for symbolic debugger e.g. gdb 
CXXFLAGS=-std=c++11 -g -pthread -lrt

# Rules format:
# target : dependency1 dependency2 ... dependencyN
#     Command to make target, uses default rules if not specified

# First target is the one executed if you just type make
# make target specifies a specific target
# $^ is an example of a special variable.  It substitutes all dependencies
mot : mot.o
	$(CXX) $(CXXFLAGS) -o mot $^

mot.o : mot.h mot.cpp

clean :
	rm *.o