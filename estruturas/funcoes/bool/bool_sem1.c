#include <stdio.h>
#include <stdbool.h>

//função sem parametro
bool Verdade(){
    return 1;
}

int main() {
	//ignora qualquer tipo de parametro de invocação da função
    printf("Representacao de verdade: %d\n", Verdade('A',67,16.5));
    
    return 0;
}