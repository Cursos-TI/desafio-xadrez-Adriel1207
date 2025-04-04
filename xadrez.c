#include <stdio.h>
    
    void moverTorre(int casas){ //Função recursiva para movimento da Torre.
        if (casas > 0){ //Condição para repetição recursiva.
            moverTorre(casas -1); //Chama a si mesma com n - 1
            printf("%d - Direita\n", casas); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        }
    }
    
    void moverBispo(int casas){ //Função recursiva para movimento do Bispo.
        if (casas > 0){ //Condição para repetição recursiva.
            int movimentoBispo = 1, Bispo; //Declaração de variévais dos movimentos do Bispo.
            while (movimentoBispo <= 5) //Estrutura (externa) de repetição aninhada para movimento do Bispo.
            {
                printf("%d - Cima\n", movimentoBispo); //Imprime o valor autal da sequencia do movimento seguido de sua direção (vertical).      
                for (Bispo = 1; Bispo < 2 ; Bispo++) //Estrutura (interna) de repetição aninhada para movimento do Bispo.
                {
                    printf("%d - Direita\n", movimentoBispo);//Imprime o valor autal da sequencia do movimento seguido de sua direção (horizontal). 
                }
                movimentoBispo++; //Incrementando variavel para limitar a condição da estrutura de repetição externa.
            }
        }
    }
    
    void moverRainha(int casas){//Função recursiva para movimento da Rainha.
        if (casas > 0){ //Condição para repetição recursiva.
            moverRainha(casas -1); //Chama a si mesma com n - 1
            printf("%d - Esquerda\n", casas); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        }
    }

    int main(){
        //Declaração de variáveis do Cavalo
        int movimentoCavalo = 3;
        int entradaCavalo;

    //Entrada do jogo
    printf("#######################  Jogo de Xadrez ###################### \n");
    
    //Movimento da torre
    printf("#####################  Movimento da Torre #################### \n\n");
    moverTorre(5); //Chamada recursiva para imprimir o movimento da Torre.
    printf("\n");

    //Movimento do bispo
    printf("#####################  Movimento do Bispo #################### \n\n");
    moverBispo(5); //Chamada recursiva para imprimir o movimento do Bispo.
    printf("\n");

    //Movimento da Rainha
    printf("####################  Movimento da Rainha #################### \n\n");
    moverRainha(8); //Chamada recursiva para imprimir o movimento da Rainha.
    printf("\n");

    //Menu para entra da dados do movimento do cavalo.
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
    case 1:
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3) //Estruruta (externa) de repetição aninhada para executar o movimento do cavalo.
    {
        for (int i = 1, j = 5; i != j; i++, j--) //Estrutura (interna) de repetição com multiplas variáveis e condições para movimento do Cavalo.
        {
            printf("%d - Cima\n", i); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        }
        printf("%d - Direita\n", movimentoCavalo); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        movimentoCavalo++; //Incrementando variavel para limitar a condição da estrutura de repetição externa.
    }
        break;
    
    case 2:
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3) //Estruruta (externa) de repetição aninhada para executar o movimento do cavalo.
    {
        for (int i = 1, j = 5; i != j; i++, j--) //Estrutura (interna) de repetição com multiplas variáveis e condições para movimento do Cavalo.
        {
            printf("%d - Cima\n", i); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        }
        printf("%d - Esquerda\n", movimentoCavalo); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        movimentoCavalo++; //Incrementando variavel para limitar a condição da estrutura de repetição externa.
    }
    break;

    case 3:
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3) //Estruruta (externa) de repetição aninhada para executar o movimento do cavalo.
    {
        for (int i = 1, j = 5; i != j; i++, j--) //Estrutura (interna) de repetição com multiplas variáveis e condições para movimento do Cavalo.
        {
            printf("%d - Baixo\n", i); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        }
        printf("%d - Direita\n", movimentoCavalo); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        movimentoCavalo++; //Incrementando variavel para limitar a condição da estrutura de repetição externa.
    }
    break;

    case 4:
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3) //Estruruta (externa) de repetição aninhada para executar o movimento do cavalo.
    {
        for (int i = 1, j = 5; i != j; i++, j--) //Estrutura (interna) de repetição com multiplas variáveis e condições para movimento do Cavalo.
        {
            printf("%d - Baixo\n", i); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        }
        printf("%d - Esquerda\n", movimentoCavalo); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        movimentoCavalo++; //Incrementando variavel para limitar a condição da estrutura de repetição externa.
    }
    break;

    case 5:
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3) //Estruruta (externa) de repetição aninhada para executar o movimento do cavalo.
    {
        for (int i = 1, j = 5; i != j; i++, j--) //Estrutura (interna) de repetição com multiplas variáveis e condições para movimento do Cavalo.
        {
            printf("%d - Direita\n", i); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        }
        printf("%d - Cima\n", movimentoCavalo); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        movimentoCavalo++; //Incrementando variavel para limitar a condição da estrutura de repetição externa.
    }
    break;

    case 6:
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3) //Estruruta (externa) de repetição aninhada para executar o movimento do cavalo.
    {
        for (int i = 1, j = 5; i != j; i++, j--) //Estrutura (interna) de repetição com multiplas variáveis e condições para movimento do Cavalo.
        {
            printf("%d - Direita\n", i); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        }
        printf("%d - Baixo\n", movimentoCavalo); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        movimentoCavalo++; //Incrementando variavel para limitar a condição da estrutura de repetição externa.
    }
    break;

    case 7:
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3) //Estruruta (externa) de repetição aninhada para executar o movimento do cavalo.
    {
        for (int i = 1, j = 5; i != j; i++, j--) //Estrutura (interna) de repetição com multiplas variáveis e condições para movimento do Cavalo.
        {
            printf("%d - Esquerda\n", i); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        }
        printf("%d - Cima\n", movimentoCavalo); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        movimentoCavalo++; //Incrementando variavel para limitar a condição da estrutura de repetição externa.
    }
    break;

    case 8:
    printf("Execução do movimento:\n\n");
    while (movimentoCavalo <= 3) //Estruruta (externa) de repetição aninhada para executar o movimento do cavalo.
    {
        for (int i = 1, j = 5; i != j; i++, j--) //Estrutura (interna) de repetição com multiplas variáveis e condições para movimento do Cavalo.
        {
            printf("%d - Esquerda\n", i); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        }
        printf("%d - Baixo\n", movimentoCavalo); //Imprime o valor autal da sequencia do movimento seguido de sua direção.
        movimentoCavalo++; //Incrementando variavel para limitar a condição da estrutura de repetição externa.
    }
    break;

    default:
    printf("Opção inválida\n");
    printf("Entre com numero de 1 a 8.");
    }

    return 0;
    }