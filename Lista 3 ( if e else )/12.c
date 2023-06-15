#include <stdio.h>
#include <math.h>

int main(){
    int l1, l2, l3;

    printf("digite 3 lados: ");
    scanf("%d%d%d", &l1, &l2, &l3);

    if (l1 < (l2+l3) && l2 < (l1+l3) && l3 < (l1+l2)){
        printf("e um triangulo\n");
        if (l1 == l2 && l2 == l3){
            printf("triangulo equilatero\n");
        } else if (l1 == l2 || l2 == l3 || l1 == l3){
            printf("triangulo isoceles\n");
        } else {
            printf("triangulo escaleno\n");
        }

    } else {
        printf("nao e um triangulo\n");
    }
    return 0;
}