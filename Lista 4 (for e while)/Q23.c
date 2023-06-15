#include <stdio.h> 

int main(){
    int i, n , t1, t2 , proxtermo;

    printf("digite o primeiro termo: ");
    scanf("%d",&t1);

    printf("digite o segundo termo: ");
    scanf("%d",&t2);

    printf("digite o numero de termos: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++){
        printf("%d, ", t1);
        proxtermo = t1 + t2;
        t1 = t2;
        t2 = proxtermo;

    }
    return 0;
}