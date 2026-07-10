#include <stdio.h>

int main() {
    FILE *f;
    
    f = fopen("texte1.txt", "r");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    char c;
    
    //le todos os caracteres do arquivo ate o final
    //a função feof retorna 0 se não chegar ao final do arquivo e outro valor inteiro se chegar 
	do{
		c = fgetc(f);
    	printf("%c", c);
	}while(!feof(f));
    
    fclose(f);

    return 0;
}
