// Write a program to dynamically allocate memory for a string and store a user-entered string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int length;
    
    printf("Enter size to be allocated: ");
    scanf("%d", &length);
    
    char *arrstr = (char *)malloc((length+1) * sizeof(char));
    if(arrstr == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    else{
        getchar();
        printf("Enter string elements:   ");
        fgets(arrstr, (length+1), stdin);
    }
    printf("String elements are : %s", arrstr);

    free(arrstr);
    return 0;
}