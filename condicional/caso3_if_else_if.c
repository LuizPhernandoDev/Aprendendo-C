#include <stdio.h>
#include <stdbool.h>

int main(){
	
	if(true){
		printf("Condicao1 verdadeira\n");
	}else{
        if(true){
            printf("Condicao1 falsa\n");        //nao sera imprimido por mais que seja verdadeira
        }
        
    }

    if(false){
		printf("Condicao2 verdadeira\n");      //nao sera imprimido
	}else{
        if(true){
            printf("Condicao2 falsa\n");        
        }
        
    }

    //nao sera imprimido nada
    if(false){
		printf("Condicao3 verdadeira\n");      
	}else{
        if(false){
            printf("Condicao3 falsa\n");        
        }
        
    }
	
	return 0;
}