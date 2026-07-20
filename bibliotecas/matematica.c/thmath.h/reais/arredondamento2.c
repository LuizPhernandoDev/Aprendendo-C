#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float v1 = 4.5f;
    double v2 = 5.5;
    long double v3 = -3.0L;

    printf("rint: %f\n", rint(v1)); // Arredonda o valor atual utilizando o modo CPU.
    printf("lrint: %ld\n", lrint(v2)); // Converte para inteiro long usando regras da CPU.
    printf("llrint: %lld\n", llrint(v3)); // Converte para long long inteiro via hardware diretamente.
    printf("nearbyint: %f\n", nearbyint(v1)); // Executa o arredondamento sem gerar avisos na CPU.
    printf("copysign: %f\n", copysign(v2, v3)); // Copia o sinal do segundo para o primeiro.
    printf("remainder: %f\n", remainder(7.0, 3.0)); // Calcula o resto exato conforme a norma IEEE.
    return 0;
}