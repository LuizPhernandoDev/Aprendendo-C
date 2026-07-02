#include <stdio.h>

enum DiaDaSemana{
    DOMINGO,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
};

int main() {
    
    enum DiaDaSemana escala[3] = {SEGUNDA, QUARTA, SEXTA};
    int i ;

    printf("--- Escala de Trabalho ---\n");

    for(i = 0; i < 3; i++) {
        switch(escala[i]) {
            case DOMINGO:
                printf("Plantao: Domingo\n");
                break;
            case SEGUNDA:
                printf("Plantao: Segunda-feira\n");
                break;
            case TERCA:
                printf("Plantao: Terca-feira\n");
                break;
            case QUARTA:
                printf("Plantao: Quarta-feira\n");
                break;
            case QUINTA:
                printf("Plantao: Quinta-feira\n");
                break;
            case SEXTA:
                printf("Plantao: Sexta-feira\n");
                break;
            case SABADO:
                printf("Plantao: Sabado\n");
                break;
        }
    }

    return 0;
}