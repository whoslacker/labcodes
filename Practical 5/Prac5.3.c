// Write a program to calculate the square of a number using a macro.

#include <stdio.h>

#define square(x) (x * x)

int main () {
  int a = 7;
  printf("Square of %d is %d", a, square(a));
  
  return 0;
}