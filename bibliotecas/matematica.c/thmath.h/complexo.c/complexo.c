#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    double complex z = 3.0 + 4.0 * I;

    printf("creal: %f\n", creal(z)); // Extrai a parte real do número complexo informado.
    printf("cimag: %f\n", cimag(z)); // Extrai a parte imaginária do número complexo informado.
    printf("carg: %f\n", carg(z)); // Calcula o argumento ou ângulo do número complexo.
    printf("cproj: %f + %fi\n", creal(cproj(z)), cimag(cproj(z))); // Calcula a projeção do número complexo na esfera.
    printf("conj: %f + %fi\n", creal(conj(z)), cimag(conj(z))); // Calcula o conjugado invertendo o sinal da imaginária.
    return 0;
}