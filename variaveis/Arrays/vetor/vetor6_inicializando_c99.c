#include <stdio.h>

int main() {
	// Inicializando apenas os elementos mencionandos
	int numeros[5] = {[2] = 10, [4] = 30};
	
	// Se você não definir o tamanho, o compilador deduz pelo número de elementos ou ultimo elemento inicializado
	int mais_numeros[] = {[2] =  3}; // O tamanho será 3
	
	//inicializacao de intervalos na array
	int outros_numeros[10] = {[0 ... 3] = 10, [5 ... 7] = 20};
	
	//campos nao inicializados serao zerados
	for(int i=0; i<5; i++){
		printf("%d ",numeros[i]);
	}
	printf("\n");
	
	for(int i=0; i<3; i++){
		printf("%d ",mais_numeros[i]);
	}
	printf("\n");
	
	for(int i=0; i<10; i++){
		printf("%d ",outros_numeros[i]);
	}
	printf("\n");
   
    return 0;
}