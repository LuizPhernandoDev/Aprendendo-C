#include <stdio.h> 

int main(){
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	//teste com variaveis normais, mas funciona para as modificações(short, long, unsinged)
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite seu nome: ");
	//o unico que não precisa de um & antes da variavel
	scanf("%s", nome);
	
	printf("\nDados informados:\n\n");
	printf("Idade: %d.\n", idade);
	printf("Altura: %.2f.\n", altura);
	printf("Nome: %s.\n", nome);
}