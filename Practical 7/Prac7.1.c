// Pass a structure containing two integers to a function to calculate their sum.

#include <stdio.h>

struct value {
    int num1;
    int num2;
};

int myFunction (struct value sum){
    return sum.num1 + sum.num2;
}

int main () {
    struct value sum;
    sum.num1 = 3;
    sum.num2 = 5;
    printf("Sum of %d and %d is: %d.", sum.num1, sum.num2, myFunction(sum));
    
    return 0;
}