#include <stdio.h>

int main() {

    // Movimento do BISPO usando o WHILE
    // O Bispo se move 5 casas na diagonal (cima e direita)

    printf("Movimento da BISPO: \n");
    printf("5 casas na diagonal. \n \n");

    int bispo = 1;

    while (bispo <= 5)
    {
        printf("Cima Direita \n");
        bispo++;
    }
    
    // Esse print serve para separar as duas estruturas, pulando uma linha.
    printf("\n");

    // Movimento da TORRE usando o FOR
    // A torre se move 5 casas para cima (frente)

    printf("Movimento da TORRE: \n");
    printf("5 casas para cima. \n \n");

    for (int torre = 1 ; torre <= 5 ; torre++) {
        printf("Cima \n");
    }

    // Esse print serve para separar as duas estruturas, pulando uma linha.
    printf("\n");


    // Movimento da RAINHA usando DO-WHILE
    // A rainha se move 8 casas para a esquerda

    printf("Movimento da RAINHA: \n");  
    printf("8 casas para esquerda. \n \n");
  
    int rainha = 1;

    do
    {
        printf("Esquerda \n");
        rainha++;
    } while (rainha <= 8);
    
    // Esse print serve para separar as duas estruturas, pulando uma linha.
    printf("\n");

    // Movimento do CAVALO usando LOOP ANINHADOS (FOR e WHILE)
    // O cavalo se move 2 casas para baixo e uma  para ESQUERDA, simulando um L.

    printf("Movimento do CAVALO: \n");  
    printf("2 casas para baixo e 1 para esquerda. \n \n");

    // Define quantas casas o cavalo vai se mover e em que direção
    int baixo = 2;    // Cavalo se move 2 casas para baixo
    int esquerda = 1; // Cavalo se move 1 casa para esquerda
    
    // Loop externo (obrigatório: for) para movimento para baixo
    for (int i = 0 ; i < baixo ; i++)
    {
        printf("Baixo \n");
        // Só será executado quando estivermos na última descida (i == 1)
        if ( i == baixo - 1)
        {
            // Loop interno: no último movimento para baixo, executa o momento para a esquerda.
            int j = 0; // Inicializa o contatos para o loop while
            while (j < esquerda)
            {
                printf("Esquerda \n");
                j++; // Incrementa o contator do while
            }
        }
    }   

    return 0;
}
