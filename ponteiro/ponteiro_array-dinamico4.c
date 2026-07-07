#include <stdio.h>
#include <stdlib.h>

int main() {
	int i, j, contador = 0;
    int linhas = 3;
    int colunas = 4;
    //alocar o vetor de ponteiros (as linhas)
    int **matriz = (int **) malloc(linhas * sizeof(int *));

    //alocar a memória para cada linha (as colunas)
    for (i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
    }

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            matriz[i][j] = contador++;
        }
    }
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    //liberar a memória (primeiro as colunas, depois as linhas)
    for (i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}