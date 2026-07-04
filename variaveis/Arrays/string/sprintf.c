#include <stdio.h>

int main() {
    int id_jogador = 5;
    char formato[5] = ".txt";
    char nome_arquivo[30]; // Variável que vai guardar o texto final

    // O sprintf vai montar o texto e salvar dentro de 'nome_arquivo'
    sprintf(nome_arquivo, "salvamento_player_%d%s", id_jogador, formato);
    printf("O arquivo foi gerado com o nome: %s\n", nome_arquivo);
    
    snprintf(nome_arquivo, sizeof(nome_arquivo), "salvamento_player_%d%s", id_jogador, formato);
    printf("O arquivo foi gerado com o nome: %s\n", nome_arquivo);

    return 0;
}