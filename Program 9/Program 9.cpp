/*
program9.cpp
Dyllan Uplinger
J633V226
Homework #09
Bubble Sort (Dynamic Bubble Sort)
Copyright 2017
*/

#include "stdafx.h"
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>

using std::cout;
using std::ifstream;
using std::ofstream;

int main() {
  double celsius[7][24];
  ifstream fin;
  ofstream fout;

  fin.open("temperature.dat");
  if (fin.fail()) {
    cout << "Failed to open input file. Exiting.... \n";
    exit(1);
  }
  fout.open("temperature.dat");
  if (fout.fail()) {
    cout << "Failed to open output file. Exiting.... \n";
    exit(1);
  }
  fin.close();
  fout.close();
  return 0;
}
