#include <stdio.h>

int main() {
	//pode ser usado tanto char quanto int
    char c;
    int C;

    printf("Digite uma palavra: ");
    
    //le dados do teclado e pega APENAS o primeiro caracter digitado 
    c = getchar(); 

    printf("A primeira letra que o getchar pegou foi: ");
    //imprime apenas um caracter
    putchar(c); 
    printf("\n");
    
    c = getchar(); 

    printf("A segunda letra que o getchar pegou foi: ");
    putchar(c); 
    printf("\n");
    
    return 0;
}