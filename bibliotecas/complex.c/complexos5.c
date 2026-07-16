#include <stdio.h>
#include <complex.h>

int main() {
	
    double complex resultado, z = 3.0 + 4.0 * I;
    
    //A Ponte de Ligação: A Fórmula de Euler
    resultado = csinh(z);
    printf("sin(z) hiper = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    resultado = ccosh(z);
    printf("cos(z) hiper = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    resultado = ctanh(z);
    printf("tg(z) hiper = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    return 0;
}