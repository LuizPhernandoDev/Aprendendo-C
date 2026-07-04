#include <stdio.h>

int main(){
    //sem usar union
	short int X = 1545;   //00000110 00001001
	unsigned char c1, c2;
	
	printf("Tamanho (em bits) X: %d\n", sizeof(X) * 8);
	printf("Tamanho de (em bits) c1: %d\n", sizeof(c1) * 8);
	printf("Tamanho de (em bits) c2: %d\n\n\n", sizeof(c2) * 8);
	
	c1 = 0x00ff & X;   //00001001 ==> 9
	c2 = X >> 8;       //00000110 ==> 6
	
	printf("X: %d\n", X);
	printf("c1: %d\n", c1);
	printf("c2: %d\n", c2);
	
	return 0;
}