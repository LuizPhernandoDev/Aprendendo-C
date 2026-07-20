#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float f = 4.0f;
    double d = 4.0;
    long double ld = 4.0L;
    int i = 4;
    float complex fc = 4.0f + 3.0f * I;
    double complex dc = 4.0 + 3.0 * I;
    long double complex ldc = 4.0L + 3.0L * I;

    printf("float: %f\n", sqrt(f));
    printf("double: %f\n", sqrt(d));
    printf("long double: %Lf\n", sqrt(ld));
    printf("int (promovido): %f\n", sqrt(i));
    printf("float complex: %f + %fi\n", creal(sqrt(fc)), cimag(sqrt(fc)));
    printf("double complex: %f + %fi\n", creal(sqrt(dc)), cimag(sqrt(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(sqrt(ldc)), cimag(sqrt(ldc)));
    return 0;
}