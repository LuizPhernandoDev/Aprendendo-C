#include <stdio.h>
#include <string.h>

int main(){
	char string1[20] = "Ola Mundo!";
	char c;
	int i, Tam = strlen(string1);
	for(i = 0; i < Tam/2; i++){
		c = string1[i];
		string1[i] = string1[Tam-1-i];
		string1[Tam-1-i] = c;
	}
	printf("%s\n",string1);
	
	return 0;
}