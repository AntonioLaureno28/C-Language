#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    float salariominimo = 1302;
    float salario, x; 

    printf("Digite o salario do funcionario: ");
    scanf("%f",&salario);

    x = (salario/salariominimo);
    printf("a quantidade de salarios minimos que esse funcionario ganha é:%f",x);

    return 0;

}