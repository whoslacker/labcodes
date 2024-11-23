#include<stdio.h>
int main (){
    int a=2,b=3,c=4;
    float avg,sum;
    sum = a+b+c;
    avg=sum/3;
    printf("The average of %d,%d and %d is %.2f", a,b,c,avg);
    
    return 0;
}