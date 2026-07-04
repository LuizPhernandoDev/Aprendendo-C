#include <stdio.h>

int main() {
    char texto_bruto[] = "ID: 4082 Nome: Roberto";
    int id;
    char nome[30];

    // Ele lê a string , acha o padrão e extrai os valores
    sscanf(texto_bruto, "ID: %d Nome: %s", &id, nome);

    printf("ID extraido: %d\n", id);
    printf("Nome extraido: %s\n", nome);

    return 0;
}