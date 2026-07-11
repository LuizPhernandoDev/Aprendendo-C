#include <stdio.h>
#include <signal.h> // Para lidar com os sinais do sistema (como o Ctrl+C)
#include <unistd.h> // Para usar a função sleep() e não travar o PC

// 1. Aqui entra o volatile!
// (Usamos sig_atomic_t porque é o tipo mais seguro recomendado em C para interrupções)
volatile sig_atomic_t executando = 1;

// 2. Esta função só é chamada magicamente pelo Sistema Operacional 
// quando alguém aperta Ctrl+C. O fluxo normal do programa nem sabe dela.
void tratar_sinal(int numero_sinal) {
    executando = 0; // Muda a variável para quebrar o loop do main()
}

int main() {
    // Avisa o sistema: "Se receber o sinal de interrupção (Ctrl+C = SIGINT), 
    // não feche o programa na mesma hora. Em vez disso, chame a função tratar_sinal."
    signal(SIGINT, tratar_sinal);

    printf("Programa rodando... Aperte Ctrl+C no terminal para parar.\n");

    // 3. O Loop Principal
    // Sem o 'volatile' lá em cima, o compilador poderia pensar: 
    // "Ninguém altera a variável 'executando' aqui dentro do main, 
    // então vou otimizar isso para um loop infinito".
    // COM o 'volatile', a CPU é obrigada a ler a RAM toda vez, percebendo a mudança.
    while (executando) {
        printf("Processando dados...\n");
        sleep(1); // Espera 1 segundo para não inundar a tela
    }

    // Se o loop quebrou, é porque o volatile funcionou e a CPU leu a mudança!
    printf("\nVocê apertou Ctrl+C! O loop parou e o programa encerrou de forma segura.\n");
    
    return 0;
}