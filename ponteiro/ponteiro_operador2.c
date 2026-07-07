#include <stdio.h>

int main(){
	int *p1 , *p2, x, y;
	
	p1 = &x;
	p2 = &y;

	//ponteiros podem ser comparedos usando quaisquer tipos de operadores relacionais
	if(p1 == p2){
		printf("Ponteiros iguais!\n");
	}else{
		printf("Ponteiros diferentes!\n");
	}
	
	return 0;
}