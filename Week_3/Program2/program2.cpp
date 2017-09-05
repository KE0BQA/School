/*
	program2.cpp
	Dyllan Uplinger
	20170905
	J633V226
	Homework #02
	Draw to the terminal 3 shapes
*/

#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	std::cout <<"\n";

	//Triangle
	int a=0, b=0, NUM=3;

	for (a = -NUM; a <= NUM; a++) {
		for (b = -NUM; b <= NUM; b++) {
			if ( abs(a)+abs(b)<=NUM)
				{std::cout <<"#";}
			else
				{std::cout <<" ";}
			}
		cout<<endl;
	}
	std::cout <<"\n";
	//Triangle

	std::cout <<"\n";

	//Diamond
	int c=0, d=0, NUM1=3;

	for (c = -NUM1; c <= NUM1; c++){
		for (d = -NUM1; d <= NUM1; d++){
			if ( (abs(c) + abs(d)) <= NUM1)
				{std::cout<<"#";}
			else 
				{std::cout<<" ";}
			}
		cout<<endl;
	}
	std::cout <<"\n";
	//Diamond

	std::cout <<"\n";

	//X-Shape

	int e=0, f=0, NUM2=3;

	for (e=-NUM2; e<=NUM2; e++) {
		for (f=-NUM2; f<=NUM2; f++) {
			if( (abs (e) == abs (f))){ 
				std::cout <<"#";
			} else {
				std::cout <<" ";
			}
		}
	cout<<endl;

	}
	std::cout <<"\n";
	//X-Shape

	return 0;
}

