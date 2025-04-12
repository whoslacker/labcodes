// Write a program to create a file and write user input into it.

#include <stdio.h>

int main () {
    FILE *file;
    char userInput[20];

    file = fopen("user_input.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter a string: ");
    fgets(userInput, sizeof(userInput), stdin);

    fputs(userInput, file);
    fclose(file);
    
    printf("User input has been written to user_input.txt.\n");

    return 0;
}