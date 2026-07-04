#include <stdio.h>

union Tipo{
	short int X ;  
	unsigned char c[2];
};

int main(){
    //usando union
	union Tipo V;
	V.X = 1545;   //00000110 00001001
	
	printf("Tamanho (em bits) X: %d\n", sizeof(V.X) * 8);
	printf("Tamanho de (em bits) c1: %d\n", sizeof(V.c) * 8);
	printf("Tamanho de (em bits) c2: %d\n\n\n", sizeof(V.c) * 8);
	
	printf("X: %d\n", V.X);
	printf("c1: %d\n", V.c[0]);
	printf("c2: %d\n", V.c[1]);
	
	return 0;
}