// Write a program to demonstrate how to access a variable using its pointer.

#include <stdio.h>

int main () {
    int num = 10;
    int *ptr = &num;
    
    printf ("The value of variable is %d\n", num);
    printf ("The value of variable using its pointer is %d\n", *ptr);
    
    return 0;
}