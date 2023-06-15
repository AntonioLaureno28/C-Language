#include <stdio.h> 

int main(){
    int i, n , t1 = 1, Seq = 3 , proxtermo;

    printf("digite o numero de termos: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++){
        printf("%d, ", t1);
        proxtermo = t1 + Seq ;
        t1 = proxtermo;
        Seq = Seq + 2;

    }
    return 0;
}