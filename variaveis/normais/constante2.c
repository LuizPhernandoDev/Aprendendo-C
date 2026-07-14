#include <stdio.h>

#define VALOR

int main() {
    
    //comparaçao de existencia de constantes
    #ifdef VALOR
		printf("VALOR definido!\n");
	#else
    	printf("VALOR nao definido!\n");
    #endif
	
    return 0;
}