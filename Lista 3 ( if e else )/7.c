#include <stdio.h>

int main() {
    int idade;
    char categoria;

    printf("digite a idade: \n");
    scanf("%d", &idade);

    if (idade < 5) {
        printf("erro!");
    } else if (idade >= 5 && idade <= 7){
        printf("categoria infantil");
    } else if (idade >= 8 && idade <= 10){
        printf("categoria infanto-juvenil");
    } else if (idade >= 11 && idade <= 15){
        printf("categoria juvenil");
    } else if (idade >= 16 && idade <= 30){
        printf("categoria adulta");
    } else {
        printf("categoria master");
    }
    return 0;
}
