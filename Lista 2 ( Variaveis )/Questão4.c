#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(void){
    
    float kilos, gramas; 

    printf("Digite seu peso em kg:");
    scanf("%f",&kilos);

    gramas = (kilos*1000);
    printf("o seu peso em gramas é:%2.f",gramas);

    return 0;

}