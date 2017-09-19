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
  Take Menu Option
  Insert Amount (Loop)
  Convert to Cents (Loop)
  Program Must Loop till declined detected

 */

#include <iomanip>
#include <iostream>
#include <cctype>

using std::cout;
using std::cin;

void menu(void);
int acceptMoney(int price);
int computeChange(int totalPaid, int totalPrice);
int purchaseCost(int purchase);

int main() {
  char purchase;

  cout << "Welcome to the Snack Vending Machine \n";
  cout << std::endl;
  menu();
  cin >> purchase;
  purchase = toupper(purchase);
  purchaseCost(purchase);
  cout << purchase;

  return 0;
}

void menu(void) {
  cout << "Avaliable snacks to choose from: \n"
       << "\t P - Potato Chips" << std::setw(10) << "$1.25\n"
       << "\t S - Snickers Bar" << std::setw(10) << "$1.35\n"
       << "\t T - Pop Tart" << std::setw(14) << "$0.95\n"
       << "\t C - Cookies" << std::setw(15) << "$1.50\n"
       << "\t B - Brownie" << std::setw(15) << "$1.75\n"
       << "\t N - Nuts" << std::setw(18) << "$1.40\n"
       << "Please Enter the Letter Labeling Your Snack Selection: ";
}

int purchaseCost(int purchase) {
  switch (purchase) {
    case 'P':
    purchase = 125;
    case 'S':
    purchase = 135;
    case 'T':
    purchase = 95;
    case 'C':
    purchase = 150;
    case 'B':
    purchase = 175;
    case 'N':
    purchase = 140;
    default:
      cout << "Not Valid";
    return purchase;
  }
}

int acceptMoney(int price) {
  cout << "Money Accepted by the Machine \n"
      << "\t N - Nickel \n"
      << "\t Q - Quarter \n"
      << "\t D - Dollar \n";
  return 0;
}
