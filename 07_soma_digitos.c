#include <stdio.h>

int main() {
    int n, soma = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    n = n < 0 ? -n : n; // Garante positivo
    while (n != 0) {
        soma += n % 10;
        n /= 10;
    }

    printf("Soma dos dígitos: %d\n", soma);
    return 0;
}
