#include <stdio.h>
#include <string.h>

int main(){
	//numero de vogais
	char string1[20] = "Ola Mundo!";
	int i, Total = 0;
	int Tam = strlen(string1);
	for(i = 0; i < Tam; i++){
		if(string1[i] == 'A' || string1[i] == 'a' || string1[i] == 'E' || string1[i] == 'e' || string1[i] == 'I' || string1[i] == 'i' || string1[i] == 'O' || string1[i] == 'o' || string1[i] == 'U' || string1[i] == 'u'){
			Total++;
		}
	}
	printf("Numero de vogais: %d\n",Total);
	
	return 0;
}