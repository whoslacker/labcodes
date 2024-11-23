#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next;
    printf("Enter the value of up to generate: ");
    scanf("%d", &n);
    while(next <= n) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
    return 0;
}