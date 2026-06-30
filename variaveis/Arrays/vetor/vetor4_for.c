#include <stdio.h>

int main() {
	int valores[5], i;

    for(i = 0; i < 5; i++){
        valores[i] = (i + 1) * 10;
    }

    for(i = 0; i < 5; i++){
        printf("%d ", valores[i]);
    }
    printf("\n");
    
    return 0;
}