#include <stdio.h>
#include <string.h>

struct tipo_pessoa{
	char nome[10];
	int idade; 
};

int main(){
	struct tipo_pessoa p1 = {"luiz", 20};
	struct tipo_pessoa p2;
	
	memcpy(&p2, &p1, sizeof(struct tipo_pessoa));
	
	printf("%s tem %d anos\n", p2.nome, p2.idade);
	
	return 0;
}