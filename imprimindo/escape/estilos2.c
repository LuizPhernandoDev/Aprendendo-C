#include <stdio.h>

int main() {
    /*
    O Modo de 256 Cores clásico (8-bit)
    
	Texto: \033[38;5;IDm
	Fundo: \033[48;5;IDm
	
	o ID vai de 0 a 255
	
	0 a 7: As 8 cores padrão do terminal (preto, vermelho, verde, etc.).
	8 a 15: As 8 cores padrão em modo "brilhante/claro".
	16 a 231: Um cubo de cores 6x6x6 que cobre uma enorme variedade de tons.
	232 a 255: Uma escala de cinza perfeita (do cinza bem escuro ao quase branco).
	*/
	
	// Texto na cor rosa choque (ID 198) com fundo cinza escuro (ID 235)
	printf("\033[38;5;198;48;5;235m Texto Estiloso! \033[0m\n");
	
	/*
    O Modo True Color (24-bit RGB)
    
	Texto: \033[38;2;R;G;Bm
	Fundo: \033[48;2;R;G;Bm
	
	o R, G e B vão de 0 a 255
	*/
	
	// Texto na cor "Azul Celeste" (R=135, G=206, B=250)
	printf("\033[38;2;135;206;250mTexto em Azul Celeste RGB!\033[0m\n");

	// Fundo em tom de "Ouro Velho" (R=218, G=165, B=32) com texto preto
	printf("\033[30;48;2;218;165;32mTexto preto com fundo dourado!\033[0m\n");
	
    return 0;
}
