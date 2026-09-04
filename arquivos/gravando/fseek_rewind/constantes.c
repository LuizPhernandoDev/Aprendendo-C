#include <stdio.h>

int main() {
	
	//contantes de origin
    printf(" Tipos de abertura | significados | constante \n");
	printf("-------------------|--------------|-----------\n");
	printf("     SEEK-SET      |   inicio do  |     0     \n");
    printf("                   |    arquivo   |           \n");
	printf("-------------------|--------------|-----------\n");
	printf("     SEEK_CUR      |  ponto atual |     1     \n");
    printf("                   |  do arquivo  |           \n");
	printf("-------------------|--------------|-----------\n");
	printf("     SEEK_END      |    fim do    |     2     \n");
    printf("                   |    arquivo   |           \n");
	//pode ser substituidos por valores negativos para voltar no arquivo

    return 0;
}