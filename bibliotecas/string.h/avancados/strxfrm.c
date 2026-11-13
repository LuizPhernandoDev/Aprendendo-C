#include <stdio.h>
#include <string.h>
#include <locale.h>

/*strxfrm(destino, origem, n): Transforma 'origem' de acordo com o locale atual (LC_COLLATE) de modo que comparar as strings transformadas com strcmp produza o mesmo resultado de strcoll.*/
int main(void) {
    char transf1[100], transf2[100];
    setlocale(LC_COLLATE, "");

    strxfrm(transf1, "árvore", sizeof(transf1));
    strxfrm(transf2, "banana", sizeof(transf2));

    if (strcmp(transf1, transf2) < 0) {
        printf("'árvore' vem antes de 'banana'.\n");
    }
    return 0;
}