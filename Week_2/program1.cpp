/* 	program1.cpp
	Dyllan Uplinger
	20170829
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

	cout <<"Enter The First Integer: \n";
	cin >> firstIntegar;

	cout <<"Enter The Second Integar: \n";
	cin >> secondIntegar;

	cout <<"Available Operations are:\n\t1.) Addition\n\t2.) Subtraction\n\t3.) Multiplication\n\t4.) Division \nPlease Select a Number: \n";
	cin >> operation;

	if (operation == 4 && secondIntegar == 0)
		{
			cout <<"Can Not Divide by Zero; Program Exiting";
			return 0;
		}

	if (operation == 1)
		{
			finalValue = firstIntegar + secondIntegar;
			cout << firstIntegar << " + " << secondIntegar << " = " << finalValue;
			cout << "\n Final Value is: "<< finalValue;
		}

	if (operation == 2)
		{
			finalValue = firstIntegar - secondIntegar;
			cout << firstIntegar << " - " << secondIntegar << " = " << finalValue;
			cout << "\n Final Value is: "<< finalValue;
		}
	if (operation == 3)
		{
			finalValue = firstIntegar * secondIntegar;
			cout << firstIntegar << " * " << secondIntegar << " = " << finalValue;
			cout << "\n Final Value is: "<< finalValue;
		
		}
	if (operation == 4)
		{
			finalValue = firstIntegar / secondIntegar;
			cout << firstIntegar << " / " << secondIntegar << " = " << finalValue;
			cout << "\n Final Value is: "<< finalValue;
		}
	if (operation > 4 || operation < 1)
	{
	cout <<" \n Invalid Operation. Valid Choices were 1, 2, 3 or 4. Quitting Program";
	}

	return 0;
}

