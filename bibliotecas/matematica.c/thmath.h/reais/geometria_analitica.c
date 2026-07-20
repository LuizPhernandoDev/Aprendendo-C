#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float x = 3.0f;
    double y = 4.0;
    long double z = 27.0L;

    printf("hypot: %f\n", hypot(x, y)); // Calcula o comprimento da hipotenusa do triângulo retângulo.
    printf("atan2: %f\n", atan2(y, x)); // Calcula o arco tangente usando quadrantes dos eixos.
    printf("cbrt: %Lf\n", cbrt(z)); // Calcula o valor exato da raiz cúbica fornecida.
    printf("fdim: %f\n", fdim(y, x)); // Retorna a diferença estritamente positiva entre os valores.
    printf("fmax: %f\n", fmax(x, y)); // Determina qual é o maior valor numérico informado.
    printf("fmin: %f\n", fmin(x, y)); // Determina qual é o menor valor numérico informado.
    return 0;
}