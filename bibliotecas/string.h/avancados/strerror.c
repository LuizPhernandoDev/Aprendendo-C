#include <stdio.h>
#include <string.h>
#include <errno.h>

/* strerror(errnum): Converte um código numérico de erro (como os definidos em <errno.h>) em um ponteiro para uma string com sua descrição textual.*/
int main(void) {
    printf("Mensagem para ERANGE: %s\n", strerror(ERANGE));
    return 0;
}