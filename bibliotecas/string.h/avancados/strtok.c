#include <stdio.h>
#include <string.h>

int main(){
	char str[100] = {"palavra1 palavra2,palavra3.palavra4!"};
	char *sub;
	char texto[20];
	
	sub = strtok(str, " ,.!");
	
	while(sub != NULL){
		
		printf("%s\n", sub);
		
		sub = strtok(NULL, " ,.!");
	}
	
	return 0;
}