#include <stdio.h>

int main() {
    printf("\033[0mTexto normal\033[0m\n");
    printf("\033[1mTexto claro\033[0m\n");
    printf("\033[2mTexto escuro\033[0m\n");
    
    printf("\033[3mTexto em Itálico\033[0m\n");
    printf("\033[4mTexto sublinhado\033[0m\n");
    
    printf("\033[5mTexto piscando\033[0m\n");
    printf("\033[6mTexto piscando rapido\033[0m\n");
    
    printf("\033[7mTroca cor de fundo e texto\033[0m\n");
	printf("\033[8mTexto invisivel\033[0m\n");
	printf("\033[9mTexto cortado\033[0m\n");
	
	//fontes altenativas, terminais normais não consegue interpretar 
	printf("\033[10mTexto normal\033[0m\n");
	printf("\033[11mTexto normal\033[0m\n");
	printf("\033[12mTexto normal\033[0m\n");
	printf("\033[13mTexto normal\033[0m\n");
	printf("\033[14mTexto normal\033[0m\n");
    printf("\033[15mTexto normal\033[0m\n");
    printf("\033[16mTexto normal\033[0m\n");
    printf("\033[17mTexto normal\033[0m\n");
    printf("\033[18mTexto normal\033[0m\n");
    printf("\033[19mTexto normal\033[0m\n");
    printf("\033[20mTexto normal\033[0m\n");
    
    printf("\033[21mTexto sublinhado duplo\033[0m\n");
    
    printf("\033[22mDesliga o Negrito/Escuro\033[0m\n");
    printf("\033[23mDesliga o Itálico\033[0m\n");
    printf("\033[24mDesliga o Sublinhado\033[0m\n");
    printf("\033[25mDesliga o Piscar\033[0m\n");
    printf("\033[26mDesliga a Inversão de Cores\033[0m\n");
    printf("\033[27mDesliga o Texto invisivel\033[0m\n");
    printf("\033[28mDesliga o Texto Cortado\033[0m\n");
    
    printf("\033[29mTexto normal\033[0m\n");
    
    printf("\033[30mTexto preto\033[0m\n");
    printf("\033[31mTexto vermelho\033[0m\n");
    printf("\033[32mTexto verde\033[0m\n");
    printf("\033[33mTexto amarelo\033[0m\n");
    printf("\033[34mTexto azul escuro\033[0m\n");
    printf("\033[35mTexto roxo\033[0m\n");
    printf("\033[36mTexto azul claro\033[0m\n");
    printf("\033[37mTexto branco\033[0m\n");
    printf("\033[38mTexto em Modo de 256 Cores\033[0m\n");
    
    printf("\033[39mRedefine texto\033[0m\n");
    
    printf("\033[40mFundo preto\033[0m\n");
    printf("\033[41mFundo vermelho\033[0m\n");
    printf("\033[42mFundo verde\033[0m\n");
    printf("\033[43mFundo amarelo\033[0m\n");
    printf("\033[44mFundo azul escuro\033[0m\n");
    printf("\033[45mFundo roxo\033[0m\n");
    printf("\033[46mFundo azul claro\033[0m\n");
    printf("\033[47mFundo branco\033[0m\n");
    printf("\033[48mFundo em Modo de 256 Cores\033[0m\n");
    
    printf("\033[49mRedefine fundo\033[0m\n");
    
    printf("\033[50mTexto normal\033[0m\n");
    
    printf("\033[90mTexto preto brilhante\033[0m\n");
    printf("\033[91mTexto vermelho brilhante\033[0m\n");
    printf("\033[92mTexto verde brilhante\033[0m\n");
    printf("\033[93mTexto amarelo brilhante\033[0m\n");
    printf("\033[94mTexto azul escuro brilhante\033[0m\n");
    printf("\033[95mTexto roxo brilhante\033[0m\n");
    printf("\033[96mTexto azul claro brilhante\033[0m\n");
    printf("\033[97mTexto branco brilhante\033[0m\n");
    
    printf("\033[100mFundo preto brilhante\033[0m\n");
    printf("\033[101mFundo vermelho brilhante\033[0m\n");
    printf("\033[102mFundo verde brilhante\033[0m\n");
    printf("\033[103mFundo amarelo brilhante\033[0m\n");
    printf("\033[104mFundo azul escuro brilhante\033[0m\n");
    printf("\033[105mFundo roxo brilhante\033[0m\n");
    printf("\033[106mFundo azul claro brilhante\033[0m\n");
    printf("\033[107mFundo branco brilhante\033[0m\n");
    
    //é posivel usar varios estilos em uma so linha
    printf("\033[1;31;43mTexto em Negrito, Vermelho com Fundo Amarelo!\033[0m\n");

    return 0;
}