#include <stdio.h>

int main() {
	// Inicializando todos os elementos
	int numeros[5] = {10, 20, 30, 40, 50};
	
	// Se você não definir o tamanho, o compilador deduz pelo número de elementos
	int mais_numeros[] = {1, 2, 3}; // O tamanho será 3
	
	// Inicializando o primeiro elemento com 10 e o resto com 0 (padrão do C)
	int zeros[5] = {10};
    
    /*
    Se você tem um vetor de 5 inteiros (int geralmente ocupa 4 bytes), 
    o programa reservará 20 bytes seguidos na memória RAM. 
    O nome do vetor, por debaixo dos panos, 
    age como um ponteiro que aponta para o endereço do primeiro elemento
    */
   
    return 0;
}