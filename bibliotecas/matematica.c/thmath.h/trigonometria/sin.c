#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float f = 0.5f;
    double d = 0.5;
    long double ld = 0.5L;
    int i = 2;
    float complex fc = 0.5f + 1.0f * I;
    double complex dc = 0.5 + 1.0 * I;
    long double complex ldc = 0.5L + 1.0L * I;

    printf("float: %f\n", sin(f));
    printf("double: %f\n", sin(d));
    printf("long double: %Lf\n", sin(ld));
    printf("int (promovido): %f\n", sin(i));
    printf("float complex: %f + %fi\n", creal(sin(fc)), cimag(sin(fc)));
    printf("double complex: %f + %fi\n", creal(sin(dc)), cimag(sin(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(sin(ldc)), cimag(sin(ldc)));

    return 0;
}