#include <stdio.h>

struct cadastro {
	char nome[30], endereco[30];
	int idade;
};

int main() {
    FILE *f;
    
    f = fopen("texte3_3.txt", "rb");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    struct cadastro cad;
    
	fread(&cad, sizeof(struct cadastro), 1, f);
	
    fclose(f);
    
    printf("%s\n", cad.nome);
    printf("%s\n", cad.endereco);
    printf("%d\n", cad.idade);

    return 0;
}