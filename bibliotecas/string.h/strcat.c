#include <stdio.h>
#include <string.h>

int main(){
	//concatena(junta) duas variaveis e/ou textos em uma variavel so
	char Palavra1[20] = "Ola ";
	char Palavra2[30] = "Mundo!\n";
	
	strcat(Palavra1, Palavra2);
	
	printf("Concatena: %s",Palavra1);
	
	char Testes[30] = "Muito ";
	char Nome[10] = "Luiz";
	
	strcat(Testes, "prazer, ");
	strcat(Testes, Nome);
	
	printf("Concatena: %s\n",Testes);
	
	char Apresentacao[50] = "Meu ";
	
	strcat(strcat(Apresentacao, "nome é "), Nome);
	
	printf("Concatena: %s",Apresentacao);
	
	return 0;
}