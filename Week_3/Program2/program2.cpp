/*
	program2.cpp
	Dyllan Uplinger
	J633V226
	Homework #02
	Draw to the terminal 3 shapes
*/

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	//Triangle
	for (int c = 0; c <= 4;  c++) {
		for (int b = c; b > 0; b--) {
			cout << " ";
		} for (int k = (2* (4 - c)); k >= 1; k--) {
			cout<<"#";
		}
	cout << endl;
	}
	//Triangle

	cout <<"\n";

	//Diamond
	for (int c = 7; c >= 1;  c--) {
		for (int b = (abs(4 - c)); b > 0; b--) {
			cout << " ";
		} for (int k = (2 * (4 - abs (4 - c))); k >= 1; k--) {
			cout<<"#";
		}
	cout << endl;
	}
	//Diamond

	cout <<"\n\n";

	//X-Shape
	int e=0, f=0, NUM2=3;

	for (e = -NUM2; e <= NUM2; e++) {
		for (f = -NUM2; f <= NUM2; f++) {
			if( (abs (e) == abs (f))) { 
				cout <<"#";
			} else {
				cout <<" ";
			}
		}
	cout<<endl;
	}
	//X-Shape

	return 0;
}
