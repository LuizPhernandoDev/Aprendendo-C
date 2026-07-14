#include <stdio.h>

#define VALOR 10

int main() {
	
	printf("VALOR = %d\n", VALOR);
	
    //contante para de existir
	#undef VALOR 
	#define VALOR 20
	
	printf("VALOR = %d\n", VALOR);
	
    return 0;
}