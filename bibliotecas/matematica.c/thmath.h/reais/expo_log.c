#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float a = 2.0f;
    double b = 0.00005;
    long double c = 100.0L;

    printf("exp2: %f\n", exp2(a)); // Calcula o resultado da base dois exponencial genérica.
    printf("expm1: %f\n", expm1(b)); // Calcula a exponencial menos um com alta precisão.
    printf("log10: %Lf\n", log10(c)); // Computa o valor do logaritmo na base dez.
    printf("log2: %f\n", log2(a)); // Computa o valor do logaritmo na base dois.
    printf("log1p: %f\n", log1p(b)); // Computa logaritmo natural de um mais o argumento.
    printf("fma: %f\n", fma(a, 3.0, 5.0)); // Multiplica e adiciona os termos em etapa única.
    return 0;
}