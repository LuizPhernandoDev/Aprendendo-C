#include <stdio.h>

int main() {
    register int contador;
    int soma = 0;

    printf("--- Testando Classe REGISTER ---\n");

    // Loop ultra rápido usando o registrador da CPU
    for (contador = 0; contador < 1000; contador++) {
        soma += contador;
    }
    printf("Soma total: %d\n", soma);

    //não tem endeço na memoria, sendo imposivel ler ou guardar em ponteiro
    // printf("Endereço do contador: %p", &contador); 

    return 0;
}