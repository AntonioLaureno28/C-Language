#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;

    printf("Digite a altura da pessoa em metros: ");
    scanf("%f", &altura);
    printf("Digite o sexo da pessoa (M para masculino ou F para feminino): ");
    scanf(" %c", &sexo);

    if (sexo == 'M') {
        peso_ideal = (72.7 * altura) - 58;
        printf("O peso ideal para um homem é: %.2f kg", peso_ideal);
    }
    else if (sexo == 'F') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal para uma mulher é: %.2f kg", peso_ideal);
    }
    else {
        printf("Sexo inválido.");
    }

    return 0;
}
