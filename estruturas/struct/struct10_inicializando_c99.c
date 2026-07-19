#include <stdio.h>

struct TipoPessoa{
	int idade;
	float peso;
	char nome[50];
};

int main(){
	//é possivel inicializar qualquer posição de uma estrutura e em qualquer ordem
	struct TipoPessoa Pessoa = { .nome = "Luiz Phernando", .idade = 20, .peso = 83.0 };
	
	return 0;
}