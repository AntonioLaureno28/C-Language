#include <stdio.h> 

int main(){
    int Mat [6] [3]; 

    for (int i = 0; i < 6; i++){
        for (int j = 0; j < 3; j++){
            printf("digite a posicao %d %d: ", i, j);
            scanf("%d", & Mat [i][j]);
        }

    }

    int maior = Mat [0] [0], menor =  Mat [0] [0];
        for (int i = 0; i < 6; i++){
          for (int j = 0; j < 3; j++){
            if (Mat [i] [j] > maior){
                maior = Mat [i] [j];
            }
            if (Mat [i] [j] < menor){
                menor = Mat [i] [j];
            }

        }
    }

    printf("maior: %d\n", maior);
    printf("menor: %d\n", menor);


    return 0;
}