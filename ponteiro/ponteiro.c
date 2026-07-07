#include <stdio.h>

int main() {
    int numero = 10;
    int *ponteiro; // Declaração do ponteiro (o '*' indica que é um ponteiro para um int)

    ponteiro = &numero; // O ponteiro agora guarda o endereço de 'numero'

    printf("Valor de numero: %d\n", numero);
    printf("Endereço de numero: %p\n", &numero);   //numero em hexadecimal
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro); // Desreferência
    printf("Valor guardado no ponteiro (endereço): %p\n", ponteiro);   //numero em hexadecimal
    printf("Endereço do ponteiro: %p\n", &ponteiro);   //numero em hexadecimal
    
    printf("\n\n");
    
    *ponteiro = 73;    
    
    printf("Valor de numero: %d\n", numero);
    printf("Endereço de numero: %p\n", &numero);   //numero em hexadecimal
    printf("Valor apontado pelo ponteiro: %d\n", *ponteiro); // Desreferência
    printf("Valor guardado no ponteiro (endereço): %p\n", ponteiro);   //numero em hexadecimal
    printf("Endereço do ponteiro: %p\n", &ponteiro);   //numero em hexadecimal
    
    return 0;
}