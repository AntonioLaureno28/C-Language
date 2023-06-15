#include <stdio.h>

int mdc(int A, int B){
    int resto;
    while (B!=0){
        resto = A%B;
        A=B;
        B = resto;
    }
    return A;
}

int main(){
    int N1, N2;

    printf("digite um numero: ");
    scanf("%d",&N1);

    printf("digite outro numero: ");
    scanf("%d",&N2);

    int MDC = mdc(N1,N2);

    printf("o mdc entre %d e %d: %d",N1, N2, MDC);
}