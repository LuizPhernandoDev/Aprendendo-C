#include <stdio.h>

int main() {
    FILE *f;
    
    f = fopen("texte4.txt", "r");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    char referencia[20], nome[20];
    int idade;
    float peso;
    
    fscanf(f, "%s %s", referencia, nome);
    printf("%s %s\n", referencia, nome);
    
    fscanf(f, "%s %d", referencia, &idade);
    printf("%s %d\n", referencia, idade);
    
    fscanf(f, "%s %f", referencia, &peso);
    printf("%s %f\n", referencia, peso);
    
    fclose(f);

    return 0;
}