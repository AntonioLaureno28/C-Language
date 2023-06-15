#include <stdio.h>

int main(){
    int i, n;
    unsigned long long fat;
    printf("digite o numero para calcular o fatorial: ");
    scanf("%d",&i);

    for (fat = 1; i > 1; i = i-1 ){
        fat *= i;
        
    }
    printf("o fatorial de e %d",fat);
}