#include <stdio.h>

int main() {
    int c;

    printf("Digite um texto com letras minusculas: ");

    while ((c = getchar()) != '\n') {
        
        // Verifica se o caractere atual é uma letra minúscula (entre 'a' e 'z')
        if (c >= 'a' && c <= 'z') {
            // Se for minúscula, transforma em maiúscula diminuindo 32
            c = c - 32; 
        }
        
        // Imprime o caractere. Se era minúsculo, sairá maiúsculo. 
        // Se já era maiúsculo, número ou espaço, sairá normal.
        putchar(c);
    }
    
    printf("\n");

    return 0;
}