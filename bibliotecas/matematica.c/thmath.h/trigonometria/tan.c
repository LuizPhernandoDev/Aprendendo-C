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

    printf("float: %f\n", tan(f));
    printf("double: %f\n", tan(d));
    printf("long double: %Lf\n", tan(ld));
    printf("int (promovido): %f\n", tan(i));
    printf("float complex: %f + %fi\n", creal(tan(fc)), cimag(tan(fc)));
    printf("double complex: %f + %fi\n", creal(tan(dc)), cimag(tan(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(tan(ldc)), cimag(tan(ldc)));

    return 0;
}