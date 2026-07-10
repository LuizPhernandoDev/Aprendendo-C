#include <stdio.h>

struct cadastro {
	char nome[30], endereco[30];
	int idade;
};

int main() {
    FILE *f;
    
    f = fopen("texte5.txt", "wb");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    struct cadastro cad[4] = {{"Luiz Phernando", "Rua rc 01", 20}, 
							  {"Isaac Gabriel", "Rua rc 02", 11}, 
							  {"Pierre Neves", "Rua rc 03", 19}, 
							  {"Livia Cristina", "Rua rc 04", 33}};
    
	fwrite(&cad, sizeof(struct cadastro), 4, f);
	
    fclose(f);

    return 0;
}