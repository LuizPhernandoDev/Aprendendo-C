#include <stdio.h>
#include <stdbool.h>

int main(){
	
	int X, Y, Z;
	X = 5;
	Y = 10;
	
	// Z "recebe" se condicao for verdadeira X se não recebe Y
	Z = X > Y ? X : Y;
	
	printf("%d\n", Z);
	
	return 0;
}