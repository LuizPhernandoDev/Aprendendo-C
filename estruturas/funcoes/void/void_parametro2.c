#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned) e receber qualquer tipo de parametro(int, char, float, double) ate com modificadores
//não é preciso colocar o parametro no prototipo da funcao
void imprimirDobro(int numero);

int main(){
	int X = 10;

	imprimirDobro(X);
	
    return 0;
}

void imprimirDobro(int numero) {
    printf("O dobro de %d e: %d\n", numero, numero * 2);
}