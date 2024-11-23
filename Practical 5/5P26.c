#include <stdio.h>
int main() {
    char names[5][50];
    int scores[5];
    
    for (int i = 0; i < 5; i++) {
        printf("Enter the name of student %d: ", i + 1);
        scanf("%s", names[i]);
        printf("Enter the score of %s: ", names[i]);
        scanf("%d", &scores[i]);
    }
    printf("\nResult Sheet:\n");
    printf("-------------------------------------------------\n");
    printf("| %-20s | Score |\n", "Name");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("| %-20s | %5d |\n", names[i], scores[i]);
    }
    printf("-------------------------------------------------\n");

    return 0;
}