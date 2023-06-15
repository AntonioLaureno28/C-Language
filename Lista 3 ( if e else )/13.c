#include <stdio.h>
#include <math.h>

int main(){
    float l1, l2, l3;
    float anguloA, anguloB, anguloC;

    printf("digite 3 lados: ");
    scanf("%f%f%f", &l1, &l2, &l3);

    if (l1 < (l2+l3) && l2 < (l1+l3) && l3 < (l1+l2)){
        printf("e um triangulo\n");
        anguloA = acos((l2*l2 + l3*l3 - l1*l1) / (2*l2*l3)) * 180 / M_PI;
        anguloB = acos((l1*l1 + l3*l3 - l2*l2) / (2*l1*l3)) * 180.0 / M_PI;
        anguloC = 180.0 - anguloA - anguloB;
        if (anguloA == 90 || anguloB == 90 || anguloC == 90){
            printf("triangulo retangulo\n");
        } else if (anguloA > 90 || anguloB > 90 || anguloC > 90){
            printf("triangulo obtusangulo\n");
        } else {
            printf("triangulo acutangulo\n");
        }

    } else {
        printf("nao e um triangulo\n");
    }
    return 0;
}
