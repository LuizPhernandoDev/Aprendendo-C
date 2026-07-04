#include <stdio.h>

struct Endereco{
	char Nome[50];
	int Numero;
};
struct TipoPessoa{
	char Nome[50];
	int Idade;
	struct Endereco Ender;
};

int main(){
	
	struct TipoPessoa Pessoa;
	
	printf("Nome: ");
	scanf("%s", &Pessoa.Nome);
	printf("Idade: ");
	scanf("%d", &Pessoa.Idade);
	printf("Nome da rua: ");
	scanf("%s", &Pessoa.Ender.Nome);
	printf("Numero da rua: ");
	scanf("%d", &Pessoa.Ender.Numero);
	
	printf("\nNome: %s.\n", Pessoa.Nome);
	printf("Idade: %d.\n", Pessoa.Idade);
	printf("Endereco: %s %d.\n", Pessoa.Ender.Nome, Pessoa.Ender.Numero);
	
	return 0;
}