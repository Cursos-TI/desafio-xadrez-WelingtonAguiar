#include <stdio.h>

// Função recursiva para movimentar a TORRE
void moverTorre(int casas) 
{
    if (casas == 0) return; // Condição de parada: quando não há mais casas para mover
    printf("Cima\n"); // Imprime o movimento "Cima"
    moverTorre(casas - 1); // Chamada recursiva para mover a torre uma casa a menos
}

// Função recursiva e com loops aninhados para movimentar o BISPO
void moverBispo(int vertical, int horizontal) 
{
    if (vertical == 0) return; // Condição de parada: quando não há mais movimentos verticais
    
    // Loop para simular o movimento horizontal antes de subir
    for (int j = 0; j < horizontal; j++) 
    {
        // Aqui movemos horizontalmente antes de subir
        // Mas vamos imprimir tudo numa linha só depois do loop
    }

    // Como o movimento do bispo é diagonal, imprimimos "Cima Direita" por iteração
    printf("Cima Direita\n");

    // Chamada recursiva para continuar o movimento diagonal
    moverBispo(vertical - 1, horizontal); // Decrementa o movimento vertical
}

// Função recursiva para movimentar a RAINHA
void moverRainha(int casas) 
{
    if (casas == 0) return; // Condição de parada: quando não há mais casas para mover
    printf("Esquerda\n"); // Imprime o movimento "Esquerda"
    moverRainha(casas - 1); // Chamada recursiva para mover a rainha uma casa a menos
}

int main() 
{
    // Movimento do BISPO (Recursivo com loops aninhados)
    printf("Movimento do BISPO: \n\n");
    moverBispo(5, 1); // Movimento diagonal: 5 casas para cima e 1 para a direita

    printf("\n");

    // Movimento da TORRE (Recursivo)
    printf("Movimento da TORRE: \n\n");
    moverTorre(5); // Movimento vertical: 5 casas para cima

    printf("\n");

    // Movimento da RAINHA (Recursivo)
    printf("Movimento da RAINHA: \n\n");
    moverRainha(8); // Movimento horizontal: 8 casas para a esquerda

    printf("\n");

    // Movimento do CAVALO com loops complexos e controle de fluxo
    printf("Movimento do CAVALO: \n\n");

    int cima = 2; // Número de movimentos para cima
    int direita = 1; // Número de movimentos para a direita

    // Loop para simular o movimento do cavalo
    for (int i = 0; i < cima; i++) 
    {
        printf("Cima\n"); // Imprime o movimento "Cima"
        if (i == cima - 1) 
        { // Quando atingir o último movimento para cima
            for (int j = 0; j < direita; j++) 
            {
                if (j == 1) break; // Interrompe o loop após um movimento para a direita
                printf("Direita\n"); // Imprime o movimento "Direita"
            }
        }
        if (i > cima) break; // Condição redundante para interromper o loop (não será atingida)
        if (i == 0) continue; // Continua para a próxima iteração se for a primeira
    }

    return 0; // Finaliza o programa
}
