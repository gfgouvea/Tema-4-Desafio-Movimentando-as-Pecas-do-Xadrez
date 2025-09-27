#include <stdio.h>
//MOVIMENTAÇÃO DA TORRE
//recebe o valor 5 (numero de vezes que vai mover a torre) do chamado da função. Afunção chama a sí mesma com valor decrementado em 1 e move a torre enquando o valor da variavel de controle op for maior que 0.
void movetorre(int op){
	if(op > 0){		
		printf("Direita\n");
		movetorre(op -1);
	}
}

//MOVIMENTAÇÃO DO BISPO
void movebispo(int op){
	if(op > 0){		
		printf("Cima - Direita\n");
		movebispo(op -1);
	}
}

//MOVIMENTAÇÃO DA RAINHA
void moverainha(int op){
	if(op > 0){		
		printf("Esquerda\n");
		moverainha(op -1);
	}
}

int main(){

    int passov= 0, passoh = 0, passot = 0;
    
    //VER FUNÇÃO "movertorre" - Linha 4
    printf("Movimentação da TORRE.\n\n");
    movetorre(5);
    printf("\nmovimento da TORRE finalizada.\n");
    printf("\n===================================\n\n");

    //VER FUNÇÃO "moverbispo" - Linha 12
    printf("Movimentação do BISPO.\n\n");
    movebispo(5);
    printf("\nmovimento do BISPO finalizada.\n");
    printf("\n===================================\n\n");

    //VER FUNÇÃO "moverainha" - Linha 20
    printf("Movimentação da RAINHA.\n\n");
    moverainha(8);
    printf("\nmovimento da RAINHA finalizada.\n");
    printf("\n===================================\n");

    //MOVIMENTAÇÃO DO CAVALO
    printf("Movimentação do CAVALO.\n\n");
    while(passot < 3){
    	if(passov < 2){
		    printf("Cima \n");
    	    passov++;
    	    passot++;
    	} else{
    		while(passot < 3){
    			if(passoh >= 1){
					break;
				} else{
					printf("Direita \n");
    				passoh++;
    				passot++;
    			}
			}
		}
		continue;
	}
    printf("\nmovimento da CAVALO finalizada.\n");
    printf("\n===================================\n");
    printf("\nFim do experiento. Obrigado!.\n\n\n");

    return 0;
}