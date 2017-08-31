/* 	
	program1.cpp
	Dyllan Uplinger
	20170831
	J633V226
	Homework #01
	Prompt user for two Numbers and choice of operation; will display results
*/

#include <iostream>

using namespace std;

int main()
{
	int firstIntegar;
	int secondIntegar;
	int operation;
	int finalValue = 0;

	cout <<"Enter The First Integer:\n";
	cin >> firstIntegar;

	cout <<"Enter The Second Integar:\n";
	cin >> secondIntegar;

	cout <<"Available Operations are:\n\t1.) Addition\n\t2.) Subtraction\n\t3.) Multiplication\n\t4.) Division\nPlease Select a Number:\n";
	cin >> operation;

	//Preventing Divide by 0
	if (operation == 4 && secondIntegar == 0) {
			cout <<"Can Not Divide by Zero; Program Exiting\n";
			return 0;
	}

	//Preventing Invalid Operations
	if (operation > 4 || operation < 1){
		cout <<" \n Invalid Operation. Valid Choices were 1, 2, 3 or 4. Quitting Program\n";
	}

	if (operation == 1)	{
		finalValue = firstIntegar + secondIntegar;
		cout << firstIntegar << " + " << secondIntegar << " = " << finalValue <<"\n";
	} else if (operation == 2) {
		finalValue = firstIntegar - secondIntegar;
		cout << firstIntegar << " - " << secondIntegar << " = " << finalValue <<"\n";
	} else if (operation == 3) {
		finalValue = firstIntegar * secondIntegar;
		cout << firstIntegar << " * " << secondIntegar << " = " << finalValue <<"\n";
	} else if (operation == 4) {
		finalValue = firstIntegar / secondIntegar;
		cout << firstIntegar << " / " << secondIntegar << " = " << finalValue <<"\n";
	}
	return 0;
}
