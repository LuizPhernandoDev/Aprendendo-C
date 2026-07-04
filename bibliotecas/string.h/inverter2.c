#include <stdio.h>
#include <string.h>

int main(){
	char string1[20] = "Ola Mundo!";
	char string2[20];
	int i, j;
	for(i = strlen(string1) - 1, j = 0; i >= 0; i--, j++){
		string2[j] = string1[i];
	}
	string2[i] = '\0';
	
	printf("%s",string2);
	
	return 0;
}