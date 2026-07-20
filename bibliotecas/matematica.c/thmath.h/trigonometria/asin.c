#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float f = 0.5f;
    double d = 0.5;
    long double ld = 0.5L;
    int i = 0;
    float complex fc = 0.5f + 0.5f * I;
    double complex dc = 0.5 + 0.5 * I;
    long double complex ldc = 0.5L + 0.5L * I;

    printf("float: %f\n", asin(f));
    printf("double: %f\n", asin(d));
    printf("long double: %Lf\n", asin(ld));
    printf("int (promovido): %f\n", asin(i));
    printf("float complex: %f + %fi\n", creal(asin(fc)), cimag(asin(fc)));
    printf("double complex: %f + %fi\n", creal(asin(dc)), cimag(asin(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(asin(ldc)), cimag(asin(ldc)));

    return 0;
}