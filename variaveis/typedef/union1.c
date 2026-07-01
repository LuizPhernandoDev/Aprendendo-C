#include <stdio.h>

union Dado {
    int i;
    float f;
    char str[20];
};

typedef union Dado Dado;

int main() {
    Dado dado;

    dado.i = 10;
    printf("dado.i: %d\n", dado.i); 

    dado.f = 220.5;
    printf("dado.f: %f\n", dado.f); 
    printf("dado.i (agora corrompido): %d\n", dado.i); 

    snprintf(dado.str, sizeof(dado.str), "Linguagem C");
    printf("dado.str: %s\n", dado.str); 

    return 0;
}