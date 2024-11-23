#include <stdio.h>
int main() {
    int n, a = 0, b = 1, next, i;
    printf("Enter the numbers of Fibonacci series to generate: ");
    scanf("%d", &n);
    for(i=0;i < n;i++) {
        printf("%d ", next);
        a = b;
        b = next;
        next = a + b;
    }
    return 0;
}