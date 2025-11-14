#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    //Variáveis para determinar o tamanho do taboleiro e o tamanho do navio
    const int TAMANHO = 10;
    const int TAMANHO_NAVIO = 3;

    // Matriz do tabuleiro 10x10 (todas posições começam como água = 0)
    int tabuleiro[TAMANHO][TAMANHO];

   
    // 1) Inicializando o tabuleiro com zeros
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;  // água
        }
    }

   
    // 2) Coordenadas iniciais dos navios
    // (definidas diretamente no código)
    int linhaHorizontal = 2;   // linha 3
    int colunaHorizontal = 1;  // coluna B
    int linhaVertical   = 5;   // linha 6
    int colunaVertical  = 7;   // coluna H

   
    // 3) Posicionar navio horizontal (3 casas)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = 3;
    }

  
    // 4) Posicionar navio vertical (3 casas)
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = 3;
    }

    // 5) Exibir o tabuleiro
    // Cabeçalho com letras A-J
    printf("    ");
    for (int letra = 0; letra < TAMANHO; letra++) {
        printf(" %c ", 'A' + letra);
    }
    
    printf("\n");

    // Linhas numeradas 1–10
    for (int i = 0; i < TAMANHO; i++) {
        printf("%3d ", i + 1);  // número da linha
        for (int j = 0; j < TAMANHO; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
