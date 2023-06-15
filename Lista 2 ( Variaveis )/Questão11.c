#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float potencia, area, largura, comprimento; 

    printf("digite o comprimento do comodo:");
    scanf("%f",&comprimento);

    printf("digite a largura do comodo:");
    scanf("%f",&largura);

    area = comprimento*largura;
    potencia = area*18;

    printf("a area do comodo é %2.0f metros quadrados\n",area);
    printf("a potencia de iluminacao é %2.0f W\n",potencia);

    return 0;
}