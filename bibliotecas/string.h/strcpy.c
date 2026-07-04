#include <stdio.h>
#include <string.h>

int main(){
	//substitui o texto de uma variavel por outra variavel ou por um texto 
	char Palavra[20] = "Ola Mundo!\n";
	char NovaPalavra[30];
	
	strcpy(NovaPalavra, Palavra);
	
	printf("Copia: %s",NovaPalavra);
	
	strcpy(NovaPalavra, "Tchau mundo!\n");
	
	printf("Nova copia: %s",NovaPalavra);
	
	return 0;
}   