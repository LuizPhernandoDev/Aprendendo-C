#include <stdio.h>
#include <stdbool.h>

int main(){
	
	if(true){
		printf("Condicao1 verdadeira\n");
	}else{
        printf("Condicao1 falsa\n");        //nao sera imprimido
    }

	if(false){
		printf("Condicao2 verdadeira\n");   //nao sera imprimido
	}else{
        printf("Condicao2 falsa\n");   
    }
	
	return 0;
}