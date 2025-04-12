// Write a program to demonstrate the call by value and call by reference
#include <stdio.h>
int callReference(int *a, int *b){
    *a = 10;
    *b = 13;
    printf("In call by reference: a = %d and b = %d\n", *a , *b);
}

int valueCall(int a, int b){
    a = 9;
    b = 6;
    printf("In call by value: a = %d and b = %d\n", a , b);
}

int main () {
    int x = 7;
    int y = 5;
    
    valueCall(x, y);
    printf("After Call by value in main: x = %d and y = %d\n", x, y);
    
    callReference(&x, &y);
    printf("After Call by reference in main: x= %d and y = %d\n", x, y);
    
    return 0;
}