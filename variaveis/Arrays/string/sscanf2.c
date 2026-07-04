#include <stdio.h>

int main() {
    char texto_bruto[] = "ID: 4082 Nome: Roberto";
    int id, leu_quantos;
    char nome[30];
	
	leu_quantos = sscanf(texto_bruto, "ID: %d Nome: %s", &id, nome);
    
	if (leu_quantos == 2) {
	    puts("Sucesso! Consegui ler o nome e os pontos.");  //ira imprimir esse
	} else {
	    puts("Erro: O formato do texto estava baguncado.");
	}
	
	leu_quantos = sscanf(texto_bruto, "ID= %d Nome= %s", &id, nome);
    
	if (leu_quantos == 2) {
	    puts("Sucesso! Consegui ler o nome e os pontos.");
	} else {
	    puts("Erro: O formato do texto estava baguncado.");  //ira imprimir esse, pois o texto esta diferente do original
	}
	
    return 0;
}