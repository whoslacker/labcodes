#include<stdio.h>
int main(){
    float rate,unit;
    printf("Enter the rate per unit: ");
    scanf("%f",&rate);
    printf("Enter the unit consumed: ");
    scanf("%f",&unit);
    
    printf("Total bill amount is %.2f only.",rate*unit);
    
    return 0;
}