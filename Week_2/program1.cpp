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

	cout <<"Enter First Integer: \n";
	cin >> firstIntegar;

	cout <<"Enter Second Integar: \n";
	cin >> secondIntegar;

	cout <<"Available Operations are:\n 1.) Addition\n 2.) Subtraction\n 3.) Multiplication\n 4.) Division \n Please Select a Number: \n";
	cin >> operation;
	
	return 0;
}
