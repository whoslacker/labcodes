#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the first value :");
    scanf("%d", &a);
    printf("Enter the second value :");
    scanf("%d", &b);
    
    if(a>b){
        printf("The number a is greater.");
    }
    else{
        printf("The number b is greater.");
    }
    return 0;
}