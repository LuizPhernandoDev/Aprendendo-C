#include <stdio.h>
#include <string.h>

/* strcspn(s, rejeitados): Retorna o comprimento do segmento inicial de 's' que não contém nenhum dos caracteres listados em 'rejeitados'.*/
int main(void) {
    const char *email = "usuario@dominio.com";
    size_t tamanho_usuario = strcspn(email, "@.");

    printf("Caracteres antes de '@' ou '.': %zu\n", tamanho_usuario); /* 7 */
    return 0;
}