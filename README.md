# swe1margins
This project is intended to be the repository for code for the Margins Project
Last Updated By: Hassan Karim -- August 22, 2017
Margin Processor – Requirements Document
Advanced Software Engineering 1 – Assignment Project 1 – Fall 2017
Input Specifications
#	Requirements	Answer / Assumptions	Ref
a)	Process a text file															P2S1
b)	Margins and input file are supplied on command line	Might be wrong. 	 	P2S2
    P2S2 could be interpreted as the first 2 characters in the input file 
	should be integers. These characters represent margins from the edges 
	measured in inches
c)	1st argument, fpINFILE, type=FILE, default=DAT1.TXT, input file name 	P2S2
d)	2nd argument, intLeftMargin, type=integer, Left Margin 					P2S2
e)	3rd argument, intRightMargin,type=integer, Right Margin 					P2S2
f)	margin integers represent margins in inches									P2S2
g)	A word = any sequence of non-blank characters, includes punctuations and 	P3S1
	special characters	
h)	Ignore trailing blank spaces	Assumed: Combine white space into 1			P3S2
k)	Line limit	80 characters													P3S5
l)	Create our own tests														P4S1
m)	One test input file should be the assignment file itself					P4S1
n)	All test input files called DAT1.TXT										P4S1
o)	Develop an algorithm														P4S2
t)	Must be developed in C++ or Java											P5S1
q)	??Input and output files must be 80 characters in length??	Assumed: Max 	P6S1
	file name length=80
