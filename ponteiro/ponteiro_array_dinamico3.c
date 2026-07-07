#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho = 5;
    int *vetor = (int *) malloc(tamanho * sizeof(int));
    
    if (vetor == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        vetor[i] = (i + 1) * 10;
    }

    //redimensiona o array para o dobro do tamanho
    tamanho = 10;
    int *temp = (int *) realloc(vetor, tamanho * sizeof(int));
    
    if (temp != NULL) {
        vetor = temp; // Atualiza o ponteiro com o novo endereço
        
        // Adiciona novos valores
        for (int i = 5; i < tamanho; i++) {
            vetor[i] = (i + 1) * 10;
        }
        
        // Imprime o array completo
        for(int i = 0; i < tamanho; i++) {
            printf("%d ", vetor[i]);
        }
    } else {
        printf("Erro ao realocar memória!\n");
    }

    free(vetor);
    
    return 0;
}