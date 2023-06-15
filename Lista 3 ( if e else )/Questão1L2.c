#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    float media, diferenca, produto, divisao;
    int escolha, x, y;

    printf("digite dois numeros: ");
    scanf("%d%d",&x, &y);

    printf("escolha uma das opcoes: ");
    printf("1: media ");
    printf("2: diferenca ");
    printf("3: produto ");
    printf("4: divisão do maior com o menor: ");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        media = (x + y)/2;
        printf("a media dos numeros sao: ",media);
        break;
    case 2:
        if (x > y){
            diferenca = x - y;
            
        } else {
            diferenca = y - x;
        }
        printf("a diferenca entre %d e %d é: %f",x , y, diferenca);
        break;
    case 3: 
        resultado = x * y;
        printf("o produto: ", produto);
        break;
    case 4:
        if (y == 0) {
            printf("Erro");
        } else {
            divisao = (float) x/y;
            printf("a divisao entre %d e %d e: %f",x , y, divisao)
        }
        break;
    default:
        printf("opcao invalida");
        break;
    }

    
    return 0;
}