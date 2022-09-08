/*
Author: Natalie Gallo
Course: CSCI-135
Instructor: Michael Zamansky
Assignment: Lab 2C

This program creates an array of 10 (0-9) with a starting value of 1. It asks the user for an index input and a value input. If the index is within range, the value of that index will be updated within the array.

*/

#include <iostream>

int main ()
{
  int myData[10];

  int i;

  int v;

  for (int i = 0; i < 10; i++){
     myData[i] = 1;
  }

  do {
    for (int i = 0; i < 10; i++){
      std::cout << myData[i] << " ";
    }

    std::cout << "\nInput index: \n";
    std::cin >> i;

    std::cout << "Input value: \n";
    std::cin >> v;

    if ((i < 10) && (i > -1)){
      myData[i] = v;
    }
  } while ((i < 10) && (i > -1));

  return 0;
}
      
