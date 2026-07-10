#include <stdio.h>

int main() {
    FILE *f;
    
    f = fopen("texte3_2.txt", "wb");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    char nome[10] = "Luiz";
    int idade = 20;
    float peso = 81.3;
    
    //dependendo da forma que o arquivo .txt sera aberto,  apenas a strig sera entendida(por um ser humano)
	fwrite(nome, sizeof(char), 10, f);
	fwrite(&idade, sizeof(int), 1, f);
	fwrite(&peso, sizeof(float), 1, f);
    
    fclose(f);

    return 0;
}