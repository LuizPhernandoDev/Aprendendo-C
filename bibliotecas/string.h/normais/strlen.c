#include <stdio.h>
#include <string.h>

int main(){
    //descobre o tramanho de uma string(tamanho da string e tamanho do vetor da string não são os mesmos)
	char Palavra[20] = "Ola Mundo!\n";
	int Tamanho = strlen(Palavra);
	
	printf("Tamanho: %d",Tamanho);
	
	return 0;
}