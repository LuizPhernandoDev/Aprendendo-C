#include <stdio.h>
#include <string.h>

int main(){	
	char senha[10];
	int flag = 0;
	
	printf("Digite a senha: ");
	//ao digitar qualquer coisa maior que o limite da string ela invade a rede de memoria da flag e da como aprovado
	gets(senha);
	if(strcmp(senha, "1234") == 0){
		flag++;
	}
	if(flag){
		printf("Acesso confirmado!\n");
	}else{
		printf("Acesso negado!\n");
	}
	
	printf("Digite a senha: ");
	//optar por usar fgets
	fgets(senha);
	if(strcmp(senha, "1234") == 0){
		flag++;
	}
	if(flag){
		printf("Acesso confirmado!\n");
	}else{
		printf("Acesso negado!\n");
	}

	return 0;
}