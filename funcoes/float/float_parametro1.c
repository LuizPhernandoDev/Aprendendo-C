#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned) e receber qualquer tipo de parametro(int, char, float, double) ate com modificadores
float calcularArea(float base, float altura) {
    return base * altura;
}

int main() {
    float Base = 8, Altura = 10;
    
    printf("A area e: %.1f\n", calcularArea(Base, Altura));
    
    return 0;
}