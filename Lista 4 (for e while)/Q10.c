#include <stdio.h>

int main(){
    int votosG=0, votosZ=0, votosGi=0;
    int voto;

    do {
        printf("vote no seu candidato: 1 - ze, 2 - gal, 3 - gil  ");
        scanf("%d", &voto);

        switch (voto){
            case 1:
                votosZ++;
                break;
            case 2:
                votosG++;
                break;
            case 3:
                votosGi++;
                break;
            case 0:
                printf("eleicao encerrada!\n");
                break;
            default:
                printf("opcao invalida.\n");
                break;
        
        }
    } while (voto != 0);

    printf("Ze: %d votos\n", votosZ);
    printf("Gal: %d votos\n", votosG);
    printf("Gil: %d votos\n", votosGi);
}