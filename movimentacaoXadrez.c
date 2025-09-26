#include <stdio.h>
int main(){
    int j = 0;
    
    //MOVIMENTAÇÃO DA TORRE
    //A variável i não foi declarada fora do "for", pois ela só existe no contexto interno do for.
    //iniciando de zero, vai movimentar para a direita e incrementar 1 na variável de controle i.
    //quando a variável de controle i chegar a 5, o loop encerra e informa que o moviemto da TORRE foi finalizado.
    printf("Movimentação da TORRE.\n\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Direita\n");
    }
    printf("\nmovimento da TORRE finalizada.\n");
    printf("\n===================================\n\n");

    //MOVIMENTAÇÃO DO BISPO
    //Primeiro movimenta o bisco, depois incrementa a variável de controle j.
    //Se a variável de controle j ainda for menor que 5, movimenta novamente. 
    //Quando a variáveld e controle j for igual a 5 o loop encerra e informa que o movimento do BISPO foi finalizado.
    printf("Movimentação do BISPO.\n\n");
    do{
        printf("Cima - Direita\n");
        j++;
    } while (j < 5); 
    printf("\nmovimento do BISPO finalizada.\n");
    printf("\n===================================\n\n");

    //MOVIMENTAÇÃO DA RAINHA
    //como eu reutilizei a variável de controle j, precisei atribuir o valor 0 para ele novamente.
    //Movimenta a peça e incrementa a variável de controle j. Repete o mobimento e o incremento enquanto a variável de controle for menor que 8.
    //Quando a variável de controle j for igual a 8 o loop encerra e informa que o movimento da RAINHA foi finalizado.
    printf("Movimentação da RAINHA.\n\n");
    j = 0;
    while (j < 8)
    {
        printf("Esquerda\n");
        j++;
    }
    printf("\nmovimento da RAINHA finalizada.\n");
    printf("\n===================================\n");

    //MOVIMENTAÇÃO DO CAVALO
    //A variável i não foi declarada fora do "for", pois ela só existe no contexto interno do for. Por isso a mesma variável pode ser declarada no movimento da TORRE e do CAVALO sem gerar conflito.
    //Se a variável de controle for menor que 2, movimenta a peça para baixo e incrementa a variável de controle i. Repete o movimento se i ainda for menor que 2.
    //Se a varivel de controle i for igual a 2, faz o movimento para a esquerda e incrementa a variável de controle i.
    //Quando a variáel de controle i for igual a 2 o loop interno (while) executa e quando a variáel de controle i for igual a 3 o loop interno (while) encerra e informa que o movimento do CAVALO foi finalizado.
    printf("Movimentação do CAVALO.\n\n");
    for(int i = 0; i < 2; i++){
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