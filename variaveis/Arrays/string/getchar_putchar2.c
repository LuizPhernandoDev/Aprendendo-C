#include <stdio.h>

int main() {
    int c;

    printf("Digite uma frase: ");

    // O laço pega um caractere, guarda na variável 'c', 
    // e verifica se é diferente do Enter ('\n').
    while ((c = getchar()) != '\n') {
        // Imediatamente imprime o caractere na tela
        putchar(c);
    }
    
    return 0;
}