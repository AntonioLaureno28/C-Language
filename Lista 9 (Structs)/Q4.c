#include <stdio.h>
#include <string.h>

typedef struct tipo_conta{
    int num_doc;
    int cod;
    int diavenc;
    int mesvenc;
    int anovenc;
    int diapag;
    int mespag;
    int anopag;
    float valor_conta;
    float valor_juros;
}conta;


int calculajuros(conta vet[], int i){
    int diasp, diasv, aux;
    float juros;
    diasp = (vet[i].anopag*365) + (vet[i].mespag*30) + vet[i].diapag;
    diasv = (vet[i].anovenc*365) + (vet[i].mesvenc*30) + vet[i].diavenc;
    if (diasp > diasv){
        aux = diasp - diasv;
    } else {
        aux = 0;
    }
    juros = 0.0002*vet[i].valor_conta*aux;
    return juros;
}

int main(){
    conta vet[2];
    for(int i = 0; i < 2; i++){
        printf("conta %d: ", i+1);
        printf("Numero do documento: ");
        scanf("%d", &vet[i].num_doc);
        printf("Codigo: ");
        scanf("%d", &vet[i].cod);
        printf("Data de Vencimento (dd/mm/aaaa): ");
        scanf("%d", &vet[i].diavenc);
        scanf("%d", &vet[i].mesvenc);
        scanf("%d", &vet[i].anovenc);
        printf("Data de pagamento (dd/mm/aaaa): ");
        scanf("%d", &vet[i].diapag);
        scanf("%d", &vet[i].mespag);
        scanf("%d", &vet[i].anopag);
        printf("Valor: ");
        scanf("%f", &vet[i].valor_conta);
    }
    for(int i = 0; i < 2; i++){
        float jur = calculajuros(vet,i);
        printf("o valor do juros: %f", jur);
    }
    return 0;    
}