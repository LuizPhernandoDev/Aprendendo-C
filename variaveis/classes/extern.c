#include <stdio.h>
#include "config.c"

// Avisa ao compilador que essa variável vem de outro arquivo
extern int VELOCIDADE_MAXIMA; 

int main() {
    printf("--- Testando Classe EXTERN ---\n");
    
    // Acessando e exibindo o valor do arquivo config.c
    printf("A velocidade maxima permitida eh: %d km/h\n", VELOCIDADE_MAXIMA);
    
    // Podemos inclusive alterar o valor dela por aqui
    VELOCIDADE_MAXIMA = 140;
    printf("Nova velocidade maxima alterada pela main: %d km/h\n", VELOCIDADE_MAXIMA);
    
    return 0;
}