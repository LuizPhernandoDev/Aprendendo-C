#include <stdio.h>
#include <string.h>

int main(){
	char str[50] = "Exemplo de string em C";
	
	puts(str);
	
	//o tipo de dado é passada como ponteiro
	//substitui os 7 primeiros bytes da variavel pelo byte representado no meio(!)
	memset(str, '!', 7);
	
	puts(str);
	
	return 0;
}