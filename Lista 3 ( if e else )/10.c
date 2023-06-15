#include <stdio.h>
#include <math.h>

int main(){
    int x;

    printf("digite um numero: ");
    scanf("%d", &x);

    if (x % 5 == 0){
        printf("divisivel por 5");
    } else {
        printf("nao divisivel por 5");
    }
    return 0;
}
