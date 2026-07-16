#include <stdio.h>
#include <complex.h>

int main() {
    // Declarando dois números complexos   
	/*
	pode ser feita com qualquer tipo de ponto flutuante, 
	mas se não for double deve adicionar um sufixo
	f para float e l para long double
	*/
    double complex z1 = 3.0 + 4.0 * I;
    double complex z2 = 1.0 - 2.0 * I;

    //são validos todos os operadores aritimeticos nativos do C
    double complex soma = z1 + z2;
    double complex multiplicacao = z1 * z2;
    //peradores de compração são validos apenas os de igualdade e desigualdade

    // Imprimindo os números originais
    // Nota: É necessário imprimir a parte real e a imaginária separadamente
    printf("z1 = %.2f + %.2fi\n", creal(z1), cimag(z1));
    printf("z2 = %.2f %+.2fi\n\n", creal(z2), cimag(z2)); // %+.2f força o sinal

    // Imprimindo resultados das operações
    printf("Soma (z1 + z2) = %.2f %+.2fi\n", creal(soma), cimag(soma));
    printf("Multiplicacao (z1 * z2) = %.2f %+.2fi\n\n", creal(multiplicacao), cimag(multiplicacao));

    // Usando as funções matemáticas
    printf("Modulo de z1 (|z1|) = %.2f\n", cabs(z1));
    printf("Argumento de z1 (em radianos) = %.2f\n", carg(z1));
    printf("Conjugado de z1 = %.2f %+.2fi\n", creal(conj(z1)), cimag(conj(z1)));
    
    //projeção na Esfera de Riemann
    double complex resultado = cproj(z1);

    printf("Parte real: %.2f\n", creal(resultado));
    printf("Parte imaginária: %.2f\n", cimag(resultado));

    return 0;
}