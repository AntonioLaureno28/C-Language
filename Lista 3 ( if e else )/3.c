#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float saldomedio, credito;

    printf("digite o seu saldo medio: ");
    scanf("%f",&saldomedio);
    printf("saldo medio: %f",saldomedio);

    if (saldomedio <= 200){
        credito = saldomedio*0.10;
        printf("credito possivel: %f", credito);
    } 
    else if (saldomedio > 200 && saldomedio <= 300){
        credito = saldomedio*0.20;
        printf("credito possivel: %f", credito);
    }
    else if (saldomedio > 300 && saldomedio <= 400){
        credito = saldomedio*0.25;
        printf("credito possivel: %f", credito);

    }
    else{
        credito = saldomedio*0.30:
        printf("credito possivel: %f", credito);
    }
    
    return 0;
}