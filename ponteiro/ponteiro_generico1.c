#include <stdio.h>

int main(){
	void *ptr;
	int *p, num = 10;
	
	p = &num;
	ptr = &num;
	printf("Endereco de ptr: %p\n", ptr);   //endereço de int
	
	ptr = &p;
	printf("Endereco de ptr: %p\n", ptr);   //endereço de int *
	
	ptr = p;
	printf("Endereco de ptr: %p\n", ptr);   //endereço de int
	
	return 0;
}