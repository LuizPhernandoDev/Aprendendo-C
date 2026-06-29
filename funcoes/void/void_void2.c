#include <stdio.h>

//quando o parametro é void ele pode ser vazio
void OlaMundo();

int main(){
	
	OlaMundo();
	
    return 0;
}

void OlaMundo() {
    printf("Ola, Mundo!\n");
}