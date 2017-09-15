/*
  program3.cpp
  Dyllan Uplinger
  J633V226
  Homework #03
  Calculate Loan Information
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
  loanInterest = (loanInterest / 100);  // changes interest to a decimal

  cout << "Monthly Payment:\n";
  cin >> monthlyPayment;

  for (int year = 1; year <= 3; year++) {
    double yearlyInterest = 0;
    double yearlyPrincipal = 0;
    cout << "Year " << year << setw(20) << "Interest" << setw(25) << "Principal";
    cout << endl;
    cout << setw(10) << "---" << setw(16) << "--------" << setw(25) << "---------";
    cout << endl;
      for (int month = 1; month <= 12; month++) {
        monthlyInterest = (loanAmount * (loanInterest / 12));
        yearlyPrincipal = (yearlyPrincipal + (monthlyPayment - monthlyInterest));
        yearlyInterest = (yearlyInterest + monthlyInterest);
        cout << setw(9) << month << ":" << setw(15) << monthlyInterest;
        cout << setw(25) << (monthlyPayment - monthlyInterest);
        loanAmount = (loanAmount + monthlyInterest);
        loanAmount = (loanAmount - monthlyPayment);
        cout << endl;
      }
      cout << setw(10) << "---" << setw(16) << "--------" << setw(25) << "---------";
      cout << endl;
      cout << "Year " << year << " Totals: " << setw(11) << yearlyInterest << setw(25) << yearlyPrincipal;
      cout << endl;
      cout << "Remaining Balance at year end:" << setw(21) << loanAmount; // fix me
      cout << endl;
      cout << endl;
  }
  return 0;
}
