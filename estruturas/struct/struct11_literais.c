#include <stdio.h>

typedef struct {
    int x;
    int y;
} Ponto;

void exibir_ponto(Ponto p) {
    printf("Coordenadas: (%d, %d)\n", p.x, p.y);
}

int main() {
    // Passando um literal composto diretamente
    exibir_ponto((Ponto){10, 20});

    // Também funciona com inicializadores nomeados (Designated Initializers)
    exibir_ponto((Ponto){.y = 50, .x = 5});

    return 0;
}