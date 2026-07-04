#include <stdio.h>

//prototipo sem parametro
void OlaMundo();

int main(){
	//ignora qualquer tipo de parametro de invocação da função
	OlaMundo('A',67,16.5);
	
    return 0;
}
//função sem parametro
void OlaMundo() {
    printf("Ola, Mundo!\n");
}