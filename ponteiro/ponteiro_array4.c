#include <stdio.h>

typedef int vetor[10];

int main() {
	//Array de 10 inteiros
	vetor p1;
	
	//Ponteiro para o tipo "array de 10 inteiros"
	vetor *p2;
	
	/*Note que (*p3) está dentro de parênteses 
	(enfase na declaração do ponteiro). 
	Temos então um ponteiro para um "array de 10 inteiros"
	(p2 e p3 são equivalentes)*/
	int (*p3)[10];
	
	/*Apesar de semelhante à declaração de p3, 
	note que não existem parênteses colocando 
	ênfase na declaração do ponteiro. 
	Temos então um array de 10 "ponteiros para inteiros"*/
	int *p4[10];
	
    return 0;
}