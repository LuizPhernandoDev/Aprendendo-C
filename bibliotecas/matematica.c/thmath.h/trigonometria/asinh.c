#include <stdio.h>
#include <tgmath.h>

int main() {
    float f = 0.5f;
    double d = 2.0;
    long double ld = 0.5L;
    int i = 3;
    float complex fc = 0.5f + 0.5f * I;
    double complex dc = 1.5 + 1.0 * I;
    long double complex ldc = 0.5L + 0.5L * I;

    printf("float: %f\n", asinh(f));
    printf("double: %f\n", asinh(d));
    printf("long double: %Lf\n", asinh(ld));
    printf("int (promovido): %f\n", asinh(i));
    printf("float complex: %f + %fi\n", creal(asinh(fc)), cimag(asinh(fc)));
    printf("double complex: %f + %fi\n", creal(asinh(dc)), cimag(asinh(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(asinh(ldc)), cimag(asinh(ldc)));
    
    return 0;
}