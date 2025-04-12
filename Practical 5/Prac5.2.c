// Define a macro for a constant value and use it to calculate the perimeter of a rectangle.

#include <stdio.h>

#define length 6
#define width 9

int main () {
  int perimeter;
  
  perimeter = 2 * (length + width);
  printf("Perimeter of rectangle is %d.", perimeter);
  
  return 0;
}