#include <stdio.h>

struct cadastro {
	char nome[30], endereco[30];
	int idade;
};

int main() {
    FILE *f;
    
    f = fopen("texte3_3.txt", "wb");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    struct cadastro cad = {"Luiz Phernando", "Rua rc 04", 20};
    
	fwrite(&cad, sizeof(struct cadastro), 1, f);
	
    fclose(f);

    return 0;
}