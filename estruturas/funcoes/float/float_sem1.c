#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned)
//função sem parametro
float obterGravidadeTerrestre() {
    return 9.81f; // O 'f' indica explicitamente que este número é um float
}

int main() {
    float massa = 50.0f;
    //ignora qualquer tipo de parametro de invocação da função
    float peso = massa * obterGravidadeTerrestre('A',67,16.5); 
    
    printf("O peso de um corpo de %.1f kg na Terra eh: %.2f Newtons\n", massa, peso);
    
    return 0;
}