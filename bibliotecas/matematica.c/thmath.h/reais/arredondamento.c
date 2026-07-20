#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float v1 = 4.3f;
    double v2 = 5.7;
    long double v3 = -2.5L;

    printf("ceil: %f\n", ceil(v1)); // Arredonda o valor flutuante para o inteiro superior.
    printf("floor: %f\n", floor(v2)); // Arredonda o valor flutuante para o inteiro inferior.
    printf("trunc: %Lf\n", trunc(v3)); // Remove completamente a parte fracionária do número informado.
    printf("round: %f\n", round(v2)); // Arredonda para o valor numérico inteiro mais próximo.
    printf("lround: %ld\n", lround(v1)); // Arredonda o número convertendo para o tipo long.
    printf("llround: %lld\n", llround(v3)); // Arredonda o número convertendo para long long inteiro.
    return 0;
}