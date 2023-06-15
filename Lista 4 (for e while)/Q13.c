#include <stdio.h>

int main(){
    int pares = 0, impares = 0, i, n, num;

    printf("digite a quantidade de numeros: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("digite um numero: ");
        scanf("%d", &num);

        if (num % 2 == 0){
            pares++;
        } else {
            impares++;
        }
    }
    printf("quantidade de pares: %d\n", pares);
    printf("quantidade de impares: %d\n", impares);

    return 0;
}