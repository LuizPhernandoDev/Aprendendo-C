#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <stdint.h> // biblioteca que adiciona tipos inteiros com tamanhos fixos
#include <inttypes.h> // biblioteca com especificadores de formato

int main(){
	
	uint8_t Int1;
	uint16_t Int2;
	uint32_t Int3;
	uint64_t Int4;
    
    printf(" Tipos Fixos |   printf   |   scanf    | Tamanho |         Intervalo\n");
    printf("  (stdint.h) | (inttypes) | (inttypes) | (Bytes) |\n");
    printf("-------------|------------|------------|---------|--------------------------\n");
    printf("  uint8_t    |   PRIu8    |   SCNu8    |    %zu    | 0 a %" PRIu8 "\n", sizeof(uint8_t), UINT8_MAX);
    printf(" uint16_t    |   PRIu16   |   SCNu16   |    %zu    | 0 a %" PRIu16 "\n", sizeof(uint16_t), UINT16_MAX);
    printf(" uint32_t    |   PRIu32   |   SCNu32   |    %zu    | 0 a %" PRIu32 "\n", sizeof(uint32_t), UINT32_MAX);
    printf(" uint64_t    |   PRIu64   |   SCNu64   |    %zu    | 0 a %" PRIu64 "\n", sizeof(uint64_t), UINT64_MAX);
    
    return 0;
}