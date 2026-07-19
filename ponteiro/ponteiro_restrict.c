#include <stdio.h>

// O uso de 'restrict' diz ao compilador que os ponteiros 'a', 'b' e 'resultado'
// apontam para regiões de memória totalmente distintas e que não se sobrepõem.
void somar_vetores(int tamanho, const int * restrict a, const int * restrict b, int * restrict resultado) {
    for (int i = 0; i < tamanho; i++) {
        resultado[i] = a[i] + b[i];
    }
}

int main() {
    int n = 5;
    int vetor_A[] = {1, 2, 3, 4, 5};
    int vetor_B[] = {10, 20, 30, 40, 50};
    int vetor_destino[5];

    // Chamada correta: os três arrays estão em locais separados da memória
    somar_vetores(n, vetor_A, vetor_B, vetor_destino);

    // Exibe o resultado na tela
    printf("Resultado da soma:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor_destino[i]);
    }
    printf("\n");

    return 0;
}