#include <stdio.h>

#define troca(a,b,c) {c  t = a; a = b; b = t;}

int main() {
	int x = 5;
	int y = 10;
	
	troca(x, y, int)
    printf("x = %d\n", x);
    printf("y = %d\n", y);
	
    return 0;
}