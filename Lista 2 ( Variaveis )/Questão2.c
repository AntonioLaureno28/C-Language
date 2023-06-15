#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float preco1, novopreco;

    printf("digite o preco do produto: ");
    scanf("%f", &preco1);

    novopreco = preco1*0.90;
    printf("o valor do novo preco: %f",novopreco);

    return 0;
}