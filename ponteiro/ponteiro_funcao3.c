#include <stdio.h>

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

void executarCalculo(int x, int y, int (*operacao)(int, int)) {
    
    int resultado = operacao(x, y); 
    
    printf("O resultado da operacao e: %d\n", resultado);
}

int main() {
    int valor1 = 10;
    int valor2 = 5;
    
    printf("Fazendo uma soma:\n");

    executarCalculo(valor1, valor2, somar); 
    
    printf("\nFazendo uma subtracao:\n");

    executarCalculo(valor1, valor2, subtrair); 
    
    return 0;
}