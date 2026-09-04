#include <stdio.h>

// Assumindo a struct Historco já definida

int obterQuantidadePartidas(const char *caminho) {
    FILE *f = fopen(caminho, "rb");
    if (f == NULL) return 0;

    // Move o ponteiro para o final do arquivo
    fseek(f, 0, SEEK_END);
    
    // Pega a posição atual em bytes (tamanho total do arquivo)
    long tamanhoBytes = ftell(f);
    
    fclose(f);

    // Calcula quantos registros do tipo Historco existem
    return (int)(tamanhoBytes / sizeof(Historco));
}

int main() {
    int total = obterQuantidadePartidas("dados/partida/Luiz.txt");
    printf("Você possui %d histórico(s) de partida registrado(s).\n", total);
    return 0;
}