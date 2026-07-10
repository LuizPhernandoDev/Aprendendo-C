#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("texte2.txt", "w");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    char texto[20] = "Meu programa em C!\n";
    //a função fputs escreve toda a string no arquvo
    //retorna a constante EOF se der erro e um valor diferente 0 se der sucesso
	int retorno = fputs(texto, f);
    
    if (retorno == EOF) {
        printf("Erro: Gravação no arquivo não foi realizada.\n");
        return 1;
    }
    
    
    fclose(f);

    return 0;
}