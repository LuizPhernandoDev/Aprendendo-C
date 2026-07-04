#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int Z;
	// Z "recebe" se condicao for verdadeira 1 se não recebe 0
	Z = true ? 1 : 0;
	
	printf("%d\n", Z);   //imprime 1
	
	Z = false ? 1 : 0;
	
	printf("%d\n", Z);   //imprime 0
	
	return 0;
}