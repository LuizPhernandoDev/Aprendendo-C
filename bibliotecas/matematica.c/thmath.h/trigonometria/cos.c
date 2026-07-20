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

    printf("float: %f\n", cos(f));
    printf("double: %f\n", cos(d));
    printf("long double: %Lf\n", cos(ld));
    printf("int (promovido): %f\n", cos(i));
    printf("float complex: %f + %fi\n", creal(cos(fc)), cimag(cos(fc)));
    printf("double complex: %f + %fi\n", creal(cos(dc)), cimag(cos(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(cos(ldc)), cimag(cos(ldc)));

    return 0;
}