#include <stdio.h>
#include <string.h>

int main(){
	//compara duas variaveis e/ou textos, retorna 1 se forem diferentes e 0 se forem iguas 
	char Palavra1[20] = "Ola Mundo!";
	char Palavra2[20] = "OLA MUNDO!";
	
	printf("%d\n",strcmp(Palavra1, Palavra2));            //imprime 1
	printf("%d\n",strcmp("Ola Mundo!", "OLA MUNDO!"));    //imprime 1
	
	printf("%d\n",strcmp(Palavra1, "OLA MUNDO!"));        //imprime 1
	printf("%d\n",strcmp("Ola Mundo!", Palavra2));        //imprime 1
	
	printf("%d\n",strcmp(Palavra1, Palavra1));            //imprime 0
	printf("%d\n",strcmp(Palavra2, Palavra2));            //imprime 0
	
	printf("%d\n",strcmp("Ola Mundo!", "Ola Mundo!"));    //imprime 0
	printf("%d\n",strcmp("OLA MUNDO!", "OLA MUNDO!"));    //imprime 0
	
	printf("%d\n",strcmp(Palavra1, "Ola Mundo!"));        //imprime 0
	printf("%d\n",strcmp(Palavra2, "OLA MUNDO!"));        //imprime 0
	
	printf("%d\n",strcmp(Palavra1, "ola mundo"));         //imprime -1
	printf("%d\n",strcmp(Palavra2, "ola mundo"));         //imprime -1
	
	printf("%d\n",strcmp("Ola Mundo!", "ola mundo"));     //imprime -1
	printf("%d\n",strcmp("OLA MUNDO!", "ola mundo"));     //imprime -1
	
	printf("%d\n",strcmp("ola mundo", Palavra1));         //imprime 1
	printf("%d\n",strcmp("ola mundo", Palavra2));         //imprime 1
	
	printf("%d\n",strcmp("ola mundo", "Ola Mundo!"));     //imprime 1
	printf("%d\n",strcmp("ola mundo", "OLA MUNDO!"));     //imprime 1
	
	return 0;
}