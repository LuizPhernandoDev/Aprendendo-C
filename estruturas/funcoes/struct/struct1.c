#include <stdio.h>

struct ponto{
	int x, y;
};

void imprime(int n){
	printf("valor = %d\n", n);
}

int main(){
	struct ponto p1 = {10, 20};
	
	imprime(p1.x);
	imprime(p1.y);

    return 0;
}