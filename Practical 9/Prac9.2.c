// Write a program to reverse the contents of a file and save it in another file.
#include <stdio.h>
#include <stdlib.h>

void reverseFileContents(const char *inputFile, const char *outputFile) {
    FILE *inFile = fopen(inputFile, "r");
    if (!inFile) return;

    fseek(inFile, 0, SEEK_END);
    long fileSize = ftell(inFile);
    fseek(inFile, 0, SEEK_SET);

    char *buffer = malloc(fileSize + 1);
    fread(buffer, 1, fileSize, inFile);
    buffer[fileSize] = '\0';
    fclose(inFile);

    FILE *outFile = fopen(outputFile, "w");
    if (!outFile) { free(buffer); return; }

    for (long i = fileSize - 1; i >= 0; i--) fputc(buffer[i], outFile);

    fclose(outFile);
    free(buffer);
    
    printf("\nProgram executed successfully.\n");
}

int main() {
    const char *inputFile = "Prac9input.txt";
    const char *outputFile = "Prac9.2output.txt";

    reverseFileContents(inputFile, outputFile);
    return 0;
}