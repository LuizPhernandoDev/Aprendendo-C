#include <stdio.h>

int main() {
	int i, *ptr, vet[5] = {1, 2, 3, 4, 5};
	ptr = vet;   //não é preciso colocar o & pois arrys são tratados como ponteiros naturaris

	for(i = 0; i < 5; i++){
		printf("%d ", *(ptr+i));
	}
	printf("\n");
	
	for(i = 0; i < 5; i++){
		printf("%d ", ptr[i]);
	}
	
    return 0;
}