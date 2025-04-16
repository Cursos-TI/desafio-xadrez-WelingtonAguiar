#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.


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


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Movimento da TORRE usando o FOR
    // A torre se move 5 casas para cima (frente)

    printf("Movimento da TORRE: \n");
    printf("5 casas para cima. \n \n");

    for (int torre = 1 ; torre <= 5 ; torre++) {
        printf("Cima \n");
    }

    // Esse print serve para separar as duas estruturas, pulando uma linha.
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

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
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
