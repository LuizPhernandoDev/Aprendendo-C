#include <stdio.h>
#include <math.h>

int main() {
    double x = 1.0, y = 4.0;
    double a = 1000.0, b = 8.0;
    
    printf("Calcula o Número de Euler elevado à potência x: %.1lf\n", exp(x));
    printf("Calcula 2 elevado à potência y: %.1lf\n", exp2(y));
    printf("Calcula o logaritmo natural (base Euler) de x: %.1lf\n", log(x));
    printf("Calcula o logaritmo comum (base 10) de a: %.1lf\n", log10(a));
    printf("Calcula o logaritmo na base 2 de b: %.1lf\n", log2(b));

    return 0;
}