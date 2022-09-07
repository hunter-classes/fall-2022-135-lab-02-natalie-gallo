/*
Author: Natalie Gallo
Course: CSCI-135
Instructor: Michael Zamasky
Assignment: Lab 2B

This is the main.cpp file for program print-interval.cpp

This program asks the user to input two integers L and U (representing the lower and upper limits of the interval), and print out all integers in the range L ≤ i < U separated by spaces. Notice that we include the lower limit, but exclude the upper limit.
*/

#include <iostream>
#include "funcs.h"

int main()
{
  int L;
    
  int U;

  std::cout << "Please enter L: \n";
  std::cin >> L;

  std::cout << "Please enter U: \n";
  std::cin >> U;

  print_interval(L, U);

  std::cout << std::endl;
  
  return 0;
}
