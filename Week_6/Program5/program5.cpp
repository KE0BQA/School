/*
  program5.cpp
  Dyllan Uplinger
  J633V226
  Homework #05
  Bingo Array
  Copyright 2017
  */

/*
  Google C++ Style Guide
  https://google.github.io/styleguide/cppguide.html
  */

#include <iostream>

using std::cout;

const int SIZE = 5;
const char dog[SIZE] = {'B', 'I', 'N', 'G', 'O'};

int main() {
  for (int num = 0; num < 6; num++) {
    cout << "There was a farmer had a dog" << std::endl << "and ";
    for (int fullName = 0; fullName < 5; fullName++) {
      cout << dog[fullName] << " ";
    }
    cout << " was his name-o" << std::endl;
    for (int row = 0; row < 3; row++) {
      for (int line = 0; line < 5; line++) {
        if (line <= (num - 1)) {
          cout << "* ";
        } else {
          cout << dog[line] << " ";
        }
      }
      cout << std::endl;
    }
    cout << "and ";
    for (int fullName = 0; fullName < 5; fullName++) {
      cout << dog[fullName] << " ";
    }
    cout << " was his name-o" << std::endl << std::endl;
  }
  return 0;
}
