#include <stdio.h>



int main() {
    int matriz[3][3];

    printf("Digite os elementos da matriz A3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento da posição [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    int soma = 0;
    int somaDiagonalPrincipal = 0;
    int somaDiagonalSecundaria = 0;

    // Calcula a soma da diagonal principal e da diagonal secundária
    for (int i = 0; i < 3; i++) {
        somaDiagonalPrincipal += matriz[i][i];
        
    }
    int j = 3;
    for (int i = 0; i < 3; i++){
        somaDiagonalSecundaria += matriz[i][j];
        j--;
    }

    // Verifica se as somas das linhas, colunas e diagonais são iguais
    int somaLinha = 0;
    int somaColuna = 0;

    for (int i = 0; i < 3; i++) {
        somaLinha = 0;
        somaColuna = 0;

        for (int j = 0; j < 3; j++) {
            somaLinha += matriz[i][j];
            somaColuna += matriz[j][i];
        }

        if (i == 0) {
            soma = somaLinha; // Inicializa a soma com a primeira soma de linha
        }

        if (somaLinha != soma || somaColuna != soma) {
            printf("A matriz não é um quadrado mágico.\n");
            return 0;
        }
    }

    if (somaDiagonalPrincipal != soma || somaDiagonalSecundaria != soma) {
        printf("A matriz não é um quadrado mágico.\n");
    } else {
        printf("A matriz é um quadrado mágico.\n");
    }

    return 0;
}
