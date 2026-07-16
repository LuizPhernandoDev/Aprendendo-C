#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <stdint.h>   
#include <inttypes.h> 

int main(){
    
    uint_least8_t Int1;
	uint_least16_t Int2;
	uint_least32_t Int3;
	uint_least64_t Int4;
    
    //usa o espaço da memoria o menor possivel, para otimizar armazenamento
    printf(" Tipos LEAST |   printf   |   scanf    | Tamanho |                  Intervalo\n");
    printf("  (stdint.h) | (inttypes) | (inttypes) | (Bytes) |\n");
    printf("-------------|------------|------------|---------|--------------------------------------------\n");
    printf("uint_least8_t| PRIuLEAST8 | SCNuLEAST8 |    %zu    | 0 a %" PRIuLEAST8 "\n", sizeof(uint_least8_t), UINT_LEAST8_MAX);
    printf("uint_least16_t|PRIuLEAST16| SCNuLEAST16|    %zu    | 0 a %" PRIuLEAST16 "\n", sizeof(uint_least16_t), UINT_LEAST16_MAX);
    printf("uint_least32_t|PRIuLEAST32| SCNuLEAST32|    %zu    | 0 a %" PRIuLEAST32 "\n", sizeof(uint_least32_t), UINT_LEAST32_MAX);
    printf("uint_least64_t|PRIuLEAST64| SCNuLEAST64|    %zu    | 0 a %" PRIuLEAST64 "\n", sizeof(uint_least64_t), UINT_LEAST64_MAX);
    
    return 0;
}