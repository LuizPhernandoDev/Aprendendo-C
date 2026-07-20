#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float v1 = 8.5f;
    double v2 = 12.34;
    long double v3 = 56.78L;
    int exp_int;
    double mantissa = frexp(v2, &exp_int);

    printf("frexp: %f, exp: %d\n", mantissa, exp_int); // Decompõe o ponto flutuante em mantissa e expoente.
    printf("ldexp: %f\n", ldexp(mantissa, exp_int)); // Reconstrói o número flutuante original a partir desses.
    printf("ilogb: %d\n", ilogb(v1)); // Retorna o expoente binário convertido em inteiro nativo.
    printf("logb: %Lf\n", logb(v3)); // Retorna o expoente binário em ponto flutuante puro.
    printf("scalbn: %f\n", scalbn(v1, 3)); // Multiplica o número pela potência de base dois.
    printf("scalbln: %f\n", scalbln(v2, 3L)); // Multiplica usando um expoente do tipo inteiro longo.
    return 0;
}