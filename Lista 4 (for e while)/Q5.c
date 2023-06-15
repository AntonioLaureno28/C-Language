#include <stdio.h>

int main() {
    int n, numero, maior = 0;
    char continuar;

    do {
        printf("Digite um numero inteiro: ");
        scanf("%d", &numero);

        if (numero > maior)
            maior = numero;

        printf("Deseja fornecer outro numero? (S/N): ");
        scanf(" %c", &continuar);
    } while (continuar == 'S' || continuar == 's');

    printf("O maior numero fornecido e: %d\n", maior);

    return 0;
}
