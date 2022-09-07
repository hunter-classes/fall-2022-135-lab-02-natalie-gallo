/*
Author: Natalie Gallo
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2A

This program asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input.

After a valid value is obtained, print this number n squared.
*/

#include <iostream>
#include <cmath>


int main()
{
  double num;
  
  std::cout << "Please enter an interger: \n";
  std::cin >> num;

  while (num > 99 || num < 1) {
    std::cout << "Please re-enter: \n";
    std::cin >> num;
  }

  if ((num < 100) && (num > 0)) {
    std::cout << "Number squared is " << pow(num, 2) << std::endl;
  }

  return 0;
}
    
