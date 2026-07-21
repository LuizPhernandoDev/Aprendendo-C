#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int min = -5, max = 10;
	
    //gerador de numeros pseudoaleatorios
	srand(time(NULL));
	
	for (int i = 0; i < 5; i++) {
        printf("Número %d: %d\n", i + 1, rand());   //valores pseudo aleatorios, vao de 0 a RAND_MAX(RAND_MAX >= 32767)
    }
    
    printf("\n");
    
    for (int i = 0; i < 5; i++) {
        printf("Número %d: %d\n", i + 1, rand() % 10);   //valores pseudo aleatorios, vao de 0 a 9
    }
    
    printf("\n");
	
	for (int i = 0; i < 5; i++) {
        printf("Número %d: %d\n", i + 1, min + rand() % (max - min + 1));   //valores pseudo aleatorios, vao de min a max
    }

    return 0;
}