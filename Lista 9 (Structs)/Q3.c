#include <stdio.h>
#include <string.h>

typedef struct tipo_produto{
    int cod;
    int quant;
    int valor;
    char descricao[180];
}produto;

int main(){
    produto vet[10];
    for(int i = 0; i < 10; i++){
        printf("insira os dados do produto %d\n", i+1);
        puts("codigo: ");
        scanf("%d", &vet[i].cod);
        getchar();
        puts("Descricao do produto: ");
        fgets(vet[i].descricao, 179, stdin);
        getchar();
        printf("Valor: ");
        scanf("%d", &vet[i].valor);
        getchar();
        printf("Quantidade em estoque: ");
        scanf("%d", &vet[i].quant);
        getchar();
    }
    
    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (vet[j].cod > vet[j + 1].cod) {
                int temp = vet[j].cod;
                vet[j].cod = vet[j + 1].cod;
                vet[j + 1].cod = temp;
            }
        }
    }
    for(int i = 0; i < 10;i++){
        printf("Produto %d: \n", i+1);
        printf("codigo: %d\n", vet[i].cod);
        printf("descricao: %s\n", vet[i].descricao);
        printf("valor: %d\n", vet[i].valor);
        printf("quantidade em estoque: %d\n", vet[i].quant);
    }
    return 0;
}

