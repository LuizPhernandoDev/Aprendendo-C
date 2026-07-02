#include <stdio.h>

#define PI 3.141592653
#define DIAS 7
#define COMPRIMENTO "Ola"

int main() {
    
    int Raio = 10;   
    
    printf("Raio: %d\n", Raio);
    printf("Perimetro: %f\n", 2*PI*Raio);
    printf("Area: %f\n", PI*Raio*Raio);
    
    printf("Dias da semana: %d\n", DIAS);
    
    printf("%s mundo!\n", COMPRIMENTO);
	
    return 0;
}