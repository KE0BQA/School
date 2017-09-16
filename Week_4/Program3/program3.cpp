/*
  program3.cpp
  Dyllan Uplinger
  J633V226
  Homework #03
  Calculate Loan Information
  Copyright 2017
*/

/*
  1. Gather Loan Amount Interest and Monthly Payment
  2. Calculate Monthly Interest
  3. Calculate Monthly Principle
  4. Subtract Principal from Balance
  5. Repeat
  6. Calculate Total Yearly Interest
  7. Calculate Total Monthly Interest
  8. Calculate Total Yearly Balance Remaining 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
  double loanAmount = 0;
  double loanInterest = 0;
  double monthlyPayment = 0;
  double monthlyInterest = 0;

  cout.setf(ios::fixed);
  cout.setf(ios::showpoint);
  cout.precision(2);

  cout << "Amount of Loan:\n";
  cin >> loanAmount;

  cout << "Interest Rate:\n";
  cin >> loanInterest;
  loanInterest = (loanInterest / 100);  // Changes interest to decimal

  cout << "Monthly Payment:\n";
  cin >> monthlyPayment;

  for (int year = 1; year <= 3; year++) {  // Creates 3 Years
    double yearlyInterest = 0;
    double yearlyPrincipal = 0;
    cout << "Year " << year;
    cout << setw(20) << "Interest";
    cout << setw(25) << "Principal";
    cout << endl;
    cout << setw(10) << "---";
    cout << setw(16) << "--------";
    cout << setw(25) << "---------";
    cout << endl;
    for (int month = 1; month <= 12; month++) {  // Creates 12 Months per year
      monthlyInterest = (loanAmount * (loanInterest / 12));
      yearlyPrincipal += (monthlyPayment - monthlyInterest);
      yearlyInterest += monthlyInterest;
      cout << setw(9) << month << ":";
      cout << setw(16) << monthlyInterest;
      cout << setw(25) << (monthlyPayment - monthlyInterest);  // Calculates the Principal
      loanAmount += monthlyInterest;
      loanAmount -= monthlyPayment;
      cout << endl;
    }
    cout << setw(10) << "---";
    cout << setw(16) << "--------";
    cout << setw(25) << "---------";
    cout << endl;
    cout << "Year " << year << " Totals: ";
    cout << setw(11) << yearlyInterest;
    cout << setw(25) << yearlyPrincipal;
    cout << endl;
    cout << "Remaining Balance at year end:";
    cout << setw(21) << loanAmount;
    cout << endl;
    cout << endl;
  }
  return 0;
}
