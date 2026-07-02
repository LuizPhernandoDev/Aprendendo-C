#include <stdio.h>

int main(){
	int X, Y = 10;
	
	X = Y++;
	// X = Y;
	// Y++;
	
	printf("%d\n", X); // imprime 10
	printf("%d\n", Y); // imprime 11
	
	int A, B = 10;
	
	A = ++B;
	// B++;
	// A = B;
	
	printf("%d\n", A); // imprime 11
	printf("%d\n", B); // imprime 11
	
	int x, y = 10;
	
	x = y--;
	// x = y;
	// y--;
	
	printf("%d\n", x); // imprime 10
	printf("%d\n", y); // imprime 9
	
	int a, b = 10;
	
	a = --b;
	// b--;
	// a = b;
	
	printf("%d\n", a); // imprime 9
	printf("%d\n", b); // imprime 9

	return 0;
}