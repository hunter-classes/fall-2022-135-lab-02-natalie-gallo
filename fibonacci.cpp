/*
Author: Natalie Gallo
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2D

This program prints up to the 60th term in the fibonacci sequence.
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

/*
As the program reaches the later terms, the value of a handful of these indexes becomes negative.

It is because the size becomes too large. Int cannot handle a value past a certain number. Int has a maximum value of 2147483647. As a result, it loops around.
*/
  
