#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned)
char PrimeiraAlfabeto(void);

int main(){
	
	printf("%c\n", PrimeiraAlfabeto(void));
	
    return 0;
}

char PrimeiraAlfabeto(void) {
    return 'A';
}