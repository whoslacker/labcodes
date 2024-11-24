#include<stdio.h>
int main(){
    int l,b,side,oper;
     float rad;
     printf("Whoose area you want to findout.\n1. Rectangle\n2. Circle\n3. Square\nEnter your choice(1-3): ");
     scanf("%d",&oper);
    switch(oper){
        case 1:
        printf("Enter lengh: ");
        scanf("%d",&l);
        printf("Enter breadth: ");
        scanf("%d",&b);
        printf("Area of rectangle is %d",l*b);
        break;
        
        case 2:
        printf("Enter the radius of Circle: ");
        scanf("%f",&rad);
        printf("The area of circle is %.2f",rad*rad*3.14);
        break;
        
        case 3:
        printf("Enter side of square: ");
        scanf("%d",&side);
        printf("The area square is %d",side*side);
        break;

        default:
        printf("Invalid Choice!");
        break;
    }
    return 0;
 }
