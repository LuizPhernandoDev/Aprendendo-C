#include <stdio.h>

int main() {
    int N = 1, M = 1;
    
    printf("\033[%dA Move o cursor para cima N linhas\n", N);
    printf("\033[%dB Move o cursor para baixo N linhas\n", N);
    printf("\033[%dC Move o cursor para direita N colunas\n", N);
    printf("\033[%dD Move o cursor para esquerda N colunas\n", N);

    printf("\033[%dE Move o cursor para o início da linha N linhas abaixo\n", N);
    printf("\033[%dF Move o cursor para o início da linha N linhas acima\n", N);
    printf("\033[%dG Move o cursor para coluna específica N da linha atual\n", N);

    printf("\033[H   Move o cursor para a posição inicial (canto superior esquerdo)\n");
    printf("\033[%d;%dH Move o cursor exatamente para a Linha N, Coluna M\n", N, M);
    printf("\033[6n  Solicita a posição atual do cursor (via entrada padrão)\n");
    printf("\033[s   Salva a posição atual do cursor\n");
    printf("\033[u   Restaura o cursor para a última posição salva\n");

    printf("\033[0J Limpa do cursor até o fim da tela\n");
    printf("\033[1J Limpa do início da tela até o cursor\n");
    printf("\033[2J Limpa a tela inteira\n");
    printf("\033[3J Limpa a tela inteira e o histórico de rolagem (scrollback)\n");
    printf("\033[0K Limpa do cursor até o fim da linha atual\n");
    printf("\033[1K Limpa do início da linha atual até o cursor\n");
    printf("\033[2K Limpa a linha atual inteira\n");

    printf("\033[%dS Rola a tela para cima por N linhas\n", N);
    printf("\033[%dT Rola a tela para baixo por N linhas\n", N);

    return 0;
}