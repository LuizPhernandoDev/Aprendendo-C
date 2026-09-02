#include <stdio.h>

int main(){
	
	int a = 17, b = 80;
	
	printf("%d\n", 0 || 0);     //imprime 0
	printf("%d\n", 0 || 1);     //imprime 1
	printf("%d\n", 1 || 0);     //imprime 1 
	printf("%d\n", 1 || 1);     //imprime 1

    printf("%d\n", a || b);     //imprime 1 
    printf("%d\n", a || 80);    //imprime 1 
    printf("%d\n", 17 || b);    //imprime 1 
    printf("%d\n", 17 || 80);   //imprime 1 
	
    printf("%d\n", 0 || 0 || 0 || 0 || 0);     //imprime 0 
	printf("%d\n", 0 || 0 || 0 || 0 || 1);     //imprime 1 ==> ao menos uma das expressões tem que ser verdadeira
	
	printf("%d\n", 0 || printf("Verdadeiro\n"));             //imprime Verdadeiro e depois 1
	printf("%d\n", 1 || printf("Nunca vai imprimir\n"));     //imprime 1 ==> TESTE DE CURTO CIRCUITO - se a primeira expressão é verdadeira não avalia as outras 
	
	return 0;
}