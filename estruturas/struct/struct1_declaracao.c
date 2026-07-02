#include <stdio.h>

struct TipoPessoa{
	int idade;
	float peso;
	char nome[50];
};

int main(){
	struct TipoPessoa MinhaStuct;

    printf("Tamanho da union: %lu bytes\n", sizeof(MinhaStuct));
		
	return 0;
}