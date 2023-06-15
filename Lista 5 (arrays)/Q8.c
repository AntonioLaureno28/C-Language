#include <stdio.h>

int main(){
    int n, i, N[n];
    printf("digite o valor de n: ");
    scanf("%d", &n);

    if (n > 1000) {
        printf("o valor de n deve ser menor ou igual a 1000! \n");
        return 0;
    }

    printf("digite os valores de n: ");
    for (i = 0; i < n; i++){
        scanf("%d", &N[i]);
    }

    
}