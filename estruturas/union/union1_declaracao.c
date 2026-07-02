#include <stdio.h>

union Dado {
    int i;
    float f;
    char str[20];
};

int main() {
    union Dado MeuDado;
    
    printf("Tamanho da union: %lu bytes\n", sizeof(MeuDado));
    
    return 0;
}