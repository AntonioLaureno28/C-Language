#include <stdio.h>
int main(){
    float preco, novopreco,valorparcelas;
    int parcelas;
    printf("digite o preco do produto: \n");
    scanf("%f",&preco);
    printf("digite o numero de parcelas: \n");
    scanf("%d",&parcelas);

    if (parcelas == 1){
        novopreco = preco;
    } else if (parcelas == 2){
        novopreco = preco * 1.07;
    } else if (parcelas == 3);{
        novopreco = preco * 1.10;
    } else {
        printf("numero de parcelas invalido");
    }
    valorparcelas = novopreco/parcelas;
    printf("preco final: %.2f\n",novopreco);
    printf("valor de cada parcela: %.2f\n",valorparcelas);



    return 0;
}
