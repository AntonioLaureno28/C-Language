#include <stdio.h> 

int main(){
    int i, n , t1 = 0, t2 = 1, proxtermo;

    printf("digite o numero de termos: ");
    scanf("%d",&n);

    for (i = 0; i <= n; i++){
        printf("%d, ", t1);
        proxtermo = t1 + t2;
        t1 = t2;
        t2 = proxtermo;

    }
    return 0;
}