#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned)
//prototipo sem parametro
char PrimeiraAlfabeto();

int main(){
	//ignora qualquer tipo de parametro de invocação da função
	printf("%c\n", PrimeiraAlfabeto('A',67,16.5));
	
    return 0;
}
//função sem parametro
char PrimeiraAlfabeto() {
    return 'A';
}