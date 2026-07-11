#include <stdio.h>

// Estrutura normal (sem campos de bits)
struct DataNormal {
    unsigned int dia;   // 4 bytes (32 bits)
    unsigned int mes;   // 4 bytes (32 bits)
    unsigned int ano;   // 4 bytes (32 bits)
}; // Total na memória: 12 bytes

// Estrutura otimizada (com campos de bits)
struct DataBits {
    unsigned int dia : 5;  // Ocupa apenas 5 bits
    unsigned int mes : 4;  // Ocupa apenas 4 bits
    unsigned int ano : 12; // Ocupa apenas 12 bits
}; // Total de bits usados: 21 bits.
   // Total na memória: 4 bytes (1 inteiro, devido ao alinhamento do compilador)

int main() {
    struct DataBits hoje;
    
    // Atribuindo valores
    hoje.dia = 11;
    hoje.mes = 7;
    hoje.ano = 2026;
    
    printf("Data: %d/%d/%d\n", hoje.dia, hoje.mes, hoje.ano);
    
    // Comparação de tamanho
    printf("Tamanho DataNormal: %zu bytes\n", sizeof(struct DataNormal));
    printf("Tamanho DataBits: %zu bytes\n", sizeof(struct DataBits));
    
    return 0;
}