#include <stdio.h>

int main() {

    int casasBispo = 5;
    int casasTorre = 5;
    int casasRainha = 8;

    int i; 

    printf("=== Desafio MateCheck - Movimentação das Peças ===\n");

    printf(" Movimentação do Bispo (5 casas na diagonal superior direita):\n");
    for (i = 1; i <= casasBispo; i++) {
        printf("Casa %d: ", i);
        printf("Cima e Direita\n");
    }
    printf("\n");

    printf(" Movimentação da Torre (5 casas para a direita):\n");
    int contador = 1;
    while (contador <= casasTorre) {
        printf("Casa %d: ", contador);
        printf("Direita\n");
        contador++;
    }
    printf("\n");

 
    printf("Movimentação da Rainha (8 casas para a esquerda): \n");
    i = 1;
    do {
        printf("Casa %d: ", i);
        printf("Esquerda\n");
        i++;
    } while (i <= casasRainha);

     printf("Movimentação do Cavalo \n");
    int movimentosVerticais = 2;
    int movimentosHorizontais = 1;

    for (int vert = 1; vert <= movimentosVerticais; vert++) {
        printf("Movimento vertical %d: Baixo\n", vert);

        int hor = 1;
        do {
            printf("  Movimento horizontal %d: Esquerda\n", hor);
            hor++;
        } while (hor <= movimentosHorizontais);

    }

    printf("\n O cavalo completou sua movimentação em L!\n");

    return 0;
}