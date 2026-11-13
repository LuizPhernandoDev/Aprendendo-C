#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(void) {
    /* Ativa o idioma do sistema (ex.: pt_BR.UTF-8) para traduzir as mensagens */
    setlocale(LC_ALL, "");

    for (int i = 1; i <= 135; i++) {
        printf("%3d: %s\n", i, strerror(i));
    }
    return 0;
}