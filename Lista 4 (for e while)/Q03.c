#include <stdio.h>

int main() {
    int n, i, numero;
    float soma = 0, media;

    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Digite o numero %d: ", i);
        scanf("%d", &numero);

        if (numero < 0) {
            printf("Numero invalido! Apenas numeros positivos sao permitidos.\n");
            i--;
            continue;
        }

        soma += numero;
    }

    media = soma / n;
    printf("A media dos numeros fornecidos e: %.2f\n", media);

    return 0;
}
