#include <stdio.h>
#include <string.h>

typedef struct tipo_propina {
        char dataPagamento[20];
        float valorProp;
        char descricao[100];
        char nome[100];
        char sigla[10];
}propina;

int main() {
    propina pagamentos[100];
    int numPagamen = 0;
    char opcao;

    do {
        printf("Cadastro de Pagamento de Propina:\n");
        printf("---------------------------------\n");
        printf("Data de Pagamento: ");
        scanf(" %[^\n]s", pagamentos[numPagamen].dataPagamento);
        printf("Valor da Propina: R$");
        scanf("%f", &pagamentos[numPagamen].valorProp);
        printf("Descrição da Obra: ");
        scanf(" %[^\n]s", pagamentos[numPagamen].descricao);
        printf("Nome do Político: ");
        scanf(" %[^\n]s", pagamentos[numPagamen].nome);
        printf("Sigla do Partido: ");
        scanf(" %[^\n]s", pagamentos[numPagamen].sigla);

        numPagamen++;

        printf("\nDeseja cadastrar mais um pagamento? (S/N): ");
        scanf(" %c", &opcao);
        printf("\n");
    } while (opcao == 'S' || opcao == 's');

    int i, j;
    char partidos[100][10];
    int contagemPartidos[100] = {0};
    int numPartidos = 0;
    int maiorContagem = 0;
    int partidoMaisPropina = 0;

    for (i = 0; i < numPagamen; i++) {
        int partidoEncontrado = 0;

        for (j = 0; j < numPartidos; j++) {
            if (strcmp(pagamentos[i].sigla, partidos[j]) == 0) {
                contagemPartidos[j]++;
                partidoEncontrado = 1;
                break;
            }
        }

        if (!partidoEncontrado) {
            strcpy(partidos[numPartidos], pagamentos[i].sigla);
            contagemPartidos[numPartidos]++;
            numPartidos++;
        }
    }

    for (i = 0; i < numPartidos; i++) {
        if (contagemPartidos[i] > maiorContagem) {
            maiorContagem = contagemPartidos[i];
            partidoMaisPropina = i;
        }
    }

    printf("Partido com Mais Propina: %s\n", partidos[partidoMaisPropina]);

    return 0;
}
