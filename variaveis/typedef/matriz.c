#include <stdio.h>

typedef int Matriz3x3[3][3];

void imprimirMatriz(Matriz3x3 matriz) {
	int i, j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    Matriz3x3 minhaMatriz = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    imprimirMatriz(minhaMatriz);
    
    return 0;
}