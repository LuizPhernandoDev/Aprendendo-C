#include <stdio.h>

void imprime(int *v){
	int i;
	for(i=0;i<5;i++){
		printf("%d",v[i]);
	}
}
int main(){
	int vet[5]={1,2,3,4,5};
	
	puts("Imprime: ");
	imprime(vet);   //podia ter colocado o tamanho com o sizeof

	return 0;
}