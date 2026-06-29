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
	é redundante colocar a variavel como signed,
	pois normalmente já é o pardrão, exeto na do tipo char,
	já que ela defini que ele será tratado como numeral ao invez de caracter 
	*/  
	printf("Tipos de variaveis | Especificadores | Tamanho (Bytes) |         Intervalo\n");
	printf("                   |   de formato    |                 |\n");
	printf("-------------------|-----------------|-----------------|--------------------------\n");
	printf("  unsigned char    |       %%hhu      |        %zu        | 0 a %u\n", sizeof(unsigned char), UCHAR_MAX);
	printf("  unsigned short   |       %%hu       |        %zu        | 0 a %u\n", sizeof(unsigned short), USHRT_MAX);
	printf("   unsigned int    |       %%u        |        %zu        | 0 a %u\n", sizeof(unsigned int), UINT_MAX);
	printf("  unsigned long    |       %%lu       |        %zu        | 0 a %lu\n", sizeof(unsigned long), ULONG_MAX);
	printf("unsigned long long |       %%llu      |        %zu        | 0 a %llu\n", sizeof(unsigned long long), ULLONG_MAX);
	
  return 0;
}