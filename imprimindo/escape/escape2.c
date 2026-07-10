#include <stdio.h>

int main() {
    
    int N = 0, M = 0;
    printf("\033[%dA 	Move o cursor para cima N linhas", N);
    printf("\033[%dB 	Move o cursor para baixo N linhas", N);
    printf("\033[%dC 	Move o cursor para direita N colunas", N);
    printf("\033[%dD 	Move o cursor para esquerda N linhas", N);
    
    printf("\033[%dE 	Move o cursor para o início da linha N linhas abaixo", N);
    printf("\033[%dE 	Move o cursor para o início da linha N linhas atrás/acima", N);
    printf("\033[%dG 	Move o cursor para coluna específica N da linha atual", N);
    
    printf("\033[H		Move o cursor para a posição inicial (canto superior esquerdo da tela)");
    printf("\033[%d;%dH 	Move o cursor exatamente para a Linha N, Coluna M", N, M);
    printf("\033[6n 	Solicita a posição atual do cursor (o terminal responde via entrada padrão)");
    printf("\033[s 		Salva a posição atual do cursor na memória");
    printf("\033[u 		Restaura o cursor para a última posição salva");
    
    printf("\033[0J 	Limpa do cursor até o fim da tela");
    printf("\033[1J 	Limpa do início da tela até o cursor");
    printf("\033[2J 	Limpa a tela inteira (o que o comando clear ou cls faz)", N);
    printf("\033[3J 	Limpa a tela inteira e apaga todo o histórico de rolagem (scrollback)");
    printf("\033[0J 	Limpa do cursor até o fim da linha atual");
    printf("\033[1J 	Limpa do início da linha atual até o cursor");
    printf("\033[2J 	Limpa a linha atual inteira");
    
    printf("\033[%dT 	Rola a tela para baixo por N linhas (mostra o histórico de cima)", N);
    printf("\033[%dN 	Rola a tela para cima por N linhas (empurra o texto para cima, criando linhas em branco embaixo)", N);

    return 0;
}
