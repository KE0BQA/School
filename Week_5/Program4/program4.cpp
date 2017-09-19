/*
  program4.cpp
  Dyllan Uplinger
  J633V226
  Homework #04
  Vending Machine
  Copyright 2017
  */

/*
  Google C++ Style Guide
  https://google.github.io/styleguide/cppguide.html
  */

/*
 Write Menu
 Get Option
 Accept Money
 Compute Change
 Repeat if needed.
 */

#include <cctype>
#include <iomanip>
#include <iostream>

using std::cout;
using std::cin;

void writeMenu(void);
int getSelection(char selection, float price);
int acceptMoney(float price, float money);
// int computeChange();

int main() {
  char selection = 0;
  float price = 0;
  float money = 0;
  // float change;

  cout << "Welcome to the Snack Vending Machine \n";
  cout << std::endl;
  writeMenu();
  getSelection(selection, price);
  acceptMoney(price, money);
  return 0;
}

void writeMenu(void) {
  cout.setf(std::ios::fixed);
  cout.setf(std::ios::showpoint);
  cout.precision(2);
  cout << "Avaliable snacks to choose from: \n"
       << "\t P - Potato Chips" << std::setw(10) << "$1.25 \n"
       << "\t S - Snickers Bar" << std::setw(10) << "$1.35 \n"
       << "\t T - Pop Tart" << std::setw(14) << "$0.95 \n"
       << "\t C - Cookies" << std::setw(15) << "$1.50 \n"
       << "\t B - Brownie" << std::setw(15) << "$1.75 \n"
       << "\t N - Nuts" << std::setw(18) << "$1.40 \n";
}

int getSelection(char selection, float price) {
  cout << "Please Enter the Letter Labeling your Snack Selection: \n";
  cin >> selection;
  selection = toupper(selection);

  switch (selection) {
    case 'P':
      price = 125;
      break;
    case 'S':
      price = 135;
      break;
    case 'T':
      price = 95;
      break;
    case 'C':
      price = 150;
      break;
    case 'B':
      price = 175;
      break;
    case 'N':
      price = 140;
      break;
    default:
      cout << "Not Valid";
      break;
  }
  return price;
}

int acceptMoney(float price, float money) {
  cout << "Money Accepted by the Machine \n"
       << "\t N - Nickel \n"
       << "\t Q - Quarter \n"
       << "\t D - Dollar \n"
       << "Your Selected Item Cost: " << price << std::setw(3) << " CENTS"
       << std::endl
       << "Your Total Inserted: " << std::setw(8) << money << std::setw(3)
       << " CENTS" << std::endl;
  return 0;
}
