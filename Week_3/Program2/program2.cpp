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
	std::cout <<"\n";

	//Triangle
	for (int i = 8; i > 0; i--){
		for (int j = i; j > 0; (j--)){
			std::cout <<"#";
			std::cout <<" ";
		}
	std::cout <<"\n";
	}

	//Triangle

	std::cout <<"\n";

	//Diamond
	std::cout <<"#";
	std::cout <<" ";
	std::cout <<"\n";
	//Diamond

	std::cout <<"\n";

	//X-Shape
	std::cout <<"#";
	std::cout <<" ";
	std::cout <<"\n";
	//X-Shape

	return 0;
}

