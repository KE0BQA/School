/*
  program6.cpp
  Dyllan Uplinger
  J633V226
  Homework #06
  Caesar Shift
  Copyright 2017
  */

/*
  Google C++ Style Guide
  https://google.github.io/styleguide/cppguide.html
  */

#include <cctype>
#include <iostream>

using std::cin;
using std::cout;

void printEntry(char a[], int size);
void encrypt(char a[], int size);
void decrypt(char a[], int size);

const int size = 200;
int shift = 4;

int main() {
  char message[size], letter;
  int count = 0;

  cout << "Please enter a message (200 Character Limit): ";
  cin.get(letter);
  while (letter != '\n' && count < size) {
    message[count] = letter;
    count++;
    cin.get(letter);
  }
  for (int i = 0; i < count; i++) {
    message[i] = toupper(message[i]);
    cout << std::endl;
  }
  printEntry(message, count);
  encrypt(message, count);
  decrypt(message, count);

  return 0;
}

void printEntry(char a[], int size) {}
void encrypt(char a[], int size) {}
void decrypt(char a[], int size) {}
