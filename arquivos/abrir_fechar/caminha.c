#include <stdio.h>

int main() {
	FILE *f;
	
	//caminho absoluto
	f = fopen("C:\\Users\\Luiz Phernando\\Documents\\estudos\\linguagem c\\git\\arquivos\\abrir_fechar\\texte.txt", "w");     //consegue chegar em a partir de qualquer arquivo
	
	//caminho relativo
	f = fopen("texte.txt", "w");   //so consegue acessar se ele estiver na mesma pasta 
	f = fopen("..\\arquivos\\abrir_fechar\\texte.txt", "w");     //volta uma pasta e procura a pasta arquivos para então acessar o texte.txt
	
    return 0;
}