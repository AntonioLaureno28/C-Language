#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float salario, novosalario;

    printf("digite o salario: ");
    scanf("%f", &salario);

    if (salario < 900){
        novosalario = salario*1.30;
        printf("seu novo salario: %f",novosalario);
    } else {
        printf("voce nao tem direito ao aumento!");
    }
    return 0;
}