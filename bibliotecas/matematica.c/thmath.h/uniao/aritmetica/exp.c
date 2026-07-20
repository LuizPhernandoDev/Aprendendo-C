#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float f = 1.0f;
    double d = 1.0;
    long double ld = 1.0L;
    int i = 1;
    float complex fc = 1.0f + 1.0f * I;
    double complex dc = 1.0 + 1.0 * I;
    long double complex ldc = 1.0L + 1.0L * I;

    printf("float: %f\n", exp(f));
    printf("double: %f\n", exp(d));
    printf("long double: %Lf\n", exp(ld));
    printf("int (promovido): %f\n", exp(i));
    printf("float complex: %f + %fi\n", creal(exp(fc)), cimag(exp(fc)));
    printf("double complex: %f + %fi\n", creal(exp(dc)), cimag(exp(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(exp(ldc)), cimag(exp(ldc)));
    return 0;
}