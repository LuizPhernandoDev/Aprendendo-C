#include <stdio.h>
#include <string.h>

int main() {
    FILE *Min, *Mia;

    Min = fopen("minusculo.txt", "r");
    Mia = fopen("maiusculo.txt", "w");

    if (Min == NULL || Mia == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    char c;
    
    do{
		c = fgetc(Min);
		if(c>='a'&& c<='z'){
			c = c - 32;
		}
    	fputc(c, Mia);
	}while(c != EOF);
    
    fclose(Min);
    fclose(Mia);

    return 0;
}
