#include <stdio.h>
//MOVIMENTAÇÃO DA TORRE
//A variável de controle op recebe do chamado da função o valor 5 (numero de vezes que vai mover a TORRE). 
//A função "movetorre", move a TORRE, decrementa o valor da variável de controle op e em seguida chama a sí mesma novamente.
//Quando a variável de controle op for igual a 0, sai da função retornando na linha 41, seguinte a chamada da função.
void movetorre(int op){
	if(op > 0){		
		printf("Direita\n");
		movetorre(op -1);
	}
}

//MOVIMENTAÇÃO DO BISPO
//Existem maneiras muito mais simples e elegantes de implementar essa solução, mas para fins de cumprir a exigencia do trabalho, estou usando todas esses comandos juntos.
//A variável de controle op recebe do chamado da função o valor 1 (numero de vezes que a recursividade vai rodar). Como dentro da recursividade existem loops, ela só vai rodar uma vez. 
//O primeiro loop vai rodar 5 vezes e o segundo loop, aninhado ao primeiro, vai rodar uma vez para cada vez que o primeiro rodar. O primeiro será responsável por mover o BISPO na vertical e o aninhado por mover na horizontal.
//a função segue o mesmo padrão de recursividade da função mover TORRE.
void movebispo(int op){
	if(op > 0){		
		for (int i = 0; i < 5; i++){
        printf("Cima - ");
        for (int i = 0; i < 1; i++){
            printf("Direita \n");
        }
    }
		movebispo(op -1);
	}
}

//MOVIMENTAÇÃO DA RAINHA
//A variável de controle op recebe do chamado da função o valor 8 (numero de vezes que vai mover a RAINHA). 
//A função "movereinha", move a RAINHA, decrementa o valor da variável de controle op e em seguida chama a sí mesma novamente.
//Quando a variável de controle op for igual a 0, sai da função retornando na linha 60, seguinte a chamada da função.
void moverainha(int op){
	if(op > 0){		
		printf("Esquerda\n");
		moverainha(op -1);
	}
}

//VARIÁVEL OP
//Utilizei a mesma variável dentro de várias funções diferentes devido ao fato de que uma variável declarada dentro de uma função, só vai existir dentro da função.

int main(){

    int passov= 0, passoh = 0, passot = 0;
    
    //VER FUNÇÃO "movetorre" - Linha 6
    printf("Movimentação da TORRE.\n\n");
    movetorre(5);
    printf("\nmovimento da TORRE finalizada.\n");
    printf("\n===================================\n\n");

    //VER FUNÇÃO "movebispo" - Linha 18
    printf("Movimentação do BISPO.\n\n");
	movebispo(1);
    printf("\nmovimento do BISPO finalizada.\n");
    printf("\n===================================\n\n");

    //VER FUNÇÃO "moverainha" - Linha 34
    printf("Movimentação da RAINHA.\n\n");
    moverainha(8);
    printf("\nmovimento da RAINHA finalizada.\n");
    printf("\n===================================\n");

    //MOVIMENTAÇÃO DO CAVALO
	//Existem maneiras muito mais simples e elegantes de implementar essa solução, mas para fins de cumprir a exigencia do trabalho, estou usando todas esses comandos juntos.
	//Utilizo o loop mais externo para controlar o movimento (os três passos) do cavalo. enquanto a variavel de controle passot for menor que 3 ele vai se repetir.
	//A função "if" vai mover a peça na vertical uma vez e vai incrementar as variáveis passot e passov, se a variável de controle for 2 ou mais, será executado a função "else".
	//Dentro do else temos um loop que só vai rodar de o total de passos for menor que 3 e com duas condições dentro dele: no "if" vai interromper o loop pois a variável de controle passoh vai estar indicando que o CAVALO já se moveu na horizontal e no "else" vai mover o CAVALO na horizontal e fazer o incremento de passot e passoh.
	//por fim quando passot for 3 ou mais o loop externo vai encerrar, voltando o controle para a linha 91 do programa. A proxima após o loop.
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