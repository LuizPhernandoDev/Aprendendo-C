#include <stdio.h>

void imprimirDobro(int numero);

int main(){
	
	int X = 10;
	imprimirDobro(X);
	
    return 0;
}

void imprimirDobro(int numero) {
    printf("O dobro de %d e: %d\n", numero, numero * 2);
}