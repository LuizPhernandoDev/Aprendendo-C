#include <stdio.h>
#include <stdlib.h>  // Biblioteca obrigatoria para usar malloc e free

int main() {
    int qtd = 5, i;
    // pede ao sistema operacional o espaco exato (ex: 5 * 4 bytes)
    int *array_dinamico = (int *)malloc(qtd * sizeof(int)); 

    if (array_dinamico == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for(i = 0; i < qtd; i++) {
        array_dinamico[i] = (i + 1) * 10;
    }

    for(i = 0; i < qtd; i++) {
        printf("%d ", array_dinamico[i]);
    }
    
    //libera o espaco para o computador apos terminar
    free(array_dinamico); 
    
    return 0;
}