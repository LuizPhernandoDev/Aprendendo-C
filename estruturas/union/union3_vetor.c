#include <stdio.h>

union Dado {
    int i;
    float f;
    char str[20];
};

int main() {
    union Dado meus_dados[3];

    meus_dados[0].i = 42;
    meus_dados[1].f = 3.14;
    snprintf(meus_dados[2].str, sizeof(meus_dados[2].str), "Vetor em C");

    printf("Posicao 0 (usada como int): %d\n", meus_dados[0].i);
    printf("Posicao 1 (usada como float): %.2f\n", meus_dados[1].f);
    printf("Posicao 2 (usada como string): %s\n", meus_dados[2].str);

    printf("\nTamanho total do vetor: %zu bytes\n", sizeof(meus_dados));

    return 0;
}