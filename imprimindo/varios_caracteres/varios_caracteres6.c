#include <stdio.h>

int main(){
	
	char OlaMundo[][10] = {{"Ola "}, {"mundo!\n"}};
	
	printf("%s%s", OlaMundo[0], OlaMundo[1]);
	
	return 0;
}