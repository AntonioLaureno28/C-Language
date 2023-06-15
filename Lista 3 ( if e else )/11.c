#include <stdio.h>
#include <math.h>

int main(){
    int x, y

    printf("digite dois numeros: ");
    scanf("%d%d", &x, &y);
    printf("%d e divisivel por %d\n?",x, y);

    if (x % y == 0){
        printf("divisivel por %d\n",y);
    } else {
        printf("nao divisivel por %d\n",y);
    }
    return 0;
}
