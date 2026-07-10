#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("texte1.txt", "r");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    char c;
    int i;
    
    //le o arquivo, caracter a caracter, ate 11 caracteres
    //se houver erro retorna a contante EOF(-1)
    for(i=0; i<11; i++){
    	c = fgetc(f);
    	printf("%c", c);
	}
    
    fclose(f);
    
    return 0;
}
