#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the first value: ");
    scanf("%d", &a);
    printf("Enter the second value: ");
    scanf("%d", &b);
    printf("Enter the third value: ");
    scanf("%d", &c);
    
    if(a>b){
        if(a>c){
        printf("The number a is greater.\n");
            }  
        }
    else{
        printf("The number a is not greater.\n");
        }
    if(b>a){
        if(b>c){
        printf("The number b is greater.\n");
            }  
        }
    else{
        printf("The number b is not greater.\n");
        }
    if(c>a){
        if(c>b){
        printf("The number c is greater.\n");
            }  
        }
    else{
        printf("The number c is not greater.\n");
        }
        
    return 0;
}