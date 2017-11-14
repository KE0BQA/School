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
void convert(double celsius[][24]);
void showWarmer(double celsius[][24], int days);
double findAverage(double celsius[][24], int days);
void findDailyMaxMinMean(double dayTemps[], double &max, double &min,
                         double &mean);

int main() {
  double celsius[7][24];
  int days = 7;

  cout.setf(std::ios::fixed);
  cout.setf(std::ios::showpoint);
  cout.precision(2);

  input(celsius);
  convert(celsius);
  showWarmer(celsius, days);
  cout << "The average temperature over all the days was: "
       << findAverage(celsius, days);


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
    for (int day = 1; day <= 7; day++) {
      for (int hour = 1; hour <= 24; hour++) {
        fin >> celsius[day][hour];
      }
    }
    fin.close();
  }
}
void convert(double celsius[][24]) {
  for (int day = 1; day <= 7; day++) {
    for (int hour = 1; hour <= 24; hour++) {
      celsius[day][hour] = ((celsius[day][hour] - 32) * 5 / 9);
    }
  }
}
void showWarmer(double celsius[][24], int days) {
  double cutoff = 0;
  cout << "Enter the value for which to find warmer temperatures (C): ";
  cin >> cutoff;
  for (int day = 1; day <= days; day++) {
    for (int hour = 1; hour <= 24; hour++) {
      if (celsius[day][hour] > cutoff)
        cout << "At day " << day << ","
             << " hour " << hour << ","
             << " the temp was " << celsius[day][hour] << " C" << std::endl;
    }
  }
}
double findAverage(double celsius[][24], int days) {
  double total = 0;
  for (int day = 1; day <= days; day++) {
    for (int hour = 1; hour <= 24; hour++) {
      total += celsius[day][hour];
    }
  }
  return (total / (days * 24));
}
void findDailyMaxMinMean(double dayTemps[], double &max, double &min,
                         double &mean) {

}
