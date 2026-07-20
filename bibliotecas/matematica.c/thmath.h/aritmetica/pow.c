#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float f = 3.0f;
    double d = 3.0;
    long double ld = 3.0L;
    int i = 3;
    float complex fc = 3.0f + 1.0f * I;
    double complex dc = 3.0 + 1.0 * I;
    long double complex ldc = 3.0L + 1.0L * I;

    printf("float: %f\n", pow(f, 2));
    printf("double: %f\n", pow(d, 2));
    printf("long double: %Lf\n", pow(ld, 2));
    printf("int (promovido): %f\n", pow(i, 2));
    printf("float complex: %f + %fi\n", creal(pow(fc, 2)), cimag(pow(fc, 2)));
    printf("double complex: %f + %fi\n", creal(pow(dc, 2)), cimag(pow(dc, 2)));
    printf("long double complex: %Lf + %Lfi\n", creal(pow(ldc, 2)), cimag(pow(ldc, 2)));
    return 0;
}