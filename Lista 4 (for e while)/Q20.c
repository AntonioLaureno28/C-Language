#include <stdio.h>
#include <stdbool.h>

bool numprimo(int num){
// condição para o numero ser primo.
    if (num<=1){
        return false;
    }
    for (int i = 2; i*i <= num; i++){
        if (num % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n, cont = 0, num = 2;

    printf("digite um numero: ");
    scanf("%d", &n);

    while (cont < n){
        if (numprimo(num)){
            printf("%d\n", num);
            cont++;
        }
        num++;
    }
}