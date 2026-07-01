#include <stdio.h>

struct TipoPessoa{
	int idade;
	float peso;
	char nome[50];
};

typedef struct TipoPessoa TipoPessoa;

int main(){
	
	TipoPessoa Pessoa = { 20, 83.0, "Luiz Phernando"};
	
	Pessoa.idade = 19;
	Pessoa.peso = 80.0;
	sprintf(Pessoa.nome, "Luiz Phernando");
	
	printf("Inicio:\n");
	printf("Idade: %d.\n", Pessoa.idade);
	printf("Peso: %.2f.\n", Pessoa.peso);
	printf("Nome: %s.\n", Pessoa.nome);
	
	return 0;
}