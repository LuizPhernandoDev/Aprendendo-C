#include <stdio.h>

void limpar_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // O corpo do while está vazio de propósito
    }
}

int main(){
    char s[10];
    int i;
    
    //sem o limpar o teclado ele irar ler apenas o primeiro scanf e ira ignorar os prximos
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
	
	//misturar scanf e gets(ou fgets) pode dar problema 
	
	for(i = 1; i <= 5; i++){
    	printf("Teste %d misturando\n", i);
	    printf("Digite algo com scanf: ");
	    fflush(stdin);
	    scanf("%9[^\n]", s); 
	    puts(s);
	    puts("\n");
	    printf("Digite algo com gets: ");
	    //é necesario limpar novamente para utilizar(mesmo o gets não precisando)
	    fflush(stdin);
	    fgets(s, sizeof(s), stdin);
	    puts(s);
	    puts("\n");
	}
	puts("\n\n");
	
    return 0;
}