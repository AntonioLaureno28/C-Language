int main(){
    int A;
    int B, quociente = 0 ;
    
    printf("digite o numero A: ");
    scanf("%d", &A);

    printf("digite o numero B: ");
    scanf("%d", &B);

    if (A<=0 || B<=0){
        printf("erro!");
    }

    while (A>=B){
        A-=B;
        quociente++;
    }

    printf("o resto da diviao de %d por %d: %d", A, B, quociente);
    return 0;

}