#include <stdio.h>

int main() {
	int tabela[3][4];   
	float notas[5][2]; 
    char outros[][10] = {{"Ola "}, {"Mundo!\n"}}; //é possivel não definir apenas o tamanho da primeira especificação

    printf("%d\n", sizeof(tabela));    //imprime 48(3 x 4 x 4)
    printf("%d\n", sizeof(notas));     //imprime 40(5 x 2 x 4)
    printf("%d\n", sizeof(outros));     //imprime 40(2 x 10 x 1)
    
    return 0;
}