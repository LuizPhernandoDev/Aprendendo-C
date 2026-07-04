#include <stdio.h>
#include <string.h>

int main(){
	//numero de vogais
	char string1[20] = "Ola Mundo!";
	char vogais[20] = "aAeEiIoOuU";
	int i, j, Total = 0;
	int Tam1 = strlen(string1);
	int Tam2 = strlen(vogais);
	for(i = 0; i < Tam1; i++){
		for(j = 0; j < Tam2; j++){
			if(string1[i] == vogais[j]){
				Total++;
				break;
			}
		}
	}
	printf("Numero de vogais: %d\n",Total);
	
	return 0;
}