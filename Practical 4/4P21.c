#include<stdio.h>
int main(){
    int num,rev=0,rem,org;
    printf("Enter the number :");
    scanf("%d",&num);
    org=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    printf("Reversed number is %d\n",rev);
    if(rev==org){
        printf("The given number is Palindrome.");
    }
    else{
        printf("The given number is not Palindrome.");
    }
    return 0;
}