#include <stdio.h>
#include <string.h>

/* strspn(s, aceitos): Retorna o comprimento do segmento inicial de 's' composto exclusivamente por caracteres que fazem parte do conjunto 'aceitos'.*/
int main(void) {
    const char *entrada = "2026ano";
    size_t digitos_iniciais = strspn(entrada, "0123456789");

    printf("Quantidade de dígitos no início: %zu\n", digitos_iniciais); /* 4 */
    return 0;
}