#include <stdio.h>
#include <complex.h>

int main() {
   
    double complex resultado, z = 3.0 + 4.0 * I;
    
    resultado = cexp(z);
    printf("e^z = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    resultado = clog(z);
    printf("ln(z) = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
	
	resultado = csqrt(z);
    printf("(z)^(1.0/2.0) = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    double complex c = 2.0 + 0.0 * I;
    
	resultado = cpow(z, c);
    printf("(z)^(c) = %.2f + %.2fi\n", creal(resultado), cimag(resultado));
    
    return 0;
}