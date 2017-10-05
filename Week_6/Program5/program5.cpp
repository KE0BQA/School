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

void writeBlock(void);

const int SIZE = 5;
const char dog[SIZE] = {'B', 'I', 'N', 'G', 'O'};

int main() { writeBlock(); }

void writeBlock(void) {
  cout << "There was a farmer had a dog" << std::endl
       << "and" << dog[SIZE] << "was his name-o" << dog[SIZE] << dog[SIZE]
       << dog[SIZE] << "and" << dog[SIZE] << "was his name-o";
}
