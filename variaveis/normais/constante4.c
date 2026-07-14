#include <stdio.h>

int main() {
    //é valida apenas no main
    const int DIAS = 7;
    const char COMPRIMENTO[] = "Ola";
    const float PI = 3.141592653;
    int Raio = 10;   
    
    printf("Raio: %d\n", Raio);
    printf("Perimetro: %f\n", 2*PI*Raio);
    printf("Area: %f\n", PI*Raio*Raio);
    
    printf("Dias da semana: %d\n", DIAS);
    
    printf("%s mundo!\n", COMPRIMENTO);
	
    return 0;
}