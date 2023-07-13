#include <stdio.h>
#include <string.h>

struct Estilista {
    int codigoEstilista;
    char nomeEstilista[100];
    float salario;
};

struct EstacaoClimatica {
    int codigoEstacao;
    char nomeEstacao[100];
};

struct Roupa {
    int codigoRoupa;
    char descricaoRoupa[100];
    int codigoEstilista;
    int codigoEstacao;
    int ano;
};

void imprimirRoupasEstacao(struct Roupa roupas[], int tamanho, int codigoEstacao) {
    int i;

    printf("\nRoupas da Estação %d:\n", codigoEstacao);
    printf("---------------------\n");

    for (i = 0; i < tamanho; i++) {
        if (roupas[i].codigoEstacao == codigoEstacao) {
            printf("Código: %d\n", roupas[i].codigoRoupa);
            printf("Descrição: %s\n", roupas[i].descricaoRoupa);
            printf("Código do Estilista: %d\n", roupas[i].codigoEstilista);
            printf("Ano: %d\n", roupas[i].ano);
            printf("---------------------\n");
        }
    }
}

int main() {
    struct Estilista estilistas[5];
    struct EstacaoClimatica estacoes[4];
    struct Roupa roupas[10];
    int i, j, k, codigoEstacao;

    printf("Cadastro de Estilistas:\n");
    printf("-----------------------\n");

    for (i = 0; i < 5; i++) {
        printf("Estilista %d:\n", i + 1);
        printf("Código do Estilista: ");
        scanf("%d", &estilistas[i].codigoEstilista);
        printf("Nome do Estilista: ");
        scanf(" %[^\n]s", estilistas[i].nomeEstilista);
        printf("Salário: R$");
        scanf("%f", &estilistas[i].salario);
        printf("\n");
    }

    printf("\nCadastro de Estações Climáticas:\n");
    printf("--------------------------------\n");

    for (j = 0; j < 4; j++) {
        printf("Estação Climática %d:\n", j + 1);
        printf("Código da Estação: ");
        scanf("%d", &estacoes[j].codigoEstacao);
        printf("Nome da Estação: ");
        scanf(" %[^\n]s", estacoes[j].nomeEstacao);
        printf("\n");
    }

    printf("\nCadastro de Roupas:\n");
    printf("-------------------\n");

    for (k = 0; k < 10; k++) {
        printf("Roupa %d:\n", k + 1);
        printf("Código da Roupa: ");
        scanf("%d", &roupas[k].codigoRoupa);
        printf("Descrição da Roupa: ");
        scanf(" %[^\n]s", roupas[k].descricaoRoupa);
        printf("Código do Estilista: ");
        scanf("%d", &roupas[k].codigoEstilista);
        printf("Código da Estação: ");
        scanf("%d", &roupas[k].codigoEstacao);
        printf("Ano: ");
        scanf("%d", &roupas[k].ano);
        printf("\n");
    }

    printf("\nInforme o código da estação para visualizar as roupas correspondentes: ");
    scanf("%d", &codigoEstacao);

    imprimirRoupasEstacao(roupas, 10, codigoEstacao);

    return 0;
}
