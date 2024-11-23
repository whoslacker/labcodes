#include<stdio.h>
int main(){
    int symb,a,b;
    printf("Enter the first value: ");
    scanf("%d",&a);
    printf("Enter the second value: ");
    scanf("%d",&b);
    printf("1. Addition \n2. Substraction\n3. Multiplication \n4. Division\nEnter your choice(1-4): ");
    scanf("%d",&symb);
    
    switch(symb){
        case 1:
        printf("Additon of %d and %d is %d.",a,b,a+b);
        break;
        case 2:
        printf("Substractions of %d from %d is %d.",a,b,a-b);
        break;
        case 3:
        printf("Multiplication of %d and %d is %d.",a,b,a*b);
        break;
        case 4:
        printf("Division of %d by %d is %.2f.",a,b,(float)a/b);
        break;
        default:
        printf("Error: Invalid Choice.");
        break;
    }
    return 0;
}