// Hollow Diamond Pattern
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = i; j < 5; j++) printf(" ");
        printf("*");
        if (i > 1) for (int j = 1; j < 2 * (i - 1); j++) printf(" ");
        if (i > 1) printf("*");
        printf("\n");
    }
    for (int i = 4; i >= 1; i--) {
        for (int j = 5; j > i; j--) printf(" ");
        printf("*");
        if (i > 1) for (int j = 1; j < 2 * (i - 1); j++) printf(" ");
        if (i > 1) printf("*");
        printf("\n");
    }
    return 0;
}