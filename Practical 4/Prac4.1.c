// Write a program to demonstrate an array of pointers to strings.

#include <stdio.h>

int main () {
    char *fruits[] = {"Apple", "Banana", "Orange", "Grapes", "Guava" };
    
    printf ("Lists of fruits: \n");
    for(int i = 0; i < 5; i++){
        printf("Element at index[%d] is %s\n", i, fruits[i]);
    }
    return 0;
}