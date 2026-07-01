#include <stdio.h>

enum StatusDaFase {
    NAO_INICIADA,
    EM_ANDAMENTO,
    CONCLUIDA
};

int main() {
    enum StatusDaFase faseAtual = EM_ANDAMENTO;
    enum StatusDaFase *ptrStatus = &faseAtual;

    // Acessando o valor usando desreferencia normal (*)
    printf("Status atual: %d\n", *ptrStatus);

    // Mudando o valor pelo ponteiro
    *ptrStatus = CONCLUIDA;
    printf("Novo status: %d\n", faseAtual); // Vai imprimir 2 (CONCLUIDA)

    return 0;
}