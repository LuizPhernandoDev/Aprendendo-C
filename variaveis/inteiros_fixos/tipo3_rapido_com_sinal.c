#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <stdint.h>   
#include <inttypes.h> 

int main(){

    int_fast8_t Int1;
	int_fast16_t Int2;
	int_fast32_t Int3;
	int_fast64_t Int4;
    
    //usa o espaço da memoria que o computador consiga acessar e processar mais rapido o possivel
    printf(" Tipos FAST  |   printf   |   scanf    | Tamanho |                  Intervalo\n");
    printf("  (stdint.h) | (inttypes) | (inttypes) | (Bytes) |\n");
    printf("-------------|------------|------------|---------|--------------------------------------------\n");
    printf(" int_fast8_t | PRIdFAST8  | SCNdFAST8  |    %zu    | %" PRIdFAST8 " a %" PRIdFAST8 "\n", sizeof(int_fast8_t), INT_FAST8_MIN, INT_FAST8_MAX);
    printf(" int_fast16_t| PRIdFAST16 | SCNdFAST16 |    %zu    | %" PRIdFAST16 " a %" PRIdFAST16 "\n", sizeof(int_fast16_t), INT_FAST16_MIN, INT_FAST16_MAX);
    printf(" int_fast32_t| PRIdFAST32 | SCNdFAST32 |    %zu    | %" PRIdFAST32 " a %" PRIdFAST32 "\n", sizeof(int_fast32_t), INT_FAST32_MIN, INT_FAST32_MAX);  
    printf(" int_fast64_t| PRIdFAST64 | SCNdFAST64 |    %zu    | %" PRIdFAST64 " a %" PRIdFAST64 "\n", sizeof(int_fast64_t), INT_FAST64_MIN, INT_FAST64_MAX);
    
    return 0;
}