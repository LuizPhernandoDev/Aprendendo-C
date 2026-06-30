#include <stdio.h>

int main(){
	int Dia;
	
	printf("Digite o numero do dia da semana: ");
	scanf("%d", &Dia);
	switch(Dia){
		case 1:
			printf("Hoje e domingo.");
			break;
		case 2:
			printf("Hoje e segunda-feira.");
			break;
		case 3:
			printf("Hoje e terca-feira.");
			break;
		case 4:
			printf("Hoje e quarta-feira.");
			break;
		case 5:
			printf("Hoje e quinta-feira.");
			break;
		case 6:
			printf("Hoje e sexta-feira.");
			break;
		case 7:
			printf("Hoje e sabado.");
			break;
		default:
			printf("Numero invalido!");
			break;
	}
}