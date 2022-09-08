/*
Author: Natalie Gallo
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2D

Here, briefly, at least in one or a few sentences
describe what the program does.
*/

#include <iostream>

int main()
{
  int fib[60];

  fib[0] = 0;
  fib[1] = 1;

  std::cout << fib[0] << std::endl << fib[1] << std::endl;

  for (int i = 2; i < 60; i++){
    fib[i] = fib[i-1] + fib[i-2];
    std::cout << fib[i] << std::endl;
  }

  return 0;
}

  
