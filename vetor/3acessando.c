#include <stdio.h>

int main() {
	int valores[5] = {10, 20, 30, 40, 50};

	// Acessando valores
	printf("O primeiro valor é: %d\n", valores[0]); // Imprime 10
	printf("O último valor é: %d\n", valores[4]);   // Imprime 50

	// Modificando um valor
	valores[2] = 99;
	printf("O terceiro valor é: %d\n", valores[2]); // Imprime 99
    
    return 0;
}