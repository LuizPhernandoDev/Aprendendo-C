#include <stdio.h>

enum StatusPedido{
    PENDENTE = 1,      // Forçando o início em 1
    PAGO = 5,          // Saltando o valor para 5
    ENVIADO,           // O compilador continua a partir do último: recebe 6
    ENTREGUE           // Recebe 7
};

int main() {
    enum StatusPedido meuStatus = ENVIADO;

    printf("Codigo do status: %d\n", meuStatus); // Saída: 6

    switch(meuStatus) {
        case PENDENTE:
            printf("Aguardando o cliente pagar.\n");
            break;
        case PAGO:
            printf("Separando no estoque.\n");
            break;
        case ENVIADO:
            printf("O pacote esta a caminho!\n");
            break;
        case ENTREGUE:
            printf("Pedido concluido.\n");
            break;
        default:
            printf("Status desconhecido.\n");
    }

    return 0;
}