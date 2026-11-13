#include <stdio.h>
#include <string.h>

int main(){
	// Junta até n caracteres de uma string ao final de outra

	char dest[20] = "Ola ";
	strncat(dest, "Mundo Cruel", 5); 
	
	printf("Destino: %s\n", dest);
	
	return 0;
}