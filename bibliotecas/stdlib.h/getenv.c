#include <stdio.h>
#include <stdlib.h>

int main() {
	char nome[] = "PATH";
    //variável de ambiente do sistema
    char *valor = getenv(nome);

    if (valor != NULL) {
        printf("O valor de PATH é: \n%s\n", valor);
    } else {
        printf("A variável PATH não foi encontrada.\n");
    }

    return 0;
}
