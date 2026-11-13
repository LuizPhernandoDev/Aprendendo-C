#include <stdio.h>
#include <string.h>

/*strrchr(s, c): Procura a última ocorrência do caractere 'c' na string 's' e retorna um ponteiro para essa posição (ou NULL se não encontrar).*/
int main(void) {
    const char *texto = "banana";
    char *pos = strrchr(texto, 'n');

    if (pos != NULL) {
        printf("Última ocorrência de 'n': %s\n", pos); /* Saída: na */
    }
    return 0;
}