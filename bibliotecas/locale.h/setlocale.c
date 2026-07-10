#include <stdio.h>
#include <locale.h>

int main() {
	/*
	PRIMEIRO PARAMETRO
	- LC ALL: Afeta todo o local da linguagem
	- LC COLATE: Afeta as funções "strcoll ()" e "strxfrm()" que trabalham com "strings"
	- LC_CTYPE: Afeta as funções que manipulam "caracteres"
	- LC MONETARY: Afeta a informação de "formatação monetária"
	- LC NUMERIC: Afeta a "formatação numérica" da localidade "C"
	- LC_TIME: Afeta a função de formatação de "data e hora strftime ()"
	
	SEGUNDO PARAMETRO
	"local" é um valor específico do sistema. Porém, dois valores sempre existirão:
	- "C": para a localidade mínima da linguagem
	- "": localidade-padrão do sistema
	*/
	
	//função para aceitar acentos e outros caracteres especiais normais da lingua portuguesa
	setlocale(LC_ALL, "portuguese");
	
    return 0;
}