#include <stdio.h>
#include <stdbool.h>

int main(){
	int X;
	float Y = 5.6789;
	
	X = Y;
	
	// so aceita valores inteiros
	printf("%d\n", abs(64));   //imprime 64
	printf("%d\n", abs(-64));  //imprime 64
	printf("%d\n", abs(0));	   //imprime 0
	printf("%d\n", abs(-0));   //imprime 0
	
	printf("%d\n", abs(X));    //imprime 64
	printf("%d\n", abs(Y));    //imprime 0 por nao ser inteiro(lixo de memoria)
	
	return 0;
}