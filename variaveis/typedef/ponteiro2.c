#include <stdio.h>

// Criamos nossas funções matemáticas normais
int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

// Usamos o typedef para criar o tipo do nosso Ponteiro de Função
// agora pode ser chamada pelo tipo 'OperacaoMatematica'".
typedef int (*OperacaoMatematica)(int, int);

// Criamos uma função que RECEBE a outra função como parâmetro
void executarCalculo(int x, int y, OperacaoMatematica operacao) {
    
    // Executamos a função que foi passada pelo ponteiro
    int resultado = operacao(x, y); 
    
    printf("O resultado da operacao e: %d\n", resultado);
}

int main() {
    int valor1 = 10;
    int valor2 = 5;
    
    printf("Fazendo uma soma:\n");
    // Passamos o NOME da função 'somar'. O nome da função, sem os parênteses, 
    // funciona exatamente como um ponteiro para ela!
    executarCalculo(valor1, valor2, somar); 
    
    printf("\nFazendo uma subtracao:\n");
    // Agora passamos a função 'subtrair'
    executarCalculo(valor1, valor2, subtrair); 
    
    return 0;
}