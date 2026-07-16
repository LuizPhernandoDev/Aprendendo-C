#include <stdio.h>
#include <complex.h>

int main() {
	
    double complex resultado, z = 3.0 + 4.0 * I;
    
    //A Ponte de Ligação: A Fórmula de Euler
    resultado = casinh(z);
    printf("arcsin(z) hiper = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    resultado = cacosh(z);
    printf("arccos(z) hiper = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    resultado = catanh(z);
    printf("arctg(z) hiper = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    return 0;
}