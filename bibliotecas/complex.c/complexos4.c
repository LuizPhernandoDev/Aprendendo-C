#include <stdio.h>
#include <complex.h>

int main() {
   
    double complex resultado, z = 3.0 + 4.0 * I;
    
    //A Ponte de Ligação: A Fórmula de Euler
    resultado = casin(z);
    printf("arcsin(z) = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    resultado = cacos(z);
    printf("arccos(z) = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    resultado = catan(z);
    printf("arctg(z) = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    return 0;
}