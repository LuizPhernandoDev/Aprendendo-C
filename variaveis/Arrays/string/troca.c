#include <stdio.h>

int main(){
	char string1[20] = "Ola Mundo!\n";
	char string2[20];
	
	//string2 = string1   // errado
	
	int i;
	for(i = 0; string1[i] != '\0'; i++){
		string2[i] = string1[i];
	}
	string2[i] = '\0';
	
	printf("%s",string2);
	
	return 0;
}