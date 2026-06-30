#include <stdio.h>

int fatorial(int n);

int main() {
    int numero = 5;
    int resultado = fatorial(numero);
    
    // A função chama a si mesma, mas passando um problema menor (n - 1)
    printf("O fatorial de %d eh: %d\n", numero, resultado);
    
    return 0;
}

int fatorial(int n){
	// Impede que a função chame a si mesma para sempre
    if (n == 0){
    	return 1;
	}
    return n * fatorial(n - 1);
}