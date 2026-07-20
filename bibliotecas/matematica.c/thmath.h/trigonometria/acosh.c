#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float f = 1.5f;
    double d = 2.0;
    long double ld = 2.5L;
    int i = 3;
    float complex fc = 0.5f + 0.5f * I;
    double complex dc = 1.5 + 1.0 * I;
    long double complex ldc = 0.5L + 0.5L * I;

    printf("float: %f\n", acosh(f));
    printf("double: %f\n", acosh(d));
    printf("long double: %Lf\n", acosh(ld));
    printf("int (promovido): %f\n", acosh(i));
    printf("float complex: %f + %fi\n", creal(acosh(fc)), cimag(acosh(fc)));
    printf("double complex: %f + %fi\n", creal(acosh(dc)), cimag(acosh(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(acosh(ldc)), cimag(acosh(ldc)));

    return 0;
}