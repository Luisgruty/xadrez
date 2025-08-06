
#include <stdio.h>

// === Funções recursivas ===

// Função recursiva para movimentar a Torre (direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);  // chamada recursiva
}

// Função recursiva para movimentar a Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);  // chamada recursiva
}

// Função recursiva com loops aninhados para movimentar o Bispo (diagonal cima-direita)
void moverBispo(int linhas, int colunas) {
    if (linhas <= 0 || colunas <= 0) return;

    // Loop aninhado para simular a diagonal (1 para cima e 1 para direita por casa)
    for (int i = 0; i < 1; i++) { // movimento vertical (externo)
        for (int j = 0; j < 1; j++) { // movimento horizontal (interno)
            printf("Cima Direita\n");
        }
    }

    moverBispo(linhas - 1, colunas - 1);  // chamada recursiva com redução de casas
}

// === Função para movimento do Cavalo usando loops complexos ===
// Movimento: 2 casas para cima, 1 para direita (em "L")
void moverCavalo(int movimentos) {
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < movimentos; i++) {
        for (int j = 0; j < 3; j++) {
            if (j < 2) {
                printf("Cima\n"); // duas vezes para cima
            } else if (j == 2) {
                printf("Direita\n"); // uma vez para a direita
            }

            // controle de fluxo
            if (j == 1 && i % 2 == 0) {
                continue; // simula um movimento diferente em pares
            }
            if (i == movimentos - 1 && j == 2) {
                break; // último movimento finaliza em "L"
            }
        }
    }
    printf("\n");
}

// === Função principal ===
int main() {
    // === Torre ===
    int movimentoTorre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(movimentoTorre);
    printf("\n");

    // === Bispo ===
    int movimentoBispoVertical = 5;
    int movimentoBispoHorizontal = 5;
    printf("Movimento do Bispo:\n");
    moverBispo(movimentoBispoVertical, movimentoBispoHorizontal);
    printf("\n");

    // === Rainha ===
    int movimentoRainha = 8;
    printf("Movimento da Rainha:\n");
    moverRainha(movimentoRainha);
    printf("\n");

    // === Cavalo ===
    int movimentosCavalo = 3; // Quantidade de "L" a serem feitos
    moverCavalo(movimentosCavalo);

    return 0;
}

   
