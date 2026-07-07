#include <stdio.h>

int main(){
	void *ptr;
	int num = 10;
	
	ptr = &num;
	
	//printf("Conteudo: %d\n", *ptr);   //ERRO
	
	printf("Conteudo: %d\n", *(int *)ptr);   //o (int*) converte o ponteiro generi para um ponteiro do tipo intero
	
	return 0;
}