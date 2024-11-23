#include<stdio.h>
int main(){
    int perc;
    printf("Enter the student's percentage: ");
    scanf("%d",&perc);
    if(perc>=90 && perc<100){
        printf("A Grade");
    }
    else if(perc>=80 && perc<90){
        printf("B Grade");
    }
    else if(perc>=70 && perc<80){
        printf("C Grade");
    }
    else if(perc>=60 && perc<70){
        printf("D Grade");
    }
    else if(perc>=45 && perc<60){
        printf("E Grade");
    }
    else{
        printf("Fail");
    }

    return 0;
}