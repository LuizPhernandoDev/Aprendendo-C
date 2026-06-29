#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <stdint.h>   
#include <inttypes.h> 

int main(){
	
	uint_fast8_t Int1;
	uint_fast16_t Int2;
	uint_fast32_t Int3;
	uint_fast64_t Int4;
    
    //usa o espaço da memoria que o computador consiga acessar e processar mais rapido o possivel
    printf(" Tipos FAST  |   printf   |   scanf    | Tamanho |                  Intervalo\n");
    printf("  (stdint.h) | (inttypes) | (inttypes) | (Bytes) |\n");
    printf("-------------|------------|------------|---------|--------------------------------------------\n");
    printf(" uint_fast8_t| PRIuFAST8  | SCNuFAST8  |    %zu    | 0 a %" PRIuFAST8 "\n", sizeof(uint_fast8_t), UINT_FAST8_MAX);
    printf("uint_fast16_t| PRIuFAST16 | SCNuFAST16 |    %zu    | 0 a %" PRIuFAST16 "\n", sizeof(uint_fast16_t), UINT_FAST16_MAX);
    printf("uint_fast32_t| PRIuFAST32 | SCNuFAST32 |    %zu    | 0 a %" PRIuFAST32 "\n", sizeof(uint_fast32_t), UINT_FAST32_MAX);
    printf("uint_fast64_t| PRIuFAST64 | SCNuFAST64 |    %zu    | 0 a %" PRIuFAST64 "\n", sizeof(uint_fast64_t), UINT_FAST64_MAX);
    
    return 0;
}