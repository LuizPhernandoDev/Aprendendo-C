#include <stdio.h>

int main() {
	int i, *ptr[5], vet[5] = {1, 2, 3, 4, 5};
	
	
	for(i = 0; i < 5; i++){
		ptr[i] = &vet[i];   //quando estiver utilizando arrys de ponteiros, é necessario usar o &
	}
	
	for(i = 0; i < 5; i++){
		printf("%p\n", ptr[i]);
	}
	
	
	
    return 0;
}