#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float f = 2.0f;
    double d = 2.0;
    long double ld = 2.0L;
    int i = 2;
    float complex fc = 2.0f + 1.0f * I;
    double complex dc = 2.0 + 1.0 * I;
    long double complex ldc = 2.0L + 1.0L * I;

    printf("float: %f\n", log(f));
    printf("double: %f\n", log(d));
    printf("long double: %Lf\n", log(ld));
    printf("int (promovido): %f\n", log(i));
    printf("float complex: %f + %fi\n", creal(log(fc)), cimag(log(fc)));
    printf("double complex: %f + %fi\n", creal(log(dc)), cimag(log(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(log(ldc)), cimag(log(ldc)));
    return 0;
}