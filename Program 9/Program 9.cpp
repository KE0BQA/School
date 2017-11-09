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

void input(double celsius[][24]);
void print(double celsius[][24]);
void convert(double celsius[][24]);

int main() {
  double celsius[7][24];

  cout.setf(std::ios::fixed);
  cout.setf(std::ios::showpoint);
  cout.precision(2);

  input(celsius);
  convert(celsius);
  return 0;
}

void input(double celsius[][24]) {
  ifstream fin;
  fin.open("temperature.dat");
  if (fin.fail()) {
    cout << "Failed to open input file. Exiting.... \n";
    exit(1);
  }
  while (!(fin.eof())) {
    for (int i = 0; i <= 23; i++) {
      for (int j = 0; j <= 6; j++) {
        fin >> celsius[j][i];
      }
    }
    fin.close();
  }
}
void convert(double celsius[][24]) {
  for (int i = 0; i <= 23; i++) {
    for (int j = 0; j <= 6; j++) {
      celsius[j][i] = ((celsius[j][i] - 32) * 5 / 9);
    }
  }
}
void print(double celsius[][24]) {
  for (int i = 0; i <= 23; i++) {
    for (int j = 0; j <= 6; j++) {
      cout << celsius[j][i] << " ";
    }
    cout << std::endl;
  }
}
