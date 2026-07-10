#include <stdio.h>

int main() {
    FILE *f;
    
    f = fopen("texte3_2.txt", "rb");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    char nome[10];
    int idade;
    float peso;
    
	fread(nome, sizeof(char), 10, f);
	fread(&idade, sizeof(int), 1, f);
	fread(&peso, sizeof(float), 1, f);
    
    fclose(f);
    
    printf("%s\n", nome);
    printf("%d\n", idade);
    printf("%.1f\n", peso);

    return 0;
}