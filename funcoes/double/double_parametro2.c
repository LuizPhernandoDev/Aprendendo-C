#include <stdio.h>

double calcularAreaCirculo(double raio);

int main() {
    double meuRaio = 5.5;
    double area = calcularAreaCirculo(meuRaio);
    
    printf("A area de um circulo com raio %.2f eh: %.2f\n", meuRaio, area);
    
    return 0;
}

double calcularAreaCirculo(double raio) {
    double pi = 3.1415926535;
    return pi * (raio * raio);
}