#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float f = 1.0f;
    double d = 1.2;
    long double ld = 1.5L;
    int i = 1;
    float complex fc = 1.0f + 0.5f * I;
    double complex dc = 1.2 + 0.8 * I;
    long double complex ldc = 1.5L + 0.2L * I;

    printf("float: %f\n", tanh(f));
    printf("double: %f\n", tanh(d));
    printf("long double: %Lf\n", tanh(ld));
    printf("int (promovido): %f\n", tanh(i));
    printf("float complex: %f + %fi\n", creal(tanh(fc)), cimag(tanh(fc)));
    printf("double complex: %f + %fi\n", creal(tanh(dc)), cimag(tanh(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(tanh(ldc)), cimag(tanh(ldc)));

    return 0;
}