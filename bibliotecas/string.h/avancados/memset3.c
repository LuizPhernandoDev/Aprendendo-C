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
	
	//1802 = 00000111 00001010 
	//sao dois bytes, a função pega um unsigned char(apenas o ultimo byte, 00001010)
	memset(V, 1802, 4);
	imprime(V, 5);
	
	//pega um byte do proximo espaço do vetor 
	memset(V, 1802, 5);
	imprime(V, 5);	
	
	return 0;
}