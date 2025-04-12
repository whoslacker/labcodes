// Write a program to create a file and write user input into it.

#include <stdio.h>

int main () {
    FILE *file;
    
    char userInput[20];
    char eachchar;
    
    file = fopen("user_input.txt", "r");
    if(file == NULL){
        printf("Error opening file!");
        return 1;
    }
    
    printf("\nFile content:\n\n");
    while((eachchar = fgetc(file)) != EOF){
        printf("%c", eachchar);
    }
    printf("\n\nProgram ends");
    
    return 0;
}