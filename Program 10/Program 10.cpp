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
  Zipcode temp;
  auto length = zip.length();
  switch (length) {
  case 5:
    temp.romanZipcode = stoi(zip);
    temp.postnetCode = romanToPOSTNET(stoi(zip));
    break;
  case 25:
    temp.postnetCode = zip;
    temp.romanZipcode = postnetToRoman(zip);
    break;
  }
  return temp;
}
string romanToPOSTNET(const int r) {
  // Loop through Zip
  // Check Each Number
  // Convert to Postnet
  string postnet;
  string zip = std::to_string(r);
  for (int i = 0; i < 5; i++) {
    switch (zip[i]) {
    case '0':
      postnet += "11000";
    case '1':
      postnet += "00011";
    case '2':
      postnet += "00101";
    case '3':
      postnet += "00110";
    case '4':
      postnet += "01001";
    case '5':
      postnet += "01010";
    case '6':
      postnet += "01100";
    case '7':
      postnet += "10001";
    case '8':
      postnet += "10010";
    case '9':
      postnet += "10100";
    }
  }
  return postnet;
}
int postnetToRoman(const string p) {
  string roman;
  for (int i = 0; i < 5; i++) {
    string temp;
    temp = p.substr(5 * i, 5);
    if (temp == "11000") {
      roman += '0';
    } else if (temp == "00011") {
      roman += '1';
    } else if (temp == "00101") {
      roman += '2';
    } else if (temp == "00110") {
      roman += '3';
    } else if (temp == "01001") {
      roman += '4';
    } else if (temp == "01010") {
      roman += '5';
    } else if (temp == "01100") {
      roman += '6';
    } else if (temp == "10001") {
      roman += '7';
    } else if (temp == "10010") {
      roman += '8';
    } else if (temp == "10100") {
      roman += '9';
    }
  }
  return stoi(roman);
}
void printRomanZip(const Zipcode zip) {
  string RomanZip;
  for (int i = 0; i <= 5; i++) {
    cout << RomanZip[i];
  }
}
void printPOSTNET(const Zipcode zip) {
  string POSTNET;
  for (int i = 0; i <= 25; i++) {
    cout << POSTNET[i];
  }
  // print postnet 1 = long 0 = short
}
void writeToFile(const Zipcode zip) {
  // Save file with name of Zip Code
}
void processZip(int prompt) {
  Zipcode structure;
  string input;
  if (prompt == 1) {
    cout << "Enter Zip:";
  } else {
    cout << "Enter Postnet:";
  }
  cin >> input;
  structure = fillZipcode(input);
  printRomanZip;
  printPOSTNET;
  // cout << structure.postnetCode << std::endl << structure.romanZipcode << std::endl;
}
