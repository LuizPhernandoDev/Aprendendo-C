#include <stdio.h>

int main() {
	int idades[5];      
	float notas[10];    
	char vogais[5];
    int media[];
    
    printf("%d\n", sizeof(idades));    //imprime 20(5 x 4)
    printf("%d\n", sizeof(notas));     //imprime 40(10 x 4)
    printf("%d\n", sizeof(vogais));    //imprime 5(5 x 1)
    printf("%d\n", sizeof(media));    //imprime 5(5 x 1)
    
    return 0;
}