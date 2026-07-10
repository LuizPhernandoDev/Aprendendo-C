#include <stdio.h>

void testarAuto() {
    auto int x = 10; // O "auto" aqui é implícito, poderia ser apenas "int x = 10;"
    x++;
    printf("Valor de x (auto): %d\n", x);
}

int main() {
    printf("--- Testando Classe AUTO ---\n");
    testarAuto(); // Cria x, soma 1, mostra 11, destrói x
    testarAuto(); // Cria x de novo, soma 1, mostra 11, destrói x
    testarAuto(); // Cria x de novo, soma 1, mostra 11, destrói x
    return 0;
}