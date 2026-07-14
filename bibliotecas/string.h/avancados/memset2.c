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
	int V[5] = {1, 2, 3, 4, 5};
	
	imprime(V, 5);
	
	memset(V, 0, 4);
	imprime(V, 5);
	
	memset(V, 0, 20);
	imprime(V, 5);	
	
	return 0;
}