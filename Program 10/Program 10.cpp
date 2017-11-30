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
    Zipcode.romanZipcode = stoi(zip);
    Zipcode.postnetCode = romanToPOSTNET(stoi(zip));
    break;
  case 27:
    Zipcode.postnetCode = zip;
    Zipcode.romanZipcode = postnetToRoman(zip);
    break;
  }
}
string romanToPOSTNET(const int r)
{
  for (a[i]) {
    if (i == 0) {
      temp += "11000"
    }
    else if (i == 1) {
      temp += "00001"
    }
  }
  return string();
}
int postnetToRoman(const string p) {
  int temp;
  for (int i = 0; i < 26; i++) {
    switch (p(i)) {
    case 1:
      switch (i % 5) {
      case 1:
        temp += 7;
        break;
      case 2:
        temp += 4;
        break;
      case 3:
        temp += 2;
        break;
      case 4:
        temp += 1;
        break;
      }
    }
  }
}
void printRomanZip(const Zipcode zip) {
  string RomanZip;

}
void printPOSTNET(const Zipcode zip) {
  string POSTNET;
}
void writeToFile(const Zipcode zip) {

}
void processZip(int prompt) {
  Zipcode structure;
  string input;
  if (prompt == 1)
    cout << "Enter Zip:";
  else
    cout << "Enter Postnet:";
  cin >> input;
  structure = fillZipcode(input);
}
