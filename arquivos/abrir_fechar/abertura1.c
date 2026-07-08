#include <stdio.h>

int main() {
	FILE *f;
	
	//arqivos de texto
	f = fopen("texte.txt", "r");
	f = fopen("texte.txt", "w");
	f = fopen("texte.txt", "a");
	f = fopen("texte.txt", "r+");
	f = fopen("texte.txt", "w+");
	f = fopen("texte.txt", "a+");
	
	printf(" Tipos de abertura |       modo      |       Descrição        |    se nao existir   |     conteúdo antigo    \n");
	printf("-------------------|-----------------|------------------------|---------------------|------------------------\n");
	printf("                   |                 |     Abre o arquivo     |                     |                        \n");
	printf("      leirura      |        r        |  apenas para leitura.  | Retorna erro (NULL) |      Fica intacto.     \n");
	printf("                   |                 | O cursor é posicionado |                     |                        \n");
	printf("                   |                 |  no início do arquivo. |                     |                        \n");
	printf("-------------------|-----------------|------------------------|---------------------|------------------------\n");
	printf("                   |                 |     Abre o arquivo     |                     |                        \n");
	printf("      escrita      |        w        |  apenas para escrita.  |    cria um novo     |  É apagado (truncado). \n");
	printf("                   |                 | O cursor é posicionado |                     |   O arquivo é zerado.  \n");
	printf("                   |                 |  no início do arquivo. |                     |                        \n");
	printf("-------------------|-----------------|------------------------|---------------------|------------------------\n");
	printf("                   |                 |     Abre o arquivo     |                     |      Fica intacto.     \n");
	printf("      adicao       |        a        |    para anexar dados   |    cria um novo     |      Novos dados       \n");
	printf("                   |                 |      ao final dele     |                     |    vão para o final.   \n");
	printf("-------------------|-----------------|------------------------|---------------------|------------------------\n");
	printf("                   |                 |     Abre o arquivo     |                     | Fica intacto. mas você \n");
	printf(" leirura e escrita |        r+       |     para atualizar     | Retorna erro (NULL) |    pode sobrescrever   \n");
	printf("                   |                 |    (ler e escrever).   |                     |       partes dele.     \n");
	printf("-------------------|-----------------|------------------------|---------------------|------------------------\n");
	printf("                   |                 |  Abre o arquivo para   |                     |                        \n");
	printf(" leirura e escrita |        w+       |  atualizar mas zera o  |    cria um novo     |  É apagado (truncado). \n");
	printf("                   |                 |   arquivo primeiro.    |                     |   O arquivo é zerado.  \n");
	printf("-------------------|-----------------|------------------------|---------------------|------------------------\n");
	printf("                   |                 |    Abre para ler de    |                     |      Fica intacto.     \n");
	printf(" leirura e adicao  |        a+       |    qualquer parte,     |    cria um novo     |    A escrita ocorre    \n");
	printf("                   |                 |     mas só permite     |                     |    sempre no final.    \n");
	printf("                   |                 |    escrever no final   |                     |                        \n");
	
    return 0;
}