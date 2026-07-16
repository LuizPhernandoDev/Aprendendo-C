#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <stdint.h>   
#include <inttypes.h> 

int main(){
    
    int_least8_t Int1;
	int_least16_t Int2;
	int_least32_t Int3;
	int_least64_t Int4;
    
    //usa o espaço da memoria o menor possivel, para otimizar armazenamento
    printf(" Tipos LEAST |   printf   |   scanf    | Tamanho |                  Intervalo\n");
    printf("  (stdint.h) | (inttypes) | (inttypes) | (Bytes) |\n");
    printf("-------------|------------|------------|---------|--------------------------------------------\n");
    printf(" int_least8_t| PRIdLEAST8 | SCNdLEAST8 |    %zu    | %" PRIdLEAST8 " a %" PRIdLEAST8 "\n", sizeof(int_least8_t), INT_LEAST8_MIN, INT_LEAST8_MAX);
    printf("int_least16_t| PRIdLEAST16| SCNdLEAST16|    %zu    | %" PRIdLEAST16 " a %" PRIdLEAST16 "\n", sizeof(int_least16_t), INT_LEAST16_MIN, INT_LEAST16_MAX);
    printf("int_least32_t| PRIdLEAST32| SCNdLEAST32|    %zu    | %" PRIdLEAST32 " a %" PRIdLEAST32 "\n", sizeof(int_least32_t), INT_LEAST32_MIN, INT_LEAST32_MAX);
    printf("int_least64_t| PRIdLEAST64| SCNdLEAST64|    %zu    | %" PRIdLEAST64 " a %" PRIdLEAST64 "\n", sizeof(int_least64_t), INT_LEAST64_MIN, INT_LEAST64_MAX);
    
    return 0;
}