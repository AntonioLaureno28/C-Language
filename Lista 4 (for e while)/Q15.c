#include <stdio.h>

int main(){
    float A, prod = 1;
    int B, i = 0;
    
    printf("digite o numero A: ");
    scanf("%f", &A);

    printf("digite o numero B: ");
    scanf("%d", &B);

    

    for (i = 0; i < B; i++){
        prod *= A;
    } 

    printf("a potencia de %.2f ^ %d: %.2f", A, B, prod);
    return 0;

}