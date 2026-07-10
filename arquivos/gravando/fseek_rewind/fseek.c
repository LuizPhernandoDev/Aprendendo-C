#include <stdio.h>

struct cadastro {
	char nome[30], endereco[30];
	int idade;
};

int main() {
    FILE *f;
    
    f = fopen("texte5.txt", "rb");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    struct cadastro cad;
    
    fseek(f, 2*sizeof(struct cadastro), SEEK_SET);
	fread(&cad, sizeof(struct cadastro), 1, f);
	
    printf("%s\n", cad.nome);
    printf("%s\n", cad.endereco);
    printf("%d\n", cad.idade);
    
    fclose(f);
    
    return 0;
}