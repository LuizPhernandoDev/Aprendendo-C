#include <stdio.h>
#include <stdbool.h>

//prototipo sem parametro
bool Verdade();

int main() {
	//ignora qualquer tipo de parametro de invocação da função
    printf("Representacao de verdade: %d\n", Verdade('A',67,16.5));
    
    return 0;
}
//função sem parametro
bool Verdade(){
    return 1;
}