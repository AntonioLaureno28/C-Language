#include <stdio.h>
#include <math.h>

int main(){
    float A, B, C, delta, x1, x2;

    printf("digite os coeficientes A, B e C da equacao: ");
    scanf("%f%f%f", &A, &B, &C);

    delta = B*B - 4*A*C;

    if (delta < 0){
        printf("nao existem raizes reais!\n");
    } else {
        x1 = (-B + sqrt(delta))/2*A;
        x2 = (-B - sqrt(delta))/2*A;
        printf("raizes: %f, %f ",x1,x2);
    }
    return 0;
}