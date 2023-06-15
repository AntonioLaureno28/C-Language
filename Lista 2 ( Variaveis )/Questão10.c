//Faça um programa que recebe uma temperatura em Celsius, calcule e mostre essa temperatura em Fahrenheit


#include <stdio.h>
#include <math.h>
#include <locale.h>

int main (){
    float temp_celsius, temp_fah; 

    printf("valor da temperatura em celsius: ");
    scanf("%f",&temp_celsius);

    temp_fah = (9*temp_celsius)/5 + 32;

    printf("A temperatura em fahreheint e: %f",temp_fah);

    return 0;
}