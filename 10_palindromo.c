#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, ehPalindromo = 1;

    printf("Digite uma palavra: ");
    scanf("%s", str);

    len = strlen(str);
    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            ehPalindromo = 0;
            break;
        }
    }

    if (ehPalindromo)
        printf("É um palíndromo.\n");
    else
        printf("Não é um palíndromo.\n");

    return 0;
}
