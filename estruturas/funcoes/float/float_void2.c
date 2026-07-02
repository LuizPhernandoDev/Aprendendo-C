#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned)
float obterGravidadeTerrestre(void);

int main() {
    float massa = 50.0f;
    float peso = massa * obterGravidadeTerrestre(); 
    
    printf("O peso de um corpo de %.1f kg na Terra eh: %.2f Newtons\n", massa, peso);
    
    return 0;
}

float obterGravidadeTerrestre(void) {
    return 9.81f; // O 'f' indica explicitamente que este número é um float
}