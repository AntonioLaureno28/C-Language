#include <stdio.h>

int main() {
    int semanas = 13;
    int problemasPorSemana = 2;
    int erros = 1;
    int totalErros = 0;

    for (int i = 0; i < semanas; i++) {
        totalErros = totalErros + erros;
        erros = erros*2;
    }

    totalErros *= problemasPorSemana;

    printf("O aluno espera cometer um total de %d erros no programa final.\n", totalErros);

    return 0;
}


