#include <stdio.h>
#include <string.h>
#include <locale.h>

/*Compara duas strings respeitando a ordem alfabética e as regras culturais (como acentuação) definidas pelo locale atual (LC_COLLATE).*/
int main(void) {
    setlocale(LC_COLLATE, "");

    int cmp = strcoll("árvore", "banana");

    if (cmp < 0) {
        printf("'árvore' vem antes de 'banana' no locale atual.\n");
    }
    return 0;
}