// Write a program to demonstrate accessing array elements using pointers.

#include <stdio.h>

int main () {
    int arr[] = {3, 6, 2, 5, 8};
    int *ptr = arr;
    
    printf("Accessing array elements using pointers:\n");
    for (int i = 0; i < 5; i++){
        printf("Element at index %d is %d.\n",i, *(ptr+i));
    }
}