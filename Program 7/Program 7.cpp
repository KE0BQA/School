/*
program7.cpp
Dyllan Uplinger
J633V226
Homework #07
Bubble Sort
Copyright 2017
*/

/*
Gather 6 Words
Store in string
End if 0 found
Bubble Sort Alphabetic
Print String
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

const int numWords = 10;
void bubbleSort(string [], int);

int main() {
  string words;
  string list[numWords];
  int count = 0;

  cout << "Enter a word: ";
  cin >> words;

  while (words != "0" && count < numWords) {
    list[count++] = words;
    cout << "Enter a word: ";
    cin >> words;
  }
  bubbleSort(list, count);
  cout << "Your Sorted List is: ";
  for (int i = 0; i < count; i++) {
    cout << list[i] << " ";
  }
  cout << std::endl;
  return 0;
}
void bubbleSort(string words[], int num) {
  bool swapped = true;
  int j = 0;
  string tmp;

  while (swapped) {
    swapped = false;
    j++;
    for (int i = 0; i < num - j; i++) {
      if (words[i].compare(words[i + 1])) {
        tmp = words[i];
        words[i] = words[i + 1];
        words[i + 1] = tmp;
        swapped = true;
      }
    }
  }
}
