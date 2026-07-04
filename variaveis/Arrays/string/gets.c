#include <stdio.h>

int main(){
	char s[10];
	
	printf("Digite algo (leitura pelo gets): ");
	gets(s);
	//o gets entende o \n como finalização da leiura
	
	puts("Resultado: ");
	puts(s);
	puts("");
	
	printf("Digite algo (leitura pelo fgets): ");
	fgets (s, 10, stdin);   //pode ser colocado um sizeof no numeral para retornar o tamanho do vetor
	//o fgets entende o \n como finalização da leiura

	puts("Resultado: ");
	puts(s);
	puts("");
}