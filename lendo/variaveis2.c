#include <stdio.h> 

int main(){
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	//é possivel atribuir em um mesmo scanf valores a varias variaveis
	printf("Digite sua idade, sua altura e seu nome: ");
	scanf("%d%f%s", &idade, &altura, nome);
	
	printf("\nDados informados:\n\n");
	printf("Idade: %d.\n", idade);
	printf("Altura: %.2f.\n", altura);
	printf("Nome: %s.\n", nome);
}