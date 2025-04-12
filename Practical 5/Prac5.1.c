// Write a program to demonstrate file inclusion using #include user’s own header file.

// write this code in main.c file
#include <stdio.h>
#include "myheader.h"

int main()
{
  int x = 4;
  int y = 9;
  int sum = sumfunction(x, y);
  printf("The sum of x = %d and y = %d is %d.", x, y, sum);
  
  return 0;
}


// write this code in a separate myheader.h file
int sumfunction(int a, int b){
    return a + b;
  }