#include <stdio.h>

struct TipoPessoa{
	int idade;
	float peso;
	char nome[50];
};

int main(){
	
	struct TipoPessoa Pessoa = { 20, 83.0, "Luiz Phernando"};
	struct TipoPessoa Pessoa2;
	
	Pessoa2.idade = Pessoa.idade;
	Pessoa2.peso = Pessoa.peso;
	sprintf(Pessoa2.nome, Pessoa.nome);
	
	printf("Inicio:\n");
	printf("Idade: %d.\n", Pessoa2.idade);
	printf("Peso: %.2f.\n", Pessoa2.peso);
	printf("Nome: %s.\n", Pessoa2.nome);
	
	return 0;
}