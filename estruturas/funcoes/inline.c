#include <stdio.h>

static inline void OlaMundo(void){
    printf("Ola, Mundo!\n");
}

int main(){
	/* o compilador nao ira procurar a funcao para executar ela, 
	ele substituira a mesma na chamada dela */
	OlaMundo();
	
    return 0;
}