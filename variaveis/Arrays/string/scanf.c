#include <stdio.h>

int main(){
	char s[10];
	
	printf("Digite algo (scanf convencional): ");
	scanf("%s", s);
	fflush(stdin);
	
	printf("\nResultado: %s\n\n\n", s);
	
    //não estoura o vetor
	printf("Digite algo (scanf aprimorado): ");
	//não é necessario o especificador de string "s" no final, pois dessa forma o scanef entende
	scanf("%9[^\n]s", s);
	fflush(stdin);
	
	printf("\nResultado: %s\n\n\n", s);

    return 0;
}