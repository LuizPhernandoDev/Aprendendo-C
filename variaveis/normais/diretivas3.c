#include <stdio.h>

#define VALOR

int main() {
    
    //comparação de existencia de constantes
    #ifdef VALOR
		printf("VALOR definido!\n");
	#else
    	printf("VALOR nao definido!\n");
    #endif

    //comparação de inexistencia de constantes
    #ifndef VALOR
		printf("VALOR nao definido!\n");
	#else
    	printf("VALOR   definido!\n");
    #endif
	
    return 0;
}