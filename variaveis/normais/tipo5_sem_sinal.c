#include <stdio.h>
#include <limits.h>

int main(){
	
	// valores inteiros
	unsigned char Char;
	unsigned short Int1;
	unsigned int Int2;
	unsigned long Int3;
	unsigned long long Int4;
	
	/*
    NOTA: O modificador 'unsigned' remove a capacidade de armazenar números negativos.
    Como o bit de sinal não é mais necessário, ele é usado para representar valor,
    dobrando o limite máximo positivo da variável.
    */ 

	//constantes define que o numer seja tratado como definido
    printf("Tipos de variaveis | Especificadores | Tamanho (Bytes) | Constantes |         Intervalo\n");
    printf("                   |   de formato    |                 |            |\n");
    printf("-------------------|-----------------|-----------------|------------|--------------------------------\n");
    printf("  unsigned char    |      %%hhu       |        %zu        |      -     | 0 a %u\n", sizeof(unsigned char), UCHAR_MAX);
    printf("  unsigned short   |       %%hu       |        %zu        |      -     | 0 a %u\n", sizeof(unsigned short), USHRT_MAX);
    printf("   unsigned int    |       %%u        |        %zu        |      U     | 0 a %u\n", sizeof(unsigned int), UINT_MAX);
    printf("  unsigned long    |      %%lu       |        %zu        |     UL     | 0 a %lu\n", sizeof(unsigned long), ULONG_MAX);
    printf("unsigned long long |      %%llu      |        %zu        |    ULL     | 0 a %llu\n", sizeof(unsigned long long), ULLONG_MAX);
	
  return 0;
}