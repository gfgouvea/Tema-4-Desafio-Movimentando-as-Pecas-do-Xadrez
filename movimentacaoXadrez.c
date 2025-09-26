#include <stdio.h>
int main(){
    int i = 0;

    printf("Movimentação da TORRE.\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }
    printf("\nmovimento da TORRE finalizada.\n");
    printf("\n===================================\n\n");

    printf("Movimentação do BISPO.\n\n");
    do{
        printf("Cima - Direita\n");
        i++;
    } while (i < 5); 
    printf("\nmovimento do BISPO finalizada.\n");
    printf("\n===================================\n\n");

    printf("Movimentação da RAINHA.\n\n");
    i = 0;
    while (i < 8)
    {
        printf("Esquerda\n");
        i++;
    }
    printf("\nmovimento da RAINHA finalizada.\n");
    printf("\n===================================\n");

    printf("Movimentação do CAVALO.\n\n");
    for(i = 0; i <= 2; i++){
        printf("baixo\n");
        while (i == 2){
        printf("Esquerda\n");
        i++;
        }
    }
    printf("\nmovimento da CAVALO finalizada.\n");
    printf("\n===================================\n");
    printf("\nFim do experiento. Obrigado!.\n\n\n");

    return 0;
}