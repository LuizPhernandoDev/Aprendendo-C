#include <stdio.h>
#include <string.h>

int main() {
    FILE *f;

    f = fopen("texte1.txt", "w");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    char texto[20] = "Ola mundo!\n";
    int i;
    
    //grava no arquivo, a string, caracter a caracter
    //se houver erro retorna a contante EOF(-1)
    for(i=0; i<strlen(texto); i++){
    	fputc(texto[i], f);
	}
    
    fclose(f);

    return 0;
}
