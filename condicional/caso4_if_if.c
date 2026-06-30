#include <stdio.h>
#include <stdbool.h>

int main(){
	
    //so ira entrar no bloco da condicional se os dois forem verdadeiros
	if(true){
		if(true){
            printf("Condicao1 verdadeira\n");        
        }
	}
	
	if(true){
		if(false){
            printf("Condicao2 verdadeira\n");        //nao sera imprimido
        }
	}
	
	if(false){
		if(true){
            printf("Condicao3 verdadeira\n");        //nao sera imprimido
        }
	}
	
	if(false){
		if(false){
            printf("Condicao4 verdadeira\n");        //nao sera imprimido
        }
	}
	
	return 0;
}