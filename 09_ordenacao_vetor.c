#include <stdio.h>

int main() {
    int vetor[10], i, j, temp;

    printf("Digite 10 números inteiros:\n");
    for (i = 0; i < 10; i++)
        scanf("%d", &vetor[i]);

    // Bubble Sort
    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    printf("Vetor ordenado: ");
    for (i = 0; i < 10; i++)
        printf("%d ", vetor[i]);

    printf("\n");
    return 0;
}
