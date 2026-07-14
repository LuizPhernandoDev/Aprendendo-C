#include <stdio.h>

#define TAMANHO 50

#if TAMANHO > 100
	#undef TAMANHO 
	#define TAMANHO 100
#elif TAMANHO < 50
	#undef TAMANHO 
	#define TAMANHO 50
#else 
	#undef TAMANHO 
	#define TAMANHO 75
#endif
	
int main() {
	
	printf("TAMANHO = %d\n", TAMANHO);
	
    return 0;
}