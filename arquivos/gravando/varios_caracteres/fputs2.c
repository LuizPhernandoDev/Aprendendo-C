#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("texte2.txt", "w");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    //não é necessario a função retornar algum valor para ser utilizada 
    //não quebra linha nem da espaços entre as strings impressas
	fputs("Meu programa", f);
	fputs(" em C!\n", f);
    
    fclose(f);

    return 0;
}