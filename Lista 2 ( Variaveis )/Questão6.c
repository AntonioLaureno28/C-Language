#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    float lado, area;

    printf("digite o lado do quadrado: ");
    scanf("%f",&lado);

    area = (lado*lado);
    printf("a area do quadrado é: %2.f ",area);


    return 0;
}