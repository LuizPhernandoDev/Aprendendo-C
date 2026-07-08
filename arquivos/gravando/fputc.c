#include <stdio.h>
#include <string.h>

int main() {
    FILE *f;

    f = fopen("texte1.txt", "r");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
    }
    
    char c;
    int i;
    
    //le o arquivo, caracter a caracter
    //se houver erro retorna a contante EOF(-1)
    //le ate 11 caracteres
    for(i=0; i<11; i++){
    	c = fgetc(f);
    	printf("%c", c);
	}
    
    fclose(f);
    
    f = fopen("texte1.txt", "r");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
    }
    
    //le todos os caracteres do arquivo ate o final
	do{
		c = fgetc(f);
    	printf("%c", c);
	}while(c != EOF);
    
    fclose(f);

    return 0;
}
