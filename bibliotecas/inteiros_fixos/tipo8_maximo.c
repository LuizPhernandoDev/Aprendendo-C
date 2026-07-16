#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <stdint.h>   // Para os tipos de tamanho máximo e seus limites
#include <inttypes.h> // Para as macros PRIdMAX, PRIuMAX, etc.

int main() {
    
    printf(" Tipos Máximos |  printf   |   scanf   | Tamanho |                                      Intervalo\n");
    printf("  (stdint.h)   | (inttypes)| (inttypes)| (Bytes) |\n");
    printf("---------------|-----------|-----------|---------|----------------------------------------------------------------------\n");
    printf("   intmax_t    |  PRIdMAX  |  SCNdMAX  |    %zu    | %" PRIdMAX " a %" PRIdMAX "\n", sizeof(intmax_t), INTMAX_MIN, INTMAX_MAX);
    printf("  uintmax_t    |  PRIuMAX  |  SCNuMAX  |    %zu    | 0 a %" PRIuMAX "\n", sizeof(uintmax_t), UINTMAX_MAX);
    printf("  uintmax_t    |  PRIxMAX  |  SCNxMAX  |    %zu    | (Formato Hexadecimal) 0x0 a 0x%" PRIxMAX "\n", sizeof(uintmax_t), UINTMAX_MAX);
    
    return 0;
}