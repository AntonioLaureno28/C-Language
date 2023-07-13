#include <stdio.h>
#include <string.h>

typedef struct tipo_servico{
    int Os;
    int idade;
    char nome[60];
    char data[11];
    int valor;
    char descricao[180];
}servico;
int main(){
    int Clien;
    printf("Digite a quantidade de clientes: ");
    scanf("%d", &Clien);
    getchar();
    servico vet[Clien];
    for(int i = 0; i < Clien; i++){
        printf("insira os dados do cliente %d\n", i+1);
        puts("Nome: ");
        fgets(vet[i].nome, 59, stdin);
        printf("\nIdade: ");
        scanf("%d", &vet[i].idade);
        getchar();
        printf("\nOrdem de servico: ");
        scanf("%d", &vet[i].Os);
        getchar();
        puts("\ndata: ");
        fgets(vet[i].data, 11, stdin);
        getchar();
        printf("\nValor: ");
        scanf("%d", &vet[i].valor);
        getchar();
        puts("\nDescricao do produto: ");
        fgets(vet[i].descricao, 179, stdin);
    }
    int soma = 0;
    for(int i = 0; i<Clien; i++){
        soma = soma + vet[i].valor;
    }
    float media = soma/Clien;
    printf("\nA media dos valores do servico: %f\n", media);
    int maior = 0;
    for(int i = 0; i<Clien; i++){
        if(vet[i].valor > maior){
            maior = vet[i].valor;
        }
    }
    for(int i = 0; i<Clien; i++){
        if(vet[i].valor == maior){
            printf("%s comprou o produto de maior valor no dia %s e adicionou a seguinte descricao: %s.", vet[i].nome, vet[i].data, vet[i].descricao);
        }
    }
    return 0;
}
