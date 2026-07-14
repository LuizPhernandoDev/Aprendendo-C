#include <stdio.h>

#define prod1(x,y) x * y
#define prod2(x,y) (x) * (y)

int main() {
	int a = 5;
	int b = 10;
	
    printf("%d\n", prod1(a+2,b));   //a + 2 * b
    printf("%d\n", prod2(a+2,b));   //(a + 2) * b
	
    return 0;
}