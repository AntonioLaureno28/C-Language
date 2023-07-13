#include<stdio.h>
#include<string.h>

struct obra{
int num_tombo;
int num_exemplar;
char data_compra[10];
};

struct tombo{
int num_tombo;
char nome_obra[50];
char nome_autor[50];
char nome_editora[20];
int ano;
};

void cadastrar_tombo(int pos,struct tombo vet[]);
void cadastrar_obra(int pos,struct obra vet[]);
void mostrar_obra_ano(int tam1,int tam2,int ano,struct tombo vet1[],struct obra vet2[]);


int main()
{
    struct tombo vet_tombo[20];
    struct obra vet_exemplar[60];
    int op,chave,tam_v1,tam_v2,ano;
    chave=1;
    tam_v1=0;
    tam_v2=0;

    while (chave==1)
    {
        printf("\n Digite sua opcao: (1) - cadastrar tombo, \n(2) - cadastrar obra, \n(3) - mostrar obra por ano, \n(4) - Fim do Programa\n");
        scanf("%d",&op);
        switch(op){

        case(1):
            cadastrar_tombo(tam_v1,vet_tombo);
            tam_v1+=1;
            break;

        case(2):
            cadastrar_obra(tam_v2,vet_exemplar);
            tam_v2+=1;
            break;

        case(3):
            printf("\n Digite o ano de busca: ");
            scanf("%d",&ano);
            mostrar_obra_ano(tam_v1,tam_v2,ano,vet_tombo,vet_exemplar);
            break;

        case(4):
            chave=0;
            break;

        default:
            printf("\nOpcao invalida!");
            break;

        }

    }

    return 0;






}

void cadastrar_tombo(int pos,struct tombo vet[])
{


    printf("\nInforme o numero do tombo: ");
    scanf("%d",&vet[pos].num_tombo);
    fflush(stdin);
    printf("\nInforme o nome da obra: ");
    gets(vet[pos].nome_obra);
    fflush(stdin);
    printf("\nInforme o nome do autor: ");
    gets(vet[pos].nome_autor);
    fflush(stdin);
    printf("\nInforme o nome da editora: ");
    gets(vet[pos].nome_editora);
    fflush(stdin);
    printf("\nInforme o ano: ");
    scanf("%d",&vet[pos].ano);
    fflush(stdin);

}

void cadastrar_obra(int pos,struct obra vet[])
{

    printf("\nInforme o numero do tombo: ");
    scanf("%d",&vet[pos].num_tombo);

    printf("\nInforme o numero do exemplar: ");
    scanf("%d",&vet[pos].num_exemplar);
    fflush(stdin);
    printf("\nInforme a data da compra: ");
    gets(vet[pos].data_compra);
    fflush(stdin);



}

void mostrar_obra_ano(int tam1, int tam2, int ano, struct tombo vet1[],struct obra vet2[])
{

    int i,j,num_tombo;

    for (i=0;i<tam2;i++)
    {

        num_tombo = vet2[i].num_tombo;

        for (j=0;j<tam1;j++)

        {
            if (vet1[j].num_tombo == num_tombo)
                if (vet1[j].ano == ano)
                {
                    printf("\nNumero do tombo: %d",vet2[i].num_tombo);
                    printf("\nNumero do exemplar: %d",vet2[i].num_exemplar);
                    printf("\nData da compra: %s",vet2[i].data_compra);
                    printf("\n*****\n");

                }
        }

    }




}










