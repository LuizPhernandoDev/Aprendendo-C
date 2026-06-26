#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <stdint.h> // biblioteca que adiciona tipos inteiros com tamanhos fixos  
#include <inttypes.h> // biblioteca com especificadores de formato

int main(){
	
	int8_t Int1;
	int16_t Int2;
	int32_t Int3;
	int64_t Int4;
    
    printf(" Tipos Fixos |   printf   |   scanf    | Tamanho |                  Intervalo\n");
    printf("  (stdint.h) | (inttypes) | (inttypes) | (Bytes) |\n");
    printf("-------------|------------|------------|---------|--------------------------------------------\n");
    printf("   int8_t    |   PRId8    |   SCNd8    |    %zu    |                 %" PRId8 " a %" PRId8 "\n", sizeof(int8_t), INT8_MIN, INT8_MAX);
    printf("  int16_t    |   PRId16   |   SCNd16   |    %zu    |               %" PRId16 " a %" PRId16 "\n", sizeof(int16_t), INT16_MIN, INT16_MAX);
    printf("  int32_t    |   PRId32   |   SCNd32   |    %zu    |          %" PRId32 " a %" PRId32 "\n", sizeof(int32_t), INT32_MIN, INT32_MAX);
    printf("  int64_t    |   PRId64   |   SCNd64   |    %zu    | %" PRId64 " a %" PRId64 "\n", sizeof(int64_t), INT64_MIN, INT64_MAX);
    
    return 0;
}