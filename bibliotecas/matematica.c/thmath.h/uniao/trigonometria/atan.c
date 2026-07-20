#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float f = 0.2f;
    double d = 0.5;
    long double ld = 0.7L;
    int i = 0;
    float complex fc = 0.2f + 0.3f * I;
    double complex dc = 0.5 + 0.5 * I;
    long double complex ldc = 0.7L + 0.1L * I;

    printf("float: %f\n", atan(f));
    printf("double: %f\n", atan(d));
    printf("long double: %Lf\n", atan(ld));
    printf("int (promovido): %f\n", atan(i));
    printf("float complex: %f + %fi\n", creal(atan(fc)), cimag(atan(fc)));
    printf("double complex: %f + %fi\n", creal(atan(dc)), cimag(atan(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(atan(ldc)), cimag(atan(ldc)));

    return 0;
}