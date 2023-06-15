#include <stdio.h>

int main(){
    int V[101];
    int i;

    for (i = 200; i >= 100; i--){
        V[i]= i;
    }

    i = 200;
    while (i >= 100){
        printf("%d\n", V[i]);
        i--;
    }

    return 0;
}