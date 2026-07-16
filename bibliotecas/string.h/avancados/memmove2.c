#include <stdio.h>
#include <string.h>

void imprime(int *v, int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d, ", v[i]);
	}
	printf("\n");
}

int main(){
	int X[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	imprime(X, 10);
	
    //pode ser feita uma sobreposição na memoria
	memmove(&X[5], &X[0], 20);
	imprime(X, 10);
	
	return 0;
}