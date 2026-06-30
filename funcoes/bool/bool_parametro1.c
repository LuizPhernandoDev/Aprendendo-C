#include <stdio.h>
#include <stdbool.h>
//receber qualquer tipo de parametro(int, char, float, double) ate com modificadores
bool Teste(bool afirmacao){
    return afirmacao && printf("Verdade - ") || !printf("Falso - ");
}

int main() {
	
    bool Afirmacao = false;
    
    printf("%d\n", Teste(Afirmacao));
    
    return 0;
}