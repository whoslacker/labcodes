// Write a program to swap two numbers using pointers.

#include <stdio.h>

int swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main () {
    int x = 6;
    int y = 9;
    printf("Before swapping x = %d and y = %d\n", x, y);
    swap(&x, &y);
    printf("After swapping x = %d and y = %d", x, y);
    
    return 0;
}