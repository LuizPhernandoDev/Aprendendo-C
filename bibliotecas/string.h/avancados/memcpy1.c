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
	int X[5] = {-1, -1, -1, -1, -1};
	int V[5] = {1, 2, 3, 4, 5};
	
	imprime(X, 5);
	
    //o tipo de dado é passada como ponteiro
	memcpy(X, V, 4);
	imprime(X, 5);
	
	memcpy(X, V, 20);
	imprime(X, 5);
	
	return 0;
}