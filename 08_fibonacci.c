#include <stdio.h>

int main() {
    int n, i, a = 0, b = 1, c;
    printf("Quantos termos da sequência Fibonacci? ");
    scanf("%d", &n);

    printf("Fibonacci: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}
