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

    printf("float: %f\n", cosh(f));
    printf("double: %f\n", cosh(d));
    printf("long double: %Lf\n", cosh(ld));
    printf("int (promovido): %f\n", cosh(i));
    printf("float complex: %f + %fi\n", creal(cosh(fc)), cimag(cosh(fc)));
    printf("double complex: %f + %fi\n", creal(cosh(dc)), cimag(cosh(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(cosh(ldc)), cimag(cosh(ldc)));
    
    return 0;
}