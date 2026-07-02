#include <stdio.h>

enum DiasDaSemana {
    DOMINGO,   // Recebe o valor 0
    SEGUNDA,   // Recebe o valor 1
    TERCA,     // Recebe o valor 2
    QUARTA,    // Recebe o valor 3
    QUINTA,    // Recebe o valor 4
    SEXTA,     // Recebe o valor 5
    SABADO     // Recebe o valor 6
};

int main() {
    enum DiasDaSemana hoje = QUARTA;

    // Como em C os enums são inteiros por baixo dos panos, usamos %d para imprimir
    printf("O valor numerico de QUARTA eh: %d\n", hoje); 

    if (hoje == DOMINGO || hoje == SABADO) {
        printf("Fim de semana!\n");
    } else {
        printf("Dia de trabalho ou estudo.\n");
    }

    return 0;
}