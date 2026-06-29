#include <stdio.h>

char verificarParidade(int numero);

int main() {
    int Valor = 13;
    printf("O numero %d e: %c\n", Valor, verificarParidade(valor));
    
    return 0;
}

char verificarParidade(int numero) {
    if (numero % 2 == 0) {
        return 'P'; 
    } else {
        return 'I'; 
    }
}