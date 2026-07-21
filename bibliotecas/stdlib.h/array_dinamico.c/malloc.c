#include <stdio.h>
#include <stdlib.h>  // Biblioteca obrigatoria para usar malloc, calloc e free

int main() {
    int i ,qtd = 5;
    
    int *array_dinamico = (int *)malloc(qtd * sizeof(int));     // pede ao sistema operacional o espaco exato (5 espaços de 4 bytes)

    if (array_dinamico == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;   //qualquer um dos dois aborta o programa
        exit(1);    //esse aborta todo o programa mesmo se estiver dentro de uma função
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