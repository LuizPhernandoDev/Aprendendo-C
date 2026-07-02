#include <stdio.h>

typedef enum {
    TIPO_INTEIRO,
    TIPO_DECIMAL,
    TIPO_TEXTO
} TipoVariavel;

typedef struct {
    TipoVariavel tipo;
    union {
        int i;
        float f;
        char str[20];
    } valor;
} Variante;

int main() {
    Variante minha_lista[3];
    minha_lista[0].tipo = TIPO_INTEIRO;
    minha_lista[0].valor.i = 42;
    minha_lista[1].tipo = TIPO_DECIMAL;
    minha_lista[1].valor.f = 3.1415;
    minha_lista[2].tipo = TIPO_TEXTO;
    int i;
    
    snprintf(minha_lista[2].valor.str, 20, "Estruturas em C");
    
    printf("Processando a lista de tipos mistos:\n\n");

    for (i = 0; i < 3; i++) {
        printf("Posicao %d contém um ", i);

        switch (minha_lista[i].tipo) {
            case TIPO_INTEIRO:
                printf("Inteiro: %d\n", minha_lista[i].valor.i);
                break;
                
            case TIPO_DECIMAL:
                printf("Decimal: %.4f\n", minha_lista[i].valor.f);
                break;
                
            case TIPO_TEXTO:
                printf("Texto: '%s'\n", minha_lista[i].valor.str);
                break;
                
            default:
                printf("Tipo desconhecido!\n");
        }
    }

    return 0;
}