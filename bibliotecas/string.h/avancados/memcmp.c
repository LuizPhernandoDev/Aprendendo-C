#include <stdio.h>
#include <string.h>

int main(){
	int X[5] = {1, 3, 0, -1, 0};
	int V[5] = {1, 2, 3, 4, 5};
	int retorno;
	
    //o tipo de dado é passada como ponteiro
    //retorna 0 se o numero de bytes for igual e difernte de 0 se for diferente
	retorno = memcmp(X, V, 4);
	
	printf("%d\n", memcmp(X, V, 4));   //imprime 0
	printf("%d\n", memcmp(X, V, 8));   //imprime 1
	printf("%d\n", memcmp(&X[2], &V[2], 4));   //imprime -1
	
	printf("%d\n", memcmp(&X[0], &X[0], 4));   //imprime 0
	printf("%d\n", memcmp(&X[0], &X[2], 4));   //imprime 1
	printf("%d\n", memcmp(&X[0], &X[1], 4));   //imprime -1
	
	return 0;
}