/*
program10.cpp
Dyllan Uplinger
J633V226
Homework #10
Postal Code
Copyright 2017
*/


#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

//using namespace std;


struct Zipcode {
int romanZipcode;
string postnetCode;
// Does not store the leading and trailing 1
};
// Accepts both roman and barcode formats, fills both struct members
Zipcode fillZipcode(const string zip);
// Conversion of roman zip code to bar code
string romanToPOSTNET(const int r);
// Conversion of bar code to roman zip code
int postnetToRoman(const string p);
void printRomanZip(const Zipcode zip);
void printPOSTNET(const Zipcode zip);
// Filename will be the roman zip, contents are graphical bar code
void writeToFile(const Zipcode zip);
/*
* Argument is used to display appropriate prompt to user
* Gets zip code from user
* Creates and assigns to a Zipcode struct
* Prints roman and graphical bar code to screen
* Creates a file whose name is in the format ROMAN.txt where
*     ROMAN is the roman zip code, and the contents are the
*     graphical representation of the bar code
*/
void processZip(int prompt);
int main()
{
int mainMenu;
cout << "This program is able to convert zip codes to a POSTNET format "
<< "and vice versa\n"
<< "\t1. Convert zip code to POSTNET\n"
<< "\t2. Convert POSTNET to zip code\n"
<< "\t3. Quit\n";
do {
cout << "Please make your selection: ";
cin >> mainMenu;
switch(mainMenu) {
case 1:
case 2:
processZip(mainMenu);
break;
default:
if (mainMenu != 3)
cout << "Invalid choice...\n";
else
cout << "\n";
}
} while (mainMenu != 3);
return 0;
}