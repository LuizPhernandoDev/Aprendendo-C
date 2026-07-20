#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <tgmath.h>

int main() {
    float f = -5.5f;
    double d = -5.5;
    long double ld = -5.5L;
    int i = -5;
    float complex fc = 3.0f + 4.0f * I;
    double complex dc = 3.0 + 4.0 * I;
    long double complex ldc = 3.0L + 4.0L * I;

    printf("float: %f\n", fabs(f));
    printf("double: %f\n", fabs(d));
    printf("long double: %Lf\n", fabs(ld));
    printf("int (promovido): %f\n", fabs(i));
    printf("float complex (modulo real): %f\n", fabs(fc));
    printf("double complex (modulo real): %f\n", fabs(dc));
    printf("long double complex (modulo real): %Lf\n", fabs(ldc));
    return 0;
}