#include <stdio.h>
#include <string.h>

/*strpbrk(s, aceitos): Busca em 's' o primeiro caractere que coincida com qualquer um dos caracteres presentes em 'aceitos'. Retorna um ponteiro para ele (ou NULL). */
int main(void) {
    const char *codigo = "pedido4589";
    char *primeiro_digito = strpbrk(codigo, "0123456789");

    if (primeiro_digito != NULL) {
        printf("A partir do primeiro dígito: %s\n", primeiro_digito); /* 4589 */
    }
    return 0;
}