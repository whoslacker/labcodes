// Hollow Square Pattern
#include <stdio.h>
int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) 
            printf((i == 0 || i == 4 || j == 0 || j == 4) ? "* " : "  ");
        printf("\n");
    }
    return 0;
}