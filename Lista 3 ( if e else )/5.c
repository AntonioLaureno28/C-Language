#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    int investimento;
    float valor, valoreal;

    printf("digite o tipo de investimento e o valor: \n");
    scanf("%d%f", &investimento, &valor);

    if (investimento == 1){
        valoreal = valor * 1.1;
        printf("valor corrigido: %.3f",valoreal);
    } else if (investimento == 2){
        valoreal = valor * 1.15;
        printf("valor corrigido: %.3f",valoreal);
    } else {
        printf("valor invalido!");
    }

    return 0;
}