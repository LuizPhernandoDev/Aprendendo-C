#include <stdio.h>

struct TipoPessoa{
	int idade;
	float peso;
	char nome[50];
};

int main(){
	
	struct TipoPessoa Pessoa = { 20, 83.0, "Luiz Phernando"};
	
	return 0;
}