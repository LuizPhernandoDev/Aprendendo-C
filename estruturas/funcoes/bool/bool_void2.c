#include <stdio.h>
#include <stdbool.h>

bool Verdade(void);

int main() {
	
    printf("Representacao de verdade: %d\n", Verdade());
    
    return 0;
}

bool Verdade(void){
    return 1;
}