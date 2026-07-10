#include <stdio.h>

int main() {
    FILE *f;
    
    f = fopen("texte4.txt", "w");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    char nome[10] = "Luiz";
    int idade = 20;
    float peso = 81.3;
    
    fprintf(f, "Nome: %s\nIdade: %d\nPeso: %f", nome, idade, peso);
    
    fclose(f);

    return 0;
}