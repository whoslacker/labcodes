// Write a program to append text to an existing file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    const char *filename = "sample.txt";
    const char *textToAppend = "\nThis is the text to append.\n";

    file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    if (fputs(textToAppend, file) == EOF) {
        perror("Error writing to file");
        fclose(file);
        return 1;
    }

    fclose(file);
    printf("Text appended successfully.\n");

    return 0;
}