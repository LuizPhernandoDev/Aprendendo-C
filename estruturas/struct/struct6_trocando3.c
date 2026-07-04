#include <stdio.h>

struct TipoPessoa{
	int idade;
	float peso;
	char nome[50];
};
//é posivel colocar os memso nome em variaveis diferentes, pois uma nao encherga a outra
struct OutroTipoPessoa{
	int idade;
	float peso;
	char nome[50];
};

int main(){
	
	struct TipoPessoa Pessoa2, Pessoa = { 20, 83.0, "Luiz Phernando"};
	struct OutroTipoPessoa Pessoa3;
	
	Pessoa2 = Pessoa;
	
	printf("Inicio:\n");
	printf("Idade: %d.\n", Pessoa2.idade);
	printf("Peso: %.2f.\n", Pessoa2.peso);
	printf("Nome: %s.\n", Pessoa2.nome);
	
	//Pessoa3 = Pessoa;     //imposivel atribuir assim, pois sao de estruturas diferentes, mesmo tendo "as mesmas" variaveis
	
	Pessoa3.idade = Pessoa.idade;
	Pessoa3.peso = Pessoa.peso;
	sprintf(Pessoa3.nome, Pessoa.nome);
	
	printf("\nInicio:\n");
	printf("Idade: %d.\n", Pessoa3.idade);
	printf("Peso: %.2f.\n", Pessoa3.peso);
	printf("Nome: %s.\n", Pessoa3.nome);
	
	return 0;
}