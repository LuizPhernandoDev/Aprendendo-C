#include <stdio.h>
#include <string.h>

int main(){
	//compara duas variaveis e/ou textos, retorna 1 se forem diferentes e 0 se forem iguas mas ignora se eles forem maiúsculo ou minúsculo

	char Palavra1[20] = "Ola Mundo!";
	char Palavra2[20] = "OLA MUNDO!";
	
	printf("%d\n",stircmp(Palavra1, Palavra2));            //imprime 0
	printf("%d\n",stircmp("Ola Mundo!", "OLA MUNDO!"));    //imprime 0
	
	printf("%d\n",stircmp(Palavra1, "OLA MUNDO!"));        //imprime 0
	printf("%d\n",stircmp("Ola Mundo!", Palavra2));        //imprime 0
	
	printf("%d\n",stircmp(Palavra1, Palavra1));            //imprime 0
	printf("%d\n",stircmp(Palavra2, Palavra2));            //imprime 0
	
	printf("%d\n",stircmp("Ola Mundo!", "Ola Mundo!"));    //imprime 0
	printf("%d\n",stircmp("OLA MUNDO!", "OLA MUNDO!"));    //imprime 0
	
	printf("%d\n",stircmp(Palavra1, "Ola Mundo!"));        //imprime 0
	printf("%d\n",stircmp(Palavra2, "OLA MUNDO!"));        //imprime 0
	
	printf("%d\n",stircmp(Palavra1, "ola mundo"));         //imprime 0
	printf("%d\n",stircmp(Palavra2, "ola mundo"));         //imprime 0
	
	printf("%d\n",stircmp("Ola Mundo!", "ola mundo"));     //imprime 0
	printf("%d\n",stircmp("OLA MUNDO!", "ola mundo"));     //imprime 0
	
	printf("%d\n",stircmp("ola mundo", Palavra1));         //imprime 0
	printf("%d\n",stircmp("ola mundo", Palavra2));         //imprime 0

	printf("%d\n",stircmp("ola mundo", "Ola Mundo!"));     //imprime 0
	printf("%d\n",stircmp("ola mundo", "OLA MUNDO!"));     //imprime 0
	
	return 0;
}