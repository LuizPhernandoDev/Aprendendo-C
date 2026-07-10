#include <stdio.h>

int main() {
    FILE *f;
    
    f = fopen("texte2.txt", "r");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    char str[20];
    
    //retorna NULL se não conseguir ler o arquivo
    //não ira imprimir toda a string por ter limitado a 12 caracteres
    char *result = fgets(str, 12, f);   //le ate 11, ultimo reservado para o \0
    
    if(result == NULL){
    	printf("Erro na leitura.\n");
	}else{
		printf("%s", str);
	}
    
    fclose(f);

    return 0;
}