#include <stdio.h>

struct TipoPessoa{
	int idade;
	float peso;
	char nome[50];
};

int main(){
	
	struct TipoPessoa Pessoa[3] = {{20, 83.0, "Luiz Phernando"}, {38, 54.3, "Livia Cristina"}, {19, 75.4, "Pierre Neves"}};
	
	printf("Inicio:\n");
	printf("Idade: %d.\n", Pessoa[0].idade);
	printf("Peso: %.2f.\n", Pessoa[0].peso);
	printf("Nome: %s.\n", Pessoa[0].nome);
	
	printf("\nInicio:\n");
	printf("Idade: %d.\n", Pessoa[1].idade);
	printf("Peso: %.2f.\n", Pessoa[1].peso);
	printf("Nome: %s.\n", Pessoa[1].nome);
	
	printf("\nInicio:\n");
	printf("Idade: %d.\n", Pessoa[2].idade);
	printf("Peso: %.2f.\n", Pessoa[2].peso);
	printf("Nome: %s.\n", Pessoa[2].nome);
	
	return 0;
}