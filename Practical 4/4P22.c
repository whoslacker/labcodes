#include<stdio.h>
int main(){
    int num,rev=0,rem,org;
    printf("Enter the number :");
    scanf("%d",&num);
    org=num;
    while(num!=0){
        rem=num%10;
        rev=rev+rem*rem*rem;
        num/=10;
    }
    printf("Reversed number's sum is %d\n",rev);
    if(rev==org){
        printf("The given number is Armstrong.");
    }
    else{
        printf("The given number is not Armstrong.");
    }
    return 0;
}