#include <stdio.h>
#include <string.h>

int main(void) {
    const char *texto = "banana";
    char *pos = strchr(texto, 'n');

    if (pos != NULL) {
        printf("Primeira ocorrência de 'n': %s\n", pos); /* Saída: nana */
    }
    return 0;
}