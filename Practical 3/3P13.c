#include<stdio.h>
int main(){
    
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);
    
    if(a>b && a>c){
        printf("Value of a is greater.");
    }
    else if(b>c && b>a){
        printf("Value of b is greater.");
    }
    else if(c>a && c>b){
        printf("Value of c is greater.");
    }
    else{
        printf("There must be any value equal.");
    }
    
    return 0;
}