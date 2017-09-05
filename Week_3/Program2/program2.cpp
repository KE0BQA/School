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

int main()
{
	//std::cout <<"\n";

/*	//Triangle
	int a=0, b=0, NUM=8;

	for (a = -NUM; a <= NUM; a++) {
		for (b = -NUM; b <= NUM; b++) {
			if ( abs(a)+abs(b)<=NUM) {
				std::cout <<"#";
			} else {
				std::cout <<" ";
			}
		}
	}
	std::cout <<"\n";
*/	//Triangle

	//std::cout <<"\n";

	//Diamond
	int i=0, j=0, NUM=3;

	for (i = -NUM; i <= NUM; i++){
		for (j = -NUM; j <= NUM; j++){
			if ( (abs(i) + abs(j)) <= NUM)
				{std::cout<<"#";}
			else 
				{std::cout<<" ";}
			}
	}
	//std::cout <<"\n";
	//Diamond

/*	std::cout <<"\n";

	//X-Shape
	int e=0, f=0, NUM2=4;

	for (e=-NUM2; e<=NUM2; e++) {
		for (f=-NUM2; f<=NUM2; f++) {
			if( (abs (e) == abs (f))<=NUM2){
				std::cout <<"#";
			} else {
				std::cout <<" ";
			}
		}
	}
	std::cout <<"\n";
	//X-Shape
*/

	return 0;
}

