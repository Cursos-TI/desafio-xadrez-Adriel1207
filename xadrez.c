#include <stdio.h>

    int main(){
        //Declaração de variáveis para cada peça do tabuleiro
        int movimentoTorre;
        int movimentoBispo = 1;
        int movimentoRainha = 1;
        
            printf("Movimentos da Torre:\n");//Imprime qual peça está se movimentando
        for (movimentoTorre = 1; movimentoTorre <= 5; movimentoTorre++)
        {
            printf("%d - Direita\n", movimentoTorre);// Imprimindo a direção do movimento
        }
            printf("\n");
            printf("Movimentos do Bispo:\n");//Imprime qual peça está se movimentando
        while (movimentoBispo <= 5)
        {
            printf("%d - Cima, Direita\n", movimentoBispo);// Imprimindo a direção do movimento
            movimentoBispo++;
        }
        
            printf("\n");
            printf("Movimentos da Rainha:\n");//Imprime qual peça está se movimentando
        do
        {
            printf("%d - Esquerda\n", movimentoRainha);// Imprimindo a direção do movimento
            movimentoRainha++;
        } while (movimentoRainha <= 8);

        return 0;                
    }