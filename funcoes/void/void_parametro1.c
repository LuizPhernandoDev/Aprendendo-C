#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned) e receber qualquer tipo de parametro(int, char, float, double) ate com modificadores
void imprimirDobro(int numero) {
    printf("O dobro de %d e: %d\n", numero, numero * 2);
}

int main(){
	int X = 10;

	imprimirDobro(X);
	
    return 0;
}