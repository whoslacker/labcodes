// Fabonacci Pattern
#include <stdio.h>
int main() {
    int a = 0, b = 1, c;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", a);
            c = a + b; a = b; b = c;
        }
        printf("\n");
    }
    return 0;
}