#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned)
//prototipo sem parametro
int AnoAtual();

int main(){
	//ignora qualquer tipo de parametro de invocação da função
	printf("%d\n", AnoAtual('A',67,16.5));
	
    return 0;
}
//função sem parametro
int AnoAtual() {
    return 2026;
}