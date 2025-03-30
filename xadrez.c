#include <stdio.h>

    int main(){
        // Declaração de variáveis 
        int movimentoTorre;
        int movimentoBispo = 1;
        int movimentoRainha = 1;
        int movimentoCavalo = 3;
        int entradaCavalo;

    printf("#######################  Jogo de Xadrez ###################### \n");
    //Movimento da torre
    printf("#####################  Movimento da Torre #################### \n\n");
   
    for (movimentoTorre = 1; movimentoTorre <= 5; movimentoTorre++) //Estrutura de repetição for para imprimir o movimento da torre.
    {
        printf("%d - Direita\n", movimentoTorre);
    }

    printf("\n");//Movimento do bispo
    printf("#####################  Movimento do Bispo #################### \n\n");
    
    while (movimentoBispo <= 5) //Estrutura de repetição While para imprimir o movimento do Bispo.
    {
        printf("%d - Cima, Direita\n", movimentoBispo);
        movimentoBispo++;
    }

    printf("\n");//Movimento da Rainha
    printf("####################  Movimento da Rainha #################### \n\n");
    
    do
    {
        printf("%d - Esquerda\n", movimentoRainha);
        movimentoRainha++;
    } while (movimentoRainha <= 8);// Estrutura de repetição para imprimir o movimento da Rainha.
    
    printf("\n"); //Menu para entra da dados do movimento do cavalo.
    printf("####################  Movimento do Cavalo #################### \n\n");
    printf("Escolha o movimento do cavalo:\n\n");
    printf("N°1 - Cima, cima e direita.\n");
    printf("N°2 - Cima, cima e esquerda.\n");
    printf("N°3 - Baixo, baixo e direita.\n");
    printf("N°4 - Baixo, baixo e esquerda.\n");
    printf("N°5 - Direita, direita e cima.\n");
    printf("N°6 - Direita, direita e baixo.\n");
    printf("N°7 - Esquerda, esquerda e cima.\n");
    printf("N°8 - Esquerda, esquerda e baixo.\n\n");
    printf("Digite o número do movimento:\n");
    scanf("%d", &entradaCavalo); //Entrada de dados para definir a opção de movimento do cavalo.
    printf("\n");    

    //Estrutura de decisão para executar o lopping de acordo com a escolha do usuário.
    switch (entradaCavalo) 
    {
    case 1:// Estruruta de repetição aninhada para executar o movimento do cavalo.
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3)
    {
        for (int i = 1; i < 3; i++)
        {
            printf("%d - Cima\n", i);
        }
        printf("%d - Direita\n", movimentoCavalo);
        movimentoCavalo++;
    }
        break;
    
    case 2:// Estruruta de repetição aninhada para executar o movimento do cavalo.
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3)
    {
        for (int i = 1; i < 3; i++)
        {
            printf("%d - Cima\n", i);
        }
        printf("%d - Esquerda\n", movimentoCavalo);
        movimentoCavalo++;
    }
    break;

    case 3:// Estruruta de repetição aninhada para executar o movimento do cavalo.
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3)
    {
        for (int i = 1; i < 3; i++)
        {
            printf("%d - Baixo\n", i);
        }
        printf("%d - Direita\n", movimentoCavalo);
        movimentoCavalo++;
    }
    break;

    case 4:// Estruruta de repetição aninhada para executar o movimento do cavalo.
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3)
    {
        for (int i = 1; i < 3; i++)
        {
            printf("%d - Baixo\n", i);
        }
        printf("%d - Esquerda\n", movimentoCavalo);
        movimentoCavalo++;
    }
    break;

    case 5:// Estruruta de repetição aninhada para executar o movimento do cavalo.
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3)
    {
        for (int i = 1; i < 3; i++)
        {
            printf("%d - Direita\n", i);
        }
        printf("%d - Cima\n", movimentoCavalo);
        movimentoCavalo++;
    }
    break;

    case 6:// Estruruta de repetição aninhada para executar o movimento do cavalo.
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3)
    {
        for (int i = 1; i < 3; i++)
        {
            printf("%d - Direita\n", i);
        }
        printf("%d - Baixo\n", movimentoCavalo);
        movimentoCavalo++;
    }
    break;

    case 7:// Estruruta de repetição aninhada para executar o movimento do cavalo.
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3)
    {
        for (int i = 1; i < 3; i++)
        {
            printf("%d - Esquerda\n", i);
        }
        printf("%d - Cima\n", movimentoCavalo);
        movimentoCavalo++;
    }
    break;

    case 8:// Estruruta de repetição aninhada para executar o movimento do cavalo.
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3)
    {
        for (int i = 1; i < 3; i++)
        {
            printf("%d - Esquerda\n", i);
        }
        printf("%d - Baixo\n", movimentoCavalo);
        movimentoCavalo++;
    }
    break;

    default:
    printf("Opção inválida\n");
    printf("Entre com numero de 1 a 8.");
    }

    return 0;
    }