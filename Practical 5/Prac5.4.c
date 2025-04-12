// Write a program to include different code sections based on a macro value.

#include <stdio.h>

#define DEBUG 1

int main () {
  printf("Program started.\n");
  
  #ifdef DEBUG
    printf("\nDEBUG mode is on.\n");
  
  #else 
    printf (\n"DEBUG mode is off.\n");
  
  #endif
  printf("\nProgram ended.");
  
  return 0;
}