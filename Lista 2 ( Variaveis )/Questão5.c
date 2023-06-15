#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    float basemenor, basemaior, altura, area; 

    printf("Digite o tamanho da base menor do trapezio:");
    scanf("%f",&basemenor);

    printf("Digite o tamanho da base maior do trapezio:");
    scanf("%f",&basemaior);

    printf("Digite o tamanho da altura do trapezio:");
    scanf("%f",&altura);

    area = ((basemenor+basemaior)*altura)/2;
    printf("a area do trapezio é:%2.f",area);


    return 0;

}