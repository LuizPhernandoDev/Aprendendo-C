#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned) e receber qualquer tipo de parametro(int, char, float, double) ate com modificadores
double calcularAreaCirculo(double raio) {
    double pi = 3.1415926535;
    return pi * (raio * raio);
}

int main() {
    double meuRaio = 5.5;
    double area = calcularAreaCirculo(meuRaio);
    
    printf("A area de um circulo com raio %.2f eh: %.2f\n", meuRaio, area);
    
    return 0;
}