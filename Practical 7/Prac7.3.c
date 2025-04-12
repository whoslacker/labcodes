// Use typedef to create an alias for a structure representing a complex number and perform addition of two complex numbers.

#include <stdio.h>

typedef struct {
    int real;
    int imag;
}Complex;

int main () {
    Complex num1, num2, sum;
    
    printf("Enter values of first complex number:\n");
    printf("For real: ");
    scanf("%d", &num1.real);
    printf("For imaginary: ");
    scanf("%d", &num1.imag);
    
    printf("Enter values of second complex number:\n");
    printf("For real: ");
    scanf("%d", &num2.real);
    printf("For imaginary: ");
    scanf("%d", &num2.imag);
    
    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;
    
    printf("Sum of two complex number is %d + %di\n", sum.real, sum.imag);
    
    return 0;
}