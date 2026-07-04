#include <stdio.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

int main(){
    char s[10];
    int i;
    /*independente de qual metodo se for digitado mais que o especificado (9) 
	a proxima leitura sera corrompida com os caracteres q sobraram, 
	pode ser corrigido com a adicao de um ' ' antes do %
	*/
    for(i = 1; i <= 5; i++){
    	printf("Teste %d so com scanf\n", i);
	    printf("Digite algo: ");
	    scanf("%9[^\n]", s); 
	    puts(s);
	    puts("\n");
	}
	puts("\n\n");
	
	for(i = 1; i <= 5; i++){
    	printf("Teste %d com fflush\n", i);
	    printf("Digite algo: ");
	    fflush(stdin);
	    scanf("%9[^\n]", s); 
	    puts(s);
	    puts("\n");
	}
	puts("\n\n");
	
	for(i = 1; i <= 5; i++){
    	printf("Teste %d com setbuf\n", i);
	    printf("Digite algo: ");
	    setbuf(stdin,NULL);
	    scanf("%9[^\n]", s); 
	    puts(s);
	    puts("\n");
	}
	puts("\n\n");
	
	for(i = 1; i <= 5; i++){
    	printf("Teste %d com funcao\n", i);
	    printf("Digite algo: ");
	    limpar_buffer();
	    scanf("%9[^\n]", s); 
	    puts(s);
	    puts("\n");
	}
	puts("\n\n");
	
	for(i = 1; i <= 5; i++){
    	printf("Teste %d misturando\n", i);
	    printf("Digite algo com scanf: ");
	    fflush(stdin);
	    scanf("%9[^\n]", s); 
	    puts(s);
	    puts("\n");
	    printf("Digite algo com gets: ");
	    fflush(stdin);
	    fgets(s, sizeof(s), stdin);
	    puts(s);
	    puts("\n");
	}
	puts("\n\n");
	
    return 0;
}