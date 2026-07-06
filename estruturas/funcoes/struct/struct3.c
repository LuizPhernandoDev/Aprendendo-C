#include <stdio.h>

struct ponto{
	int x, y;
};

void atribui(struct ponto *p){
	(*p).x = 10;    //os parentes serve para informar que a struct como um todo foi passada como referencia
	(*p).y = 20;
}

void atribui2(struct ponto *p){
	p->x = 15;   //mesma forma de atribuir a struct na função
	p->y = 25;
}

int main(){
	struct ponto p1;
	
	atribui1(&p1);
	
	printf("x = %d\n", p1.x);
	printf("y = %d\n", p1.y);
	
	atribui2(&p1);
	
	printf("x = %d\n", p1.x);
	printf("y = %d\n", p1.y);
	
	return 0;
}