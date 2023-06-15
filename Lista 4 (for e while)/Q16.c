#include <stdio.h>

int main(){
    int A;
    int B, resto;
    
    printf("digite o numero A: ");
    scanf("%d", &A);

    printf("digite o numero B: ");
    scanf("%d", &B);

    if (A<=0 || B<=0){
        printf("erro!");
    }

    while (A>=B){
        A-=B;
    }
    resto = A;  

    

    
    

    printf("o resto da diviao de %d por %d: %d", A, B, resto);
    return 0;

}