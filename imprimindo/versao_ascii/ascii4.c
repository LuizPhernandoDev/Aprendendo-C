#include <stdio.h>

int main(){
	
	char OlaMundo[] = { 79, 108, 97, 32, 109, 117, 110, 100, 111, 33, 10, 0};
	
	printf("%c%c%c%c%c%c%c%c%c%c%c", OlaMundo[0], OlaMundo[1], OlaMundo[2], OlaMundo[3], OlaMundo[4], OlaMundo[5], OlaMundo[6], OlaMundo[7], OlaMundo[8], OlaMundo[9], OlaMundo[10], OlaMundo[11]);
	
	return 0;
}