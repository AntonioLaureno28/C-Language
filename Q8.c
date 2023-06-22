#include <stdio.h>

long long int fibonacci(long long int n){
    if (n==1 || n==2){
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}
//long long int fibonaccisem(long int n){
 //   long int n1, n2, n3, x;

   // n1 = 1, n2 = 1;

   // if (n==1 || n==2){
        //return 1
   // }
//}
int main(){

    int x; long long result;
    printf("indice do termo da serie: ");
    scanf("%d", &x);
    result = fibonacci(x);
    printf("o termo: %lld", result);

    return 0;
}