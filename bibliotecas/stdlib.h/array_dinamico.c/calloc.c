#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, qtd = 5;
    /*alem de reservar espaço na memoria, 
    o calloc coloca um 0 em todos os bits das posições reservadas
    (toda posição de um tipo numero é preencida com um 0)
    */
    int* array_dinamico = (int *)calloc(qtd, sizeof(int));     // pede ao sistema operacional o espaco exato (5 espaços de 4 bytes)

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
    
    free(array_dinamico); 
    
    return 0;
}