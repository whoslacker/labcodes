// Right-Angled Triangle (Alternating Characters)
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) printf((j % 2 == 0) ? "O " : "X ");
        printf("\n");
    }
    return 0;
}