#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *filename = "Prac9input.txt";
    int lineNumber;
    char buffer[500];

    FILE *file = fopen(filename, "r");
    if (!file) {
        perror("Error opening file");
        return 1;
    }
    
    printf("Enter line number you are looking for: ");
    scanf("%d", &lineNumber);

    int currentLine = 1;
    while (fgets(buffer, sizeof(buffer), file)) {
        if (currentLine == lineNumber) {
            printf("\nLine %d: %s", lineNumber, buffer);
            break;
        }
        currentLine++;
    }

    if (currentLine < lineNumber) {
        printf("The file has less than %d lines.\n", lineNumber);
    }

    fclose(file);
    return 0;
}