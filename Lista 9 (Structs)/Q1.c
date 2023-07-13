#include <stdio.h>
#include <string.h>

typedef struct tipo_dados{
    int salario;
    int idade;
    char sexo;
    int num_filhos;
}dados;

int main(){
    dados vet[20];
    int totalMulheres = 0, mulheresSalarioMaior10k = 0;
    float somaSalarios = 0, mediaSalario, somaFilhos = 0, mediaFilhos, maiorSalario = 0, percentualMulheres;
    for(int i = 0; i < 20; i++){
        printf("Pessoa %d:\n", i + 1);
        printf("Salário: R$");
        scanf("%d", &vet[i].salario);
        printf("Idade: ");
        scanf("%d", &vet[i].idade);
        printf("Sexo (M/F): ");
        scanf(" %c", &vet[i].sexo);
        printf("Número de Filhos: ");
        scanf("%d", &vet[i].num_filhos);
        printf("\n");

        somaSalarios += vet[i].salario;
        somaFilhos += vet[i].num_filhos;

        if (vet[i].salario > maiorSalario){
            maiorSalario = vet[i].salario;
        }

        if (vet[i].sexo == 'F'){
            totalMulheres++;
            if (vet[i].salario > 10000){
                mulheresSalarioMaior10k++;
            }
        } 
    }

    mediaSalario = somaSalarios/20;
    mediaFilhos = somaFilhos/20;
    percentualMulheres = (mulheresSalarioMaior10k / (float)totalMulheres)*100;

    printf("\nResultados:\n");
    printf("-----------\n");
    printf("Média de Salário: R$%.2f\n", mediaSalario);
    printf("Média de Número de Filhos: %.2f\n", mediaFilhos);
    printf("Maior Salário: R$%.2f\n", maiorSalario);
    printf("Percentual de Mulheres com Salário > R$10.000,00: %.2f%%\n", percentualMulheres);
}