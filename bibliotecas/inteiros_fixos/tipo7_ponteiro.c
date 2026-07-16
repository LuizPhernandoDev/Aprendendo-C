#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <stdint.h>   // Para os tipos de ponteiros e seus limites
#include <inttypes.h> // Para as macros PRIdPTR, PRIuPTR, etc.

int main() {
    
    intptr_t ptr_signed;
    uintptr_t ptr_unsigned;
    
    printf(" Tipos Ponteiros |  printf   |   scanf   | Tamanho |                                      Intervalo\n");
    printf("   (stdint.h)    | (inttypes)| (inttypes)| (Bytes) |\n");
    printf("-----------------|-----------|-----------|---------|----------------------------------------------------------------\n");
    printf("    intptr_t     |  PRIdPTR  |  SCNdPTR  |    %zu    | %" PRIdPTR " a %" PRIdPTR "\n", sizeof(intptr_t), INTPTR_MIN, INTPTR_MAX);
    printf("   uintptr_t     |  PRIuPTR  |  SCNuPTR  |    %zu    | 0 a %" PRIuPTR "\n", sizeof(uintptr_t), UINTPTR_MAX);
    printf("   uintptr_t     |  PRIxPTR  |  SCNxPTR  |    %zu    | (Formato Hexadecimal) 0x0 a 0x%" PRIxPTR "\n", sizeof(uintptr_t), UINTPTR_MAX);
    
    return 0;
}