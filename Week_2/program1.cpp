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

	cout <<"Enter First Integer: \n";
	cin >> firstIntegar;

	cout <<"Enter Second Integar: \n";
	cin >> secondIntegar;

	cout <<"Available Operations are:\n 1.) Addition\n 2.) Subtraction\n 3.) Multiplication\n 4.) Division \n Please Select a Number: \n";
	cin >> operation;

	if (operation == 4 && secondIntegar == 0)
		{
			cout <<"Divide by Zero Program Exiting";
			return 0;
		}

	if (operation == 1)
		{
			finalValue = firstIntegar + secondIntegar;
			cout << "Final Value is: "<< finalValue;
		}

	if (operation == 2)
		{
			finalValue = firstIntegar - secondIntegar;
			cout << "Final Value is: "<< finalValue;
		}
	if (operation == 3)
		{
			finalValue = firstIntegar * secondIntegar;
			cout << "Final Value is: "<< finalValue;
		
		}
	if (operation == 4)
		{
			finalValue = firstIntegar / secondIntegar;
			cout << "Final Value is: "<< finalValue;
		}
	if (operation > 4)
	{
	cout <<" \n Error Value is Greater Than 4 Program Exiting";
	}

	return 0;
}

