#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    int anoatual;
    int anonascimento, idade, anos_mes, anos_dias, anos_semanas; 

    printf("digite o ano do seu nascimento: ");
    scanf("%d",&anonascimento);

    printf("digite o ano atual: ");
    scanf("%d",&anoatual);

    idade = (anoatual-anonascimento);
    printf("voce tem %d anos",idade);

    anos_mes = idade*12;
    anos_dias = idade*365;
    anos_semanas = anos_dias/7;

    printf("a idade em anos:%d\n",idade);
    printf("a idade em mes:%d\n",anos_mes);
    printf("a idade em semanas:%d\n",anos_semanas);
    printf("a idade em dias:%d\n",anos_dias);


    return 0;

}