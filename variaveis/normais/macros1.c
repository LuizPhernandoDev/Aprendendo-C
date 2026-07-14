#include <stdio.h>

#define maior(x,y) x>y?x:y

int main() {
	int a = 5;
	int b = 10;
	int c = maior(a,b);
	
    printf("%d\n", c);
	
    return 0;
}