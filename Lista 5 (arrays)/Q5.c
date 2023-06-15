#include <stdio.h>

int main(){
    int i, n , t1 = 0, t2 = 1, proxtermo, Fib[50], j = 0;

    printf("digite o numero de termos: ");
    scanf("%d",&n);

    for (i = 0; i <= n; i++){
        
        proxtermo = t1 + t2;
        Fib[j]= t1;
        j++;
        t1 = t2;
        t2 = proxtermo;

    }

    for (int i = 0; i < j; i++){
        printf("%d ", Fib[i]);
    }
    return 0;
}