#include <stdio.h>

int main(){
	int *p = 0x5DC;   //1500 uma posição qualquer do programa
                      //eu nâo estou mudando o dado quardado na memoria, eu estou mudado a rediao em que o ponteiro esta fixado
	
	printf("p = %d\n", p);
	p++;   //operação é feita proporcionalmente a quante dade de Bytes da variavel, exeto o tipo void, que é tratado como char
	
	printf("p = %d\n", p);   //1504
	p--;
	
	printf("p = %d\n", p);   //1500
	p+=5;
	
	printf("p = %d\n", p);   //1520
	p-=7;
	
	printf("p = %d\n", p);   //1492
	
	return 0;
}