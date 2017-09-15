/*
	program3.cpp
	Dyllan Uplinger
	J633V226
	Homework #03
	Calculate Loan Information
*/

/*
	1. Gather Loan Amount Interest and Monthly Payment
	2. Calulate Monthly Interest
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

int main(void)
{
	double loanAmount = 0;
	double interest = 0;
	double payment = 0;
	double yearlyPrincipal = 0;
	double yearlyInterest = 0;
	double yearlyBalance = 0;
	//double monthlyInterest = 0;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "Amount of Loan:\n";
	cin >> loanAmount;

	cout << "Interest Rate:\n";
	cin >> interest;
	interest = interest / 100;

	cout << "Monthly Payment:\n";
	cin >> payment;

	for (int year = 1; year <= 3; year++) {
			cout << "Year " << year << setw(20) << "Interest" << setw(25) << "Principal";
			cout << endl;
			cout << setw(10) << "---" << setw(16) << "--------" << setw(25) << "---------";
			cout<<endl;

		for (int month = 1; month <= 12; month++) {
			double monthlyInterest = 0;
			monthlyInterest = (loanAmount * (interest / 12));
			yearlyBalance = (loanAmount - yearlyPrincipal);
			yearlyPrincipal = (yearlyPrincipal + (payment - monthlyInterest));
			yearlyInterest = (yearlyInterest + monthlyInterest);
			//yearlyBalance = (loanAmount - yearlyPrincipal);
			//yearlyPrincipal = (yearlyPrincipal + (payment - monthlyInterest));
			//yearlyInterest = (yearlyInterest + monthlyInterest);
			cout << setw(10) << month << setw(16) << monthlyInterest; 
			cout << setw(25) << (payment - monthlyInterest);
			//yearlyBalance = (loanAmount - yearlyPrincipal);
			//yearlyPrincipal = (yearlyPrincipal + (payment - monthlyInterest));
			//yearlyInterest = (yearlyInterest + monthlyInterest);
			loanAmount = (loanAmount + monthlyInterest);
			loanAmount = (loanAmount - payment);
			//yearlyBalance = (loanAmount - yearlyPrincipal);
			//yearlyPrincipal = (yearlyPrincipal + (payment - monthlyInterest));
			//yearlyInterest = (yearlyInterest + monthlyInterest);
			cout << endl;
		}
			
			cout << setw(10) << "---" << setw(16) << "--------" << setw(25) << "---------" << endl;
			cout << endl;
			cout << "Year " << year << " Totals: " << setw(11) << yearlyInterest << setw(25) << yearlyPrincipal <<endl;
			cout << "Remaining Balance at year end:" << setw(21) << yearlyBalance << endl <<endl;
	}
	return 0;
}