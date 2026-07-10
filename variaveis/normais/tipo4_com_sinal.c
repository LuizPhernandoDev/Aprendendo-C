#include <stdio.h>
#include <limits.h>

int main(){
	
	// valores inteiros
	signed char Char;
	signed short Int1;
	signed int Int2;
	signed long Int3;
	signed long long Int4;
	
	/*
	é redundante colocar a variavel como signed,
	pois normalmente já é o pardrão, exeto na do tipo char,
	já que ela defini que ele será tratado como numeral ao invez de caracter 
	*/  
	printf("Tipos de variaveis | Especificadores | Tamanho (Bytes) |                  Intervalo\n");
	printf("                   |   de formato    |                 |\n");
	printf("-------------------|-----------------|-----------------|--------------------------------------------\n");
	printf("   signed char     |       %%hhd      |        %zu        |                 %d a %d  \n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
	printf("   signed short    |       %%hd       |        %zu        |               %d a %d         \n", sizeof(signed short), SHRT_MIN, SHRT_MAX);
	printf("    signed int     |     %%d ou %%i    |        %zu        |          %d a %d         \n", sizeof(signed int), INT_MIN, INT_MAX);
	printf("   signed long     |       %%ld       |        %zu        |          %ld a %ld         \n", sizeof(signed long), LONG_MIN, LONG_MAX);
	printf(" signed long long  |       %%lld      |        %zu        | %lld a %lld            \n", sizeof(signed long long), LLONG_MIN, LLONG_MAX);
	
  return 0;
}