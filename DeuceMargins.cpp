/*
**
File: DeuceMargins.cpp
Team:	Deuces
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

**
*/
#include <stdlib.h>
#include <iostream>
// #include <ofstream>
#include <fstream>
#include "classSplitString.h"
using namespace std;

int main () {
  string strProgramName;
  string strInFileName;
  string strOutFileName;
  string strLeftMargin;
  string strInLine;
  string strOutContent;
  string strRightMargin;
  string processInputLine(string);
  string strProcessed;
  int intLineCount;

  ifstream fpINFILE;
  fpINFILE.open ("inDAT1.TXT");
  ofstream fpOUTFILE;
  fpOUTFILE.open ("outDAT1.TXT");
  
  if (!fpINFILE.is_open()) {  // Exit, Couldn't open input file
	cout <<  strProgramName <<  ": Error: 2, unable to read from input file, " << strInFileName << endl;
	exit(2);
  }
  if (!fpOUTFILE.is_open()) { // Exit, Couldn't open output file
	cout << strProgramName <<  ": Error: 2, unable to append to output file, " << strOutFileName << endl;
	exit(2);
}
  // Read the first line to get margins
  if (getline (fpINFILE,strInLine)){
	/*
	*	b)	first characters in file represent margins from the edges measured in 	P2S2
	*		inches
	*	c)	1st argument, fpINFILE, type=FILE, default=DAT1.TXT, input file name 	P2S2
	*	d)	2nd argument, intLeftMargin, type=integer, Left Margin 					P2S2
	*	e)	3rd argument, intRightMargin,type=integer, Right Margin 					P2S2
	*	f)	margin integers represent margins in inches									P2S2
	*/
	
	// get 1st two characters of file 
	// are they integers? if not, exit, error 1, margins not specified in input file

	// split remaining content on 1st line on whitespace
  }else{
	cout <<  strProgramName <<  ": Error: 3, unable to get lines from, " << strOutFileName << endl;
	exit(3);
  }
  // Keep getting lines of data until there is no more data to get.
  while ( getline (fpINFILE,strInLine) ){ 
	strProcessed = processInputLine(strInLine);

	// Display reformatted data on the screen
	cout << strLeftMargin << strOutContent << strRightMargin << endl;
	// Put reformatted data in output file
	fpOUTFILE << strLeftMargin << strOutContent << strRightMargin << endl;
  }


  fpINFILE.close();
  fpOUTFILE.close();
  return 0;
}

string processInputLine(string strInLine){
/*
 ***************************************************************************************
	a)	Process a text file															P2S1

g)	A word = any sequence of non-blank characters, includes punctuations and 	P3S1
	special characters	
h)	Ignore trailing blank spaces	Assumed: Combine white space into 1			P3S2
k)	Line limit	80 characters													P3S5
 ***************************************************************************************
 */

  cout << "###LINE BEFORE PROCESSING## \n" << strInLine << "##########" << endl;
  // classSplitString.splitstring()
	splitstring strOutput(strInLine);

    // splits and displays the vector of strings
    vector<string> flds = strOutput.split(' ');
    for (int k = 0; k < flds.size(); k++)
        cout << k << " => " << flds[k] << endl;

    // now taking account of repeated delimiters
    cout << endl << "with repeated delimiters:" << endl;
    vector<string> flds2 = strOutput.split(' ', 1);
    for (int k = 0; k < flds2.size(); k++)
        cout << k << " => " << flds2[k] << endl;
	
 		// do something about lines that dont have 80 characters but have not reached margins
	// @OutLines = split strProcessed on carriage return
	// while (@OutLines)... 
	
 return strOutput;
}
