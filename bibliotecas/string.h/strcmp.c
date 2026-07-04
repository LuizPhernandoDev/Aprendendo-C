#include <stdio.h>
#include <string.h>

int main(){
	//compara duas variaveis e/ou textos, retorna 1 se forem diferentes e 0 se forem iguas 
	char Palavra1[20] = "Ola Mundo!";
	char Palavra2[20] = "OLA MUNDO!";
	
	printf("%d\n",strcmp(Palavra1, Palavra2));
	printf("%d\n",strcmp("Ola Mundo!", "OLA MUNDO!"));
	
	printf("%d\n",strcmp(Palavra1, "OLA MUNDO!"));
	printf("%d\n",strcmp("Ola Mundo!", Palavra2));
	
	printf("%d\n",strcmp(Palavra1, Palavra1));
	printf("%d\n",strcmp(Palavra2, Palavra2));
	
	printf("%d\n",strcmp("Ola Mundo!", "Ola Mundo!"));
	printf("%d\n",strcmp("OLA MUNDO!", "OLA MUNDO!"));
	
	printf("%d\n",strcmp(Palavra1, "Ola Mundo!"));
	printf("%d\n",strcmp(Palavra2, "OLA MUNDO!"));
	
	return 0;
}