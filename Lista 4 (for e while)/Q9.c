#include <stdio.h>

int main(){
   int numalunos, i;
   float nota, media, maior1 = 0, maior2 = 0, soma = 0;

   printf("Digite o numero de alunos; ");
   scanf("%d",&numalunos);

   for (i = 1; i <= numalunos; i++){
        printf("digite a nota do aluno %d: ", i);
        scanf("%f", &nota);
        soma += nota;

        if (nota > maior1){
            maior2 = maior1;
            maior1 = nota;
        } else if (nota > maior2){
            maior2 = nota;
        }
   }
   media = soma/numalunos;
   printf("A maior nota: %.2f\n", maior1);
   printf("A segunda maior: %.2f\n", maior2);
   printf("media: %.2f", media);

   return 0;
}