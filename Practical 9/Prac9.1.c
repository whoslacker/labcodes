// Write a c program to search for a specific word in a file and display its occurrences. 

#include <stdio.h>
#include <string.h>

int main() {
    FILE *file;
    char word[100], line[256];
    int count = 0;

    printf("Enter the word to search: ");
    scanf("%s", word);
    
    file = fopen("Prac9input.txt", "r");
    if (!file) { printf("Could not open file.\n"); return 1; }

    while (fgets(line, sizeof(line), file)) {
        char *ptr = line;
        while ((ptr = strstr(ptr, word))) {
            count++;
            ptr += strlen(word);
        }
    }
    
    fclose(file);
    printf("The word '%s' occurred %d times.\n", word, count);
    return 0;
}