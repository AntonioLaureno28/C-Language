#include <stdio.h>

int main() {
    int N;

    do {
        printf("Digite um valor N (no máximo 10): ");
        scanf("%d", &N);

        if (N > 10) {
            printf("Valor inválido! Digite novamente.\n");
        }
    } while (N > 10);

    int Mat[N][N], Mattrans[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &Mat[i][j]);
            Mattrans[j][i] = Mat[i][j];
        }
    }

    printf("Matriz transposta:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", Mattrans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
