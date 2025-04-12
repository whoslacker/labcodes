// Write a program to demonstrate the use of a pointer to a pointer.

#include <stdio.h>

int main () {
    int num = 10;
    int *ptr = &num;
    int **pptr = &ptr;
    
    printf("Value of num %d\n", num);
    printf("Value of num using ptr %d\n", *ptr);
    printf("Value of num using pptr %d\n", **pptr);
    
    printf("Address of num using ptr %p\n", ptr);
    printf("Address of num using pptr %p\n", *pptr);
    printf("Address of ptr %p\n", pptr);
    
    return 0;
}