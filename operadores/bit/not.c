#include <stdio.h>

int main(){

    //inverte todos os bits do numero
	printf("%d\n", ~0);   //imprime -1
	printf("%d\n", ~1);   //imprime -2
	printf("%d\n", ~-33);  //imprime 32
	printf("%d\n", ~22);  //imprime -23
	printf("%d\n", ~-74);  //imprime 73
	
	return 0;
}