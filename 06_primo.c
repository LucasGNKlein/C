#include <stdio.h>

int main() {
    int n, i, ehPrimo = 1;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n <= 1) {
        ehPrimo = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }

    if (ehPrimo)
        printf("%d é primo.\n", n);
    else
        printf("%d não é primo.\n", n);

    return 0;
}
