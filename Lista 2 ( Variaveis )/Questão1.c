#include <stdio.h>

int main(){
    float media, altura, soma = 0;
    int i, j = 0;
    float Alt[10];

    for (i = 0; i < 10; i++){
        printf("digite a altura: ");
        scanf("%f", &Alt[i]);
        soma += Alt[i];
    }

    media = soma/10;

    printf("as alturas maiores que a media: ");
    for (i = 0; i < 10; i++){
        if (Alt[i] > media){
            printf("%f\n", Alt[i]);
        }
    }
    
}