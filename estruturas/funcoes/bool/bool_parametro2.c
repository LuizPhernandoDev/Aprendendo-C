#include <stdio.h>
#include <stdbool.h>

//receber qualquer tipo de parametro(int, char, float, double) ate com modificadores
//não é preciso colocar o parametro no prototipo da funcao
bool Teste(bool afirmacao);

int main() {
	
    bool Afirmacao = false;
    
    printf("%d\n", Teste(Afirmacao));
    
    return 0;
}

bool Teste(bool afirmacao){
    return afirmacao && printf("Verdade - ") || !printf("Falso - ");
}