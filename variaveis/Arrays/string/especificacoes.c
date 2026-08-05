#include <stdio.h>

int main() {
    char texto[] = "Gato";
    int largura = 10;

    //%s -> Sem tamanho mínimo definido, imprime apenas a string
    printf("[%s]\n", texto);

    //%*s -> Campo de 10 caracteres, alinhado à DIREITA
    printf("[%*s]\n", largura, texto);

    //%-*s -> Campo de 10 caracteres, alinhado à ESQUERDA (sinal de menos '-')
    printf("[%-*s]\n", largura, texto);

    return 0;
}