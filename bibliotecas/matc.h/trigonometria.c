#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main() {
    double x = M_PI/6;
    double a = 0.866025, b =  0.5, c = 0.577350;
    double y = 1.0, z = 2.0;
    
    printf("Calcula o cosseno do ângulo x: %lf\n", cos(x));
    printf("Calcula o seno do ângulo x: %lf\n", sin(x));
    printf("Calcula o tangente do ângulo x: %lf\n", tan(x));
    printf("Calcula o arco cosseno do ângulo a: %lf\n", acos(a));
    printf("Calcula o arco seno do ângulo b: %lf\n", asin(b));
    printf("Calcula o arco tangente do ângulo c: %lf\n", atan(c));
    printf("Calcula o arco tangente de y/z e determina o quadrante correto: %lf\n", atan2(y, z));

    return 0;
}