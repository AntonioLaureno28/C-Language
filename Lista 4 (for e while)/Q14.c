#include <stdio.h>

int main(){
    float A, prod = 0;
    int B, i = 0;
    
    printf("digite o numero A: ");
    scanf("%f", &A);

    printf("digite o numero B: ");
    scanf("%d", &B);

    for (i = 0; i < B; i++){
        prod += A;
    } 

    printf("o produto entre %.2f e %d: %.2f", A, B, prod);
    return 0;

}