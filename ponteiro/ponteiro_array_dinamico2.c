#include <stdio.h>
#include <stdlib.h>

struct alunos{
	char nome[40];
	int matriculas;
	int notas[];   //nao ocupa espaco da memoria
};

int main(){
	struct alunos *p;
	int qtd = 5;
	p = malloc(sizeof(struct alunos) + sizeof(int) * qtd);   //peço para criar um espaco na memoria do tamanho da struct mais a quantidade desejada 

/*   //*p equivale a essa estrutura 
struct alunos{
	char nome[40];
	int matriculas;
	int notas[5];   
};
*/

	(*p).notas[3] = 7;
	printf("Quarta nota: %d\n", (*p).notas[3]);
    printf("Tamanho da union: %lu bytes\n", sizeof(p));
		
	return 0;
}