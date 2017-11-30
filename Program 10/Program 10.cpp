/*
program10.cpp
Dyllan Uplinger
J633V226
Homework #10
Postal Code
Copyright 2017
*/

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

struct Zipcode {
  int romanZipcode;
  string postnetCode;
};

Zipcode fillZipcode(const string zip);
string romanToPOSTNET(const int r);
int postnetToRoman(const string p);
void printRomanZip(const Zipcode zip);
void printPOSTNET(const Zipcode zip);
void writeToFile(const Zipcode zip);
void processZip(int prompt);
int main() {
  int mainMenu;
  cout << "This program is able to convert zip codes to a POSTNET format "
       << "and vice versa\n"
       << "\t1. Convert zip code to POSTNET\n"
       << "\t2. Convert POSTNET to zip code\n"
       << "\t3. Quit\n";
  do {
    cout << "Please make your selection: ";
    cin >> mainMenu;
    switch (mainMenu) {
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

Zipcode fillZipcode(const string zip) {
  Zipcode zip;
  auto length = zip.length();
  switch (length) {
  case 5:
    zip.romanZipcode = stoi(zip);
    zip.postnetCode = romanToPOSTNET(stoi(zip));
    break;
  case 27:
    zip.postnetCode = zip;
    zip.romanZipcode = postnetToRoman(zip);
    break;
  }
}
string romanToPOSTNET(const int r) {
  // Loop through Zip
  // Check Each Number
  // Convert to Postnet
  string temp;
  for (int i = 0; temp[i]; i++) {
    switch (i) {
    case 0:
      temp += 11000;
    case 1:
      temp += 00011;
    case 2:
      temp += 00101;
    case 3:
      temp += 00110;
    case 4:
      temp += 01001;
    case 5:
      temp += 01010;
    case 6:
      temp += 01100;
    case 7:
      temp += 10001;
    case 8:
      temp += 10010;
    case 9:
      temp += 10100;
    }
  }
  return string();
}
int postnetToRoman(const string p) {
  // Remove 1st and last 1
  // Break into groups of 5
  // Convert to Roman

  int temp;
  for (int i = 0; i < 27; i++ )
  if (i == 11000) {
    temp += 0;
  } else if (i == 00011) {
    temp += 1;
  } else if (i == 00101) {
    temp += 2;
  } else if (i == 00110) {
    temp += 3;
  } else if (i == 01001) {
    temp += 4;
  } else if (i == 01010) {
    temp += 5;
  } else if (i == 01100) {
    temp += 6;
  } else if (i == 10001) {
    temp += 7;
  } else if (i == 10010) {
    temp += 8;
  } else if (i == 10100) {
    temp += 9;
  }
}
void printRomanZip(const Zipcode zip) {
  string RomanZip;
  Zipcode(romanZipcode) = RomanZip;
  for (int i = 0; i <= 5; i++) {
    cout << RomanZip[i];
  }
  // print Zip Code
}
void printPOSTNET(const Zipcode zip) {
  string POSTNET;
  for (int i = 0; i <= 27; i++) {
    cout << POSTNET[i];
  }
  // print postnet 1 = long 0 = short
}
void writeToFile(const Zipcode zip) {
  // Save file with name of Zip Code
}
void processZip(int prompt) {
  Zipcode structure;
  string input = 0;
  if (prompt == 1) {
    cout << "Enter Zip:";
  } else {
    cout << "Enter Postnet:";
  }
  cin >> input;
  structure = fillZipcode(input);
  cout << structure.postnetCode << std::endl << structure.romanZipcode;
}
