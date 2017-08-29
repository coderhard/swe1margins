# swe1margins
This project is intended to be the repository for code for the Margins Project<br>
Last Updated By: Hassan Karim -- August 22, 2017<br>
Margin Processor – Requirements Document<br>
Advanced Software Engineering 1 – Assignment Project 1 – Fall 2017

#Input Specifications
#Requirements  -- Answer / Assumptions  -- Ref<br>
	a)	Process a text file -- P2S1<br>
	b)	Margins and input file are supplied on command line	Might be wrong. -- P2S2<br>
    		P2S2 could be interpreted as the first 2 characters in the input file should be integers. These characters represent margins from the edges 
	measured in inches<br>
	c)	1st argument, fpINFILE, type=FILE, default=DAT1.TXT, input file name 	P2S2<br>
	
d)	2nd argument, intLeftMargin, type=integer, Left Margin 	-----	P2S2<br>
e)	3rd argument, intRightMargin,type=integer, Right Margin	-----	P2S2<br>
f)	margin integers represent margins in inches			-----	P2S2<br>
g)	A word = any sequence of non-blank characters, includes punctuations and special characters		-----	P3S1<br>
h)	Ignore trailing blank spaces	Assumed: Combine white space into 1		-----	P3S2<br>
k)	Line limit	80 characters							-----	P3S5<br>
l)	Create our own tests								-----	P4S1<br>
m)	One test input file should be the assignment file itself			-----	P4S1<br>
n)	All test input files called DAT1.TXT						-----	P4S1<br>
o)	Develop an algorithm								-----	P4S2<br>
t)	Must be developed in C++ or Java						-----	P5S1<br>
q)	??Input and output files must be 80 characters in length??	Assumed: Maxfile name length=80	-----	P6S1<br>
	
