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

    if (MDC == 1){
        printf("os numeros sao primos entre si");
    } else {
        printf("os numeros nao sao primos entre si");
    }
}