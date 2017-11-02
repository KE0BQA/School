/*
program8.cpp
Dyllan Uplinger
J633V226
Homework #08
Bubble Sort (Dynamic)
Copyright 2017
*/

#include "stdafx.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

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
  int i, j;
  for (i = 0; i < (num - 1); i++) {
    for (j = 0; j < (num - i - 1); j++)
      if (words[j] > words[j + 1]) {
        swap(words[j], words[j + 1]);
      }
  }
}
