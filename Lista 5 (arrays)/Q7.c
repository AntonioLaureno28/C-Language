#include <stdio.h> 

int main(){
    float temp, soma = 0, Temp[121];
    int i, j, numerodias = 0;

    for (i = 0; i < 121; i++){
        printf("digite a temperatura do dia %d: ", i+1);
        scanf("%f", &Temp[i]);

         while (Temp[i] < 15 || Temp[i] > 40){
        printf("temperatura errada. Digite novamente: ");
        scanf("%f", &Temp[i]);
    }
    }

    

    soma += Temp[i];


    int maiortemp = Temp[0];
    for (i = 1; i < 121; i++){
        if (maiortemp < Temp[i]){
            maiortemp = Temp[i];
        }
    }

    int menortemp = Temp[0];
    for (i = 1; i < 121; i++){
        if (menortemp > Temp[i]){
            maiortemp = Temp[i];
        }
    }

    float media = soma/121;

    for (i = 0; i < 121; i++){
        if (Temp[i] < media){
            numerodias++;
        }
    }

    printf("A menor temperatura ocorrida foi: %.1f\n", menortemp);
    printf("A maior temperatura ocorrida foi: %.1f\n", maiortemp);
    printf("A temperatura média foi: %.1f\n", media);
    printf("O número de dias com temperatura inferior à média foi: %d\n", numerodias);

    return 0;
}
