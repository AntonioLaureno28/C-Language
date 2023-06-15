#include <stdio.h>

int main() {
    int numero, produto = 1;
    char opcao;

    do {
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);
        produto *= numero;

        printf("Deseja fornecer mais números? (S/N): ");
        scanf(" %c", &opcao);
    } while (opcao == 'S' || opcao == 's');

    printf("O produto dos números fornecidos é: %d\n", produto);

    return 0;
}
