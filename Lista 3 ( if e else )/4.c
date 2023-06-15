#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float preco, novopreco;
    char classificacao;

    printf("digite o preco do produto: \n");
    scanf("%f",&preco);

    if (preco <= 50){
        novopreco = preco*0.95;
        printf("novo preco: %.2f\n",novopreco);
    }
    else if (preco > 50 && preco <= 100){
        novopreco = preco*0.90;
        printf("novo preco: %.2f\n",novopreco);
    }
    else{
        novopreco = preco*0.85;
        printf("novo preco: %.2f\n");
    }

    if (preco <= 80){
        classificacao = 'D';
        printf("classificacao: %c\n",classificacao);
    }
    else if (preco > 80 && preco <= 120){
        classificacao = 'C';
        printf("classificacao: %c\n",classificacao);
    }
    else if (preco > 120 && preco <= 200){
        classificacao = 'B';
        printf("classificacao: %c\n",classificacao);
    }
    else{
        classificacao = 'A';
        printf("classificacao: %c\n",classificacao);
    }


    return 0
}