#include <stdio.h>
#include <math.h>


int main(){
    float x, y;

    printf("digite um numero para x; \n");
    scanf("%f",&x);

    if (x <= 1){
        y = 1;
        printf("f(x) = %f\n",y);
    } else if (1 < x <= 2){
        y = 2;
        printf("f(x) = %f\n",y);
    } else if (2 < x <= 3){
        y = x*x;
        printf("f(x) = %f\n",y);
    } else {
        y = x*x*x;
        printf("f(x) = %f\n",y);
    }
    return 0;
}