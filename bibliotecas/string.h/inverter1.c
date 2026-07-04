#include <stdio.h>
#include <string.h>

int main(){
	char string1[20] = "Ola Mundo!";
	int i;
	for(i = strlen(string1) - 1; i >= 0; i--){
		printf("%c",string1[i]);
	}
	printf("\n");
	
	return 0;
}