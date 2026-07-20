#include <stdio.h>
#include <tgmath.h>

int main() {
    float f = 0.2f;
    double d = 0.5;
    long double ld = 0.7L;
    int i = 0;
    float complex fc = 0.5f + 0.5f * I;
    double complex dc = 1.5 + 1.0 * I;
    long double complex ldc = 0.5L + 0.5L * I;

    printf("float: %f\n", atanh(f));
    printf("double: %f\n", atanh(d));
    printf("long double: %Lf\n", atanh(ld));
    printf("int (promovido): %f\n", atanh(i));
    printf("float complex: %f + %fi\n", creal(atanh(fc)), cimag(atanh(fc)));
    printf("double complex: %f + %fi\n", creal(atanh(dc)), cimag(atanh(dc)));
    printf("long double complex: %Lf + %Lfi\n", creal(atanh(ldc)), cimag(atanh(ldc)));
    
    return 0;
}