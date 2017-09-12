
/*
	program3.cpp
	Dyllan Uplinger
	J633V226
	Homework #03
	Calculate Loan Information
*/

#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

/*
double calulateMonthlyInterest(double loanAmout, double interest)
double calculateMonthlyPrinciple(double principle, double interest)
*/

int main(void)
{
	double loanAmount;
	double interest;
	double payment;


	cout<<"Amount of Loan\n";
	cin >> loanAmount;

	cout<<"Interest Rate\n";
	cin >> interest;
	
	cout<<"Monthly Payment\n";
	cin >> payment;

	for (int year = 1; year <= 3; year++) {
			cout << "Year " << year << setw(20) << "Interest" << setw(25) << "Principal";
			cout <<endl;
			cout << setw(10) << "---" << setw(16) <<  "--------" << setw(25) << "---------";
			cout<<endl;
		for (int month = 1; month <= 12; month++) {
			cout << setw(10)  << month << setw(16) << "." << setw(25) << ".";
			cout <<endl;
		}
			cout << setw(10) << "---" << setw(16) <<  "--------" << setw(25) << "---------" <<endl;
			cout << endl;
			cout << "Year " << year << " Totals: " << setw(16) << "yearlyInterestTotal" << setw(25) << "yearlyPrincipalTotal" <<endl;
			cout << "Remaining Balance at year end:" << setw(21) << "yearlyBalanceTotal" << endl;
	}

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout <<"EndP"; 

	return 0;
}

/* double calulateMonthlyInterest(loanAmout, interest) {

}

double calculateMonthlyPrinciple(principle, interest) {

}
*/
