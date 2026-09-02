#include <stdio.h>

int main(){
	
	int x = 1, y = 0, a = 110, b = 80;
	
	//troca o valor das variaveis sem variavel alxiliar
	if(a & 1)
		printf("impar\n");     // É ímpar (o último bit é 1)
	else
		printf("par\n");       // É par (o último bit é 0)
	
	printf("%d\n", 0 & 0);     //imprime 0
	printf("%d\n", 0 & 1);     //imprime 0
	printf("%d\n", 1 & 0);     //imprime 0 
	printf("%d\n", 1 & 1);     //imprime 1
	
	//transforma os dados em numero binario e compara com o xor cada unidade posicional e retorna o valor convertido
    printf("%d\n", a & b);     //imprime 64 
    printf("%d\n", a & 80);    //imprime 64 
    printf("%d\n", 110 & b);    //imprime 64 
    printf("%d\n", 110 & 80);   //imprime 64
    
	printf("%c\n", a & b);     //imprime @ 
    printf("%c\n", a & 80);    //imprime @ 
    printf("%c\n", 110 & b);    //imprime @
	printf("%c\n", 110 & 80);   //imprime @ 
	
	printf("%d\n", 1 & 1 & 1 & 1 & 1);     //imprime 1
	printf("%d\n", 1 & 1 & 1 & 1 & 0);     //imprime 0 ==> todas as expressões tem que ser verdadeiras
	
	printf("%d\n", 1 && printf("Verdadeiro\n"));             //imprime Verdadeiro e depois 1
	printf("%d\n", 0 && printf("Nunca vai imprimir\n"));     //imprime 0 ==> TESTE DE CURTO CIRCUITO - se a primeira expressão é falsa não avalia as outras 
	
	return 0;
}