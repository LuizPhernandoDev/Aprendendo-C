#include <stdio.h>

void imprime (int m, int vetor[m]){
	for(int i = 0; i < m; i++) {
        printf("%d ", vetor[i]);
    }
}

int main() {
	//padrao c99
    int i, qtd = 5;
    
    int array_dinamico[qtd];

    for(i = 0; i < qtd; i++) {
        array_dinamico[i] = (i + 1) * 10;
    }

    imprime(qtd, array_dinamico);
    
    return 0;
}