#include <stdio.h>
#include <string.h>

/* strstr(palheiro, agulha): Localiza a primeira ocorrência da substring 'agulha' dentro de 'palheiro' e retorna um ponteiro para o início dela (ou NULL se não encontrar).*/
int main(void) {
    const char *frase = "O rato roeu a roupa";
    char *sub = strstr(frase, "roeu");

    if (sub != NULL) {
        printf("Substring encontrada: %s\n", sub);
    }
    return 0;
}