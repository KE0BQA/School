#include <iostream>

int main() {
  int firstInteger;
  int secondInteger;
  int operation;

  std::cout <<"This program will prompt for two integers and an operation and then display the result of applying the operation to the number\n";

  std::cout <<"Enter the First Integer:\n";
  std::cin >> firstInteger;

  std::cout <<"Enter the Second Integer:\n";
  std::cin >> secondInteger;

  std::cout <<"Available Operations are:\n\t1.) Addition\n\t2.) Subtraction\n\t3.) Multiplication\n\t4.) Division\nPlease Select a Number:\n";
  std::cin >> operation;

    // Preventing Divide by 0
  if (operation == 4 && secondInteger == 0) {
    std::cout <<"Can Not Divide by Zero; Program Exiting\n";
    return 0;
  }

    // Preventing Invalid Operation
  if (operation > 4 || operation < 1) {
    std::cout <<"\n Invalid Operation. Valid Operations were 1,2,3 or 4, Quitting Program\n";
    return 0;
  }
  switch (operation) {
    case '1':
     
    break;
    case '2':

    break;
    case '3':

    break;
    case '4':

    break;
    default: 
    std::cout << "Not a Valid Operation\n";
  }
  return 0;
}
