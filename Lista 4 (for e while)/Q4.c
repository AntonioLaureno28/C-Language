#include <stdio.h>
#include <math.h>

int main(){
    int i, n, numero;

    printf("digite a quantidade de potencias de 2: ");
    scanf("%d",&n);

    for (i=0; i<=n;i++){
        numero = pow(2,i);
        printf("%d\n",numero);
    }
}