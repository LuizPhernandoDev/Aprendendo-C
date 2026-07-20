#include <stdio.h>
#include <time.h>

void operacao_pesada() {
    long long somatorio = 0;
    for (long long i = 0; i < 500000000; i++) {
        somatorio += i;
    }
}

int main() {
    clock_t cpu_inicio, cpu_fim;
    time_t relogio_inicio, relogio_fim;

    // Captura o tempo inicial (CPU e Relógio de Parede)
    cpu_inicio = clock();
    time(&relogio_inicio);

    operacao_pesada();

    // Captura o tempo final
    cpu_fim = clock();
    time(&relogio_fim);

    long tique = (int)(cpu_fim - cpu_inicio);
    double tempo_cpu = (double) tique/ CLOCKS_PER_SEC;
    double tempo_relogio = difftime(relogio_fim, relogio_inicio);
	
	printf("Tiques: %d\n", tique);
    printf("Tempo de processamento (CPU): %f segundos\n", tempo_cpu);
    printf("Tempo total decorrido (Relógio): %f segundos\n", tempo_relogio);

    return 0;
}