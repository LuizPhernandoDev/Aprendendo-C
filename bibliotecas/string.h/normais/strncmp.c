#include <stdio.h>
#include <string.h>

int main(void) {
    const char *s1 = "programa";
    const char *s2 = "progresso";

    /* Compara apenas os 5 primeiros caracteres ("progr") */
    if (strncmp(s1, s2, 5) == 0) {
        printf("Os 5 primeiros caracteres são iguais.\n");
    }
    return 0;
}