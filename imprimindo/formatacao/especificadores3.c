#include <stdio.h>

int main() {
    double valor = 12.34567;
    int largura = 10;
    int precisao = 2;

    // Reserva 10 espaços no total, alinha à direita e exibe 2 casas decimais
    printf("[%*.*f]\n", largura, precisao, valor);
    // imprime: [     12.35] (5 espaços em branco + 5 caracteres de "12.35" = 10 total)

    return 0;
}