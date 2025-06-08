#include <stdio.h>

int main() {
    int tabuleiro[10][10];
    int i, j;

    // Inicializando o tabuleiro com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Tamanho dos navios
    int tamanhoNavio = 3;

    // Posição inicial do navio horizontal
    int linhaH = 2; // linha 2
    int colunaH = 4; // começa na coluna 4

    // Verifica se cabe e posiciona navio horizontal
    for (j = 0; j < tamanhoNavio; j++) {
        tabuleiro[linhaH][colunaH + j] = 3;
    }

    // Posição inicial do navio vertical
    int linhaV = 5; // começa na linha 5
    int colunaV = 1; // coluna 1

    // Verifica se cabe e posiciona navio vertical
    for (i = 0; i < tamanhoNavio; i++) {
        tabuleiro[linhaV + i][colunaV] = 3;
    }

    // Exibir o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
