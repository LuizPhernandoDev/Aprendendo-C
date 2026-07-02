#include <stdio.h>

union Dado {
    int i;
    float f;
    char str[20];
};

int main() {
    union Dado dado;

    dado.i = 10;
    printf("dado.i: %d\n", dado.i); // Imprime 10

    dado.f = 220.5;
    printf("dado.f: %f\n", dado.f); // Imprime 220.500000
    printf("dado.i (agora corrompido): %d\n", dado.i); // Imprime lixo de memória, pois a área foi sobrescrita pelo float!

    snprintf(dado.str, sizeof(dado.str), "Linguagem C");
    printf("dado.str: %s\n", dado.str); // Imprime "Linguagem C"
    // Agora dado.i e dado.f estão ambos corrompidos.

    return 0;
}