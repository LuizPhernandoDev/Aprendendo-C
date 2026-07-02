#include <stdio.h>

enum DiasDaSemana {
    DOMINGO,   
    SEGUNDA,   
    TERCA,     
    QUARTA,    
    QUINTA,    
    SEXTA,     
    SABADO     
};

typedef enum DiasDaSemana DiasDaSemana;

int main() {
    DiasDaSemana hoje = QUARTA;

    printf("O valor numerico de QUARTA eh: %d\n", hoje); 

    if (hoje == DOMINGO || hoje == SABADO) {
        printf("Fim de semana!\n");
    } else {
        printf("Dia de trabalho ou estudo.\n");
    }

    return 0;
}