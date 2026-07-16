#include <stdio.h>
#include <complex.h>

int main() {
   
    double complex resultado, z = 3.0 + 4.0 * I;
    
    //A Ponte de Ligação: A Fórmula de Euler
    resultado = csin(z);
    printf("sin(z) = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    resultado = ccos(z);
    printf("cos(z) = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    resultado = ctan(z);
    printf("tg(z) = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    return 0;
}