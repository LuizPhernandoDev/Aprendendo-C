#include <stdio.h>

int main(){

	printf("%d\n", 0 >= 0);       //imprime 1
	printf("%d\n", 0.0 >= 0.0);   //imprime 1
	printf("%d\n", 0.0 >= 0);     //imprime 1
	printf("%d\n", 0 >= 0.0);     //imprime 1
	
	printf("%d\n", 1 >= 0);       //imprime 1 
	printf("%d\n", 0 >= 1);       //imprime 0 
	printf("%d\n", 0.1 >= 0.0);   //imprime 1
	printf("%d\n", 0.0 >= 0.1);   //imprime 0
	
	printf("%d\n", 'A' >= 65);    //imprime 1 ==> letras (char) são armazenados como números inteiros de 1byte
	printf("%d\n", 'a' >= 97);    //imprime 1 
	printf("%d\n", 'A' >= 'a');   //imprime 0 ==> letras maiúsculas são diferentes de minúsculas
	printf("%d\n", 'A' >= 97);    //imprime 0
	printf("%d\n", 65 >= 'a');    //imprime 0
	printf("%d\n", 65 >= 97);     //imprime 0
	
    return 0;
}