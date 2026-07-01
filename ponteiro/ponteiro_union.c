#include <stdio.h>

union Dado {
    int numero;
    float decimal;
};

int main() {
    union Dado meuDado;
    union Dado *ptrDado = &meuDado;

    // Escrevendo no membro inteiro usando o ponteiro
    ptrDado->numero = 42;
    printf("Numero: %d\n", ptrDado->numero);

    // Se escrevermos no decimal, sobrescrevemos a mesma memoria
    ptrDado->decimal = 3.14;
    printf("Decimal: %f\n", ptrDado->decimal);
    
    // O numero original foi corrompido, pois a memoria foi sobrescrita
    // printf("Numero agora: %d\n", ptrDado->numero); // Lixo de memoria!

    return 0;
}