#include <stdio.h>

int soma (int a, int b){
	return a + b;
} 
int main () {
	int x,y, z;
	int (*p) (int, int);
	
	printf ("Digite 2 numeros: ");
	scanf ("%d %d", &x, &y);
	
	//ponteiro recebe endereco da função
	p = soma;
	z = p(x,y);
	
	printf ("Soma = %d\n", z);
	
	return 0;
}
