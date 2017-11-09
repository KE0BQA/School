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

using std::cin;
using std::cout;
using std::ifstream;

void input(double celsius[][24]);
// void print(double celsius[][24]);
void convert(double celsius[][24]);
void showWarmer(double celsius[][24], double cutoff);
double findAverage(double celsius[][24]);
void findDailyMMM(double dayTemps[], double &max, double &min, double &mean);

int main() {
  double celsius[7][24];
  double cutoff = 0;

  cout.setf(std::ios::fixed);
  cout.setf(std::ios::showpoint);
  cout.precision(2);

  input(celsius);
  convert(celsius);
  cout << "Enter the value for which to find warmer temperatures (C): ";
  cin >> cutoff;
  showWarmer(celsius, cutoff);
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
/* void print(double celsius[][24]) {
  for (int i = 0; i <= 23; i++) {
    for (int j = 0; j <= 6; j++) {
      cout << celsius[j][i] << " ";
    }
    cout << std::endl;
  }
}
*/
void showWarmer(double celsius[][24], double cutoff) {
  for (int i = 0; i < 23; i++) {
    for (int j = 0; j < 6; j++) {
      if (celsius[j][i] > cutoff)
        cout << "\n"
             << "At day " << j + 1 << ","
             << " hour " << i + 1 << ","
             << "the temp was " << celsius[j][i] << " C"
             << "\n";
    }
  }
}
// double findAverage(double celsius[][24], int days) {}
// void findDailyMMM(double dayTemps[], double &max, double &min, double &mean) {}
