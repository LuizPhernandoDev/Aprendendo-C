#include <stdio.h>
#include <math.h>

int main() {
    double normal = 42.0;
    double negativo = -5.5;
    
    //(Not-a-Number)
    double erro_nan = sqrt(-1.0); 
    
    //(Inf)
    double zero = 0.0;
    double infinito = 1.0 / zero; 

    if (isnan(erro_nan)) {
        printf("A variavel 'erro_nan' não é um número válido (NaN).\n");
    }

    if (isinf(infinito)) {
        printf("A variavel 'infinito' atingiu o valor Infinito.\n");
    }

    // isfinite retorna verdadeiro apenas se não for infinito e não for NaN
    if (isfinite(normal)) {
        printf("O numero %.1f é finito e seguro para calculos.\n", normal);
    }
    if (!isfinite(infinito)) {
        printf("Cuidado! O valor Infinito não é finito.\n");
    }

    if (signbit(negativo)) {
        printf("O numero %.1f tem o sinal negativo.\n", negativo);
    }
    
    // signbit é útil até para diferenciar +0.0 de -0.0
    double zero_negativo = -0.0;
    if (signbit(zero_negativo)) {
        printf("Zero com sinal negativo detectado!\n");
    }

    return 0;
}