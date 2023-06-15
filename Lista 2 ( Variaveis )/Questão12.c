// Faça um programa que receba o número de horas trabalhadas, o valor do salário mínimo e o número de horas extras trabalhadas, calcule e mostre o salário a receber, 
// seguindo as regras abaixo:
//A hora trabalhada vale 1/8 do salário mínimo;
//A hora extra vale ¼ do salário mínimo;
//O salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora trabalhada;
//A quantidade a receber pelas horas extras equivale ao número de horas extras trabalhadas multiplicado pelo valor da hora extra;
//O salário a receber equivale ao salário bruto mais a quantia a receber pelas horas extras;

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float horas_trab, sala_min, horas_ext, sala_real, valor_ht, valor_hex, sala_bruto, receb_hex;


    printf("digite o valor do salario minimo: ");
    scanf("%f",&sala_min);

    printf("digite o numero de horas trabalhadas: ");
    scanf("%f",&horas_trab); 

    printf("digite o numero de horas extras trabalhadas: ");
    scanf("%f",&horas_ext);

    valor_ht = (sala_min)/8;
    valor_hex = (sala_min)/4;
    sala_bruto = horas_trab*valor_ht;
    receb_hex = valor_hex*horas_ext; 
    sala_real = sala_bruto + receb_hex; 

    printf("o salario a receber é: %2.0f reais",sala_real);

    return 0;
}