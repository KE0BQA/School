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
 Repeat if needed. (Do While and Switch Statement?)
 */

#include <cctype>
#include <iomanip>
#include <iostream>

using std::cout;
using std::cin;

void writeMenu(void);
int getSelection(char selection, float& price);
int acceptMoney(float price, float& money);
void computeChange(float price, float money);

int main() {
  char repurchase = 0;
  char selection = 0;
  float price = 0;
  float money = 0;

  cout << "Welcome to the Snack Vending Machine \n";
  cout << std::endl;
  do {
    writeMenu();
    getSelection(selection, price);
    acceptMoney(price, money);
    computeChange(price, money);
    cout << "Would you like to make another purchase? (Y/N)";
    cin >> repurchase;
    switch (repurchase) {
      case 'y':
      case 'Y':
        repurchase = 0;
        break;
      default:
        repurchase = 1;
        break;
    }
  } while (repurchase == 0);
  cout << "Thank You";
  return 0;
}

void writeMenu(void) {
  cout << "Avaliable snacks to choose from: \n"
       << "\t P - Potato Chips" << std::setw(10) << "$1.25 \n"
       << "\t S - Snickers Bar" << std::setw(10) << "$1.35 \n"
       << "\t T - Pop Tart" << std::setw(14) << "$0.95 \n"
       << "\t C - Cookies" << std::setw(15) << "$1.50 \n"
       << "\t B - Brownie" << std::setw(15) << "$1.75 \n"
       << "\t N - Nuts" << std::setw(18) << "$1.40 \n";
}

int getSelection(char selection, float& price) {
  while (true) {  // Runs Until Valid Answer
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
        cout << "Not Valid \n"
             << "Try Again \n";
        continue;
    }
    break;
  }
  return price;
}

int acceptMoney(float price, float& money) {
  char moneySelection = 0;
  money = 0;  // Reset Money Every Run
  cout << std::endl;
  cout << "Money Accepted by the Machine \n"
       << "\t N - Nickel \n"
       << "\t Q - Quarter \n"
       << "\t D - Dollar \n"
       << std::endl;
  while (money <= price) {
    cout << "Your Selected Item Cost: " << price << std::setw(3) << " CENTS"
         << std::endl
         << "Your Total Inserted: " << std::setw(8) << money << std::setw(6)
         << " CENTS" << std::endl;
    cout << "Insert Amount: \n";
    cin >> moneySelection;
    moneySelection = toupper(moneySelection);
    switch (moneySelection) {
      case 'N':
        money += 5;
        break;
      case 'Q':
        money += 25;
        break;
      case 'D':
        money += 100;
        break;
      default:
        cout << moneySelection << " is not a coin \n"
             << "Try Again \n";
        continue;
    }
  }
  return money;
}

void computeChange(float price, float money) {
  cout << "Your Total Inserted: " << std::setw(5) << money << std::endl
       << "Dispensing Change: " << std::setw(7) << money - price << std::endl;
}
