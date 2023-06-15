//Faça um programa que receba a quantidade de dinheiro em reais que uma pessoa que 
//vai viajar possui. Ela vai passar por vários países e precisa converter seu dinheiro em 
//dólares, marco alemão e libra esterlina. Sabe-se que a cotação do dólar é de R$ 3,95, do 
//marco alemão R$ 4,25 e da libra esterlina é de 5,80. O programa deve fazer as 
//conversões e mostrá-las




#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float Real, Dolar, Libra, Marco;

    printf("digite o valor em reais: ");
    scanf("%f",&Real);

    Dolar = Real/3.95;
    Marco = Real/4.25;
    Libra = Real/5.80;

    printf("valor convertido em dolar: %2.0f dolares\n",Dolar);
    printf("valor convertido em marco: %2.0f marcos\n",Marco);
    printf("valor convertido em libra: %2.0f libras\n",Libra);

    return 0; 
}