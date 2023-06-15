
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    float fixo, vendas, comissao, salario; 

    printf("informe o salário fixo do funcionário:");
    scanf("%f",&fixo); 

    printf("informe o valor das vendas desse funcionário: ");
    scanf("%f",&vendas);

    comissao = (vendas*0.04);
    printf("a comissão desse funcionário é:%1.f",comissao);

    salario = (fixo+comissao);
    printf("o salário desse funcionário é:%1.f",salario);

    return 0;
}