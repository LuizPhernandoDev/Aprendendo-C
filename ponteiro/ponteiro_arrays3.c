#include <stdio.h>

//conceito de matriz
int main() {
	int x = 10, vet[2] = {20, 30};
	int *ptr[2];
	ptr[0] = &x;
	ptr[1] = vet;
	
	printf("ptr = %p\n", ptr[0]);       //&x
	printf("ptr = %p\n", ptr[1]);       //&vet[0]
	
	printf("*ptr = %d\n", *ptr[0]);     //x
	printf("ptr = %d\n", ptr[1][1]);    //vet[1]
	
    return 0;
}