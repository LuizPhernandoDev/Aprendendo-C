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

    printf("float: %f\n", sinh(f));
    printf("double: %f\n", sinh(d));
    printf("long double: %Lf\n", sinh(ld));
    printf("int (promovido): %f\n", sinh(i));
    printf("float complex: %f + %fi\n", creal(sinh(fc)), cimag(sinh(fc)));
    printf("double complex: %f + %fi\n", creal(sinh(dc)), cimag(sinh(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(sinh(ldc)), cimag(sinh(ldc)));

    return 0;
}