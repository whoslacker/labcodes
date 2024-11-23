#include<stdio.h>
int main(){
    int oddsum=0,evensum=0,i=51;
    int even,odd;
    while(i<=550){
        if(i%2==0){
            evensum+=i;
            even=i;
            i++;
            printf("%d\t",even);
        }
        else{
            oddsum+=i;
            odd=i;
            i++;
            printf("%d\n",odd);
        }
    }
    printf("The even numbers sum is %d\n",evensum);
    printf("The odd numbers sum is %d",oddsum);
    return 0;
}