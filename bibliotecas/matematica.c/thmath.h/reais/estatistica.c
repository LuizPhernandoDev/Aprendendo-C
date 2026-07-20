#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float x = 0.5f;
    double y = 5.0;
    long double z = 2.0L;
    int quo;

    printf("erf: %f\n", erf(x)); // Calcula o valor da função de erro estatística.
    printf("erfc: %f\n", erfc(x)); // Computa a função de erro complementar de Gauss.
    printf("tgamma: %f\n", tgamma(y)); // Calcula o valor exato da função gama pura.
    printf("lgamma: %Lf\n", lgamma(z)); // Computa logaritmo do módulo absoluto da função gama.
    printf("nextafter: %f\n", nextafter(x, 1.0f)); // Encontra o próximo ponto flutuante representável na direção.
    printf("nexttoward: %f\n", nexttoward(y, 10.0L)); // Avança na direção informada usando um long double.
    printf("fmod: %f\n", fmod(7.3, 2.2)); // Retorna o resto da divisão entre ponto flutuante.
    printf("remquo: %f (quo: %d)\n", remquo(7.3, 2.2, &quo), quo); // Obtém o resto exato salvando o quociente parcial.
    return 0;
}