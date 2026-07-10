#include <stdio.h>

void testarStatic() {
    static int y = 10; // Inicializado APENAS na primeira chamada da função
    y++;
    printf("Valor de y (static): %d\n", y);
}

int main() {
    printf("--- Testando Classe STATIC ---\n");
    testarStatic(); //imprime 11
    testarStatic(); //imprime 12
    testarStatic(); //imprime 13
    return 0;
}