#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned) e receber qualquer tipo de parametro(int, char, float, double) ate com modificadores
//não é preciso colocar o parametro no prototipo da funcao
float calcularArea(float base, float altura);

int main() {
    float Base = 8, Altura = 10;
    
    printf("A area e: %.1f\n", calcularArea(Base, Altura));
    
    return 0;
}

float calcularArea(float base, float altura) {
    return base * altura;
}