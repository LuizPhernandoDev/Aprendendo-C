#include <stdio.h>
#include <string.h>

int main(){
	char str[50] = "Exemplo de string em C";
	char *p;
	
	//o tipo de dado é passada como ponteiro
	//indica a primeira posição que apareceu
	p = (char *) memchr(str, 's', strlen(str));
	
	if(p != NULL){
		printf("Encontrado! Posicao: %d\n", p-str+1);
	}else{
		printf("Nao encontrado!\n");
	}
	
	return 0;
}