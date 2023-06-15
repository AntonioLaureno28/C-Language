#include <stdio.h>

int main(){
    int num, i=1;

    printf("digite um numero: ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){
        if (i % 3 == 0 && i % 5 == 0){
            printf("multiplos de 3 e 5 no intervalo de 1 a %d: %d", num, i);
        }
    }
    return 0;

}