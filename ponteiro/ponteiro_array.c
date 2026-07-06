#include <stdio.h>

int main() {
    int numeros[3] = {10, 20, 30};
	int *ptr = &numeros; // Não precisa de '&', 'numeros' já é o endereço do primeiro elemento

	printf("%d\n", *ptr);       
	printf("%d\n", *(ptr + 1)); 
	printf("%d\n", *(ptr + 2)); 
	
    return 0;
}