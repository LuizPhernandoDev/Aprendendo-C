#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned)
int AnoAtual(void);

int main(){
	
	printf("%d\n", AnoAtual());
	
    return 0;
}

int AnoAtual(void) {
    return 2026;
}