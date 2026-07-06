#include <stdio.h>

//em uma função não é necessário colocar o return, mas ele obriga a função a encerrar apois o return
void OlaMundo(){
    printf("Ola, Mundo!\n");
    return;   //pode se encerrar QUALQUER função sem nenhum retorno 
	printf("Tchau, Mundo!\n");   //não ser executado
}

int main(){
	OlaMundo();
	
    return 0;
}
