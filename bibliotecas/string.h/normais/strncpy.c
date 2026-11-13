#include <stdio.h>
#include <string.h>

int main(){
	// Copia até n caracteres (não garante o '\0' se o limite for atingido)
	char Palavra[20] = "Ola Mundo!\n";
	char NovaPalavra[30];
	
	strncpy(NovaPalavra, Palavra, 3);
	NovaPalavra[3]='\0';
	
	printf("Copia: %s\n",NovaPalavra);
	
	strncpy(NovaPalavra, "Tchau mundo!", 5);
	NovaPalavra[5]='\0';
	
	printf("Nova copia: %s\n",NovaPalavra);
	
	return 0;
}