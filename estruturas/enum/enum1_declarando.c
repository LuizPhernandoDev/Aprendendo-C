#include <stdio.h>

enum Boleano{
    DESLIGADO,  //recebe 0
    LIGADO      //recebe 1
};

int main() {
    enum Boleano Bool;

    printf("Tamanho do enum: %zu bytes\n", sizeof(Bool));

    return 0;
}