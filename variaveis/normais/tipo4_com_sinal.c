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
    NOTA: É redundante colocar a variável como signed nos inteiros,
    pois normalmente já é o padrão. A exceção mais notável é o 'char', 
    onde 'signed char' garante que ele será tratado como um pequeno número inteiro,
    dependendo da implementação do compilador.
    
    Importante: Tipos de ponto flutuante (float, double, long double) não aceitam
    o modificador 'signed' ou 'unsigned'. Eles são sempre sinalizados por padrão.
    */ 
    
	//constantes define que o numer seja tratado como definido
    printf("Tipos de variaveis | Especificadores | Tamanho (Bytes) | Constantes |                  Intervalo\n");
    printf("                   |   de formato    |                 |            |\n");
    printf("-------------------|-----------------|-----------------|------------|--------------------------------------------\n");
    printf("   signed char     |      %%hhd       |        %zu        |      -     |                 %d a %d  \n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
    printf("   signed short    |       %%hd       |        %zu        |      -     |               %d a %d         \n", sizeof(signed short), SHRT_MIN, SHRT_MAX);         
    printf("    signed int     |     %%d ou %%i    |        %zu        |      -     |          %d a %d         \n", sizeof(signed int), INT_MIN, INT_MAX);        
    printf("   signed long     |       %%ld       |        %zu        |      L     |          %ld a %ld         \n", sizeof(signed long), LONG_MIN, LONG_MAX);
    printf(" signed long long  |       %%lld      |        %zu        |     LL     | %lld a %lld            \n", sizeof(signed long long), LLONG_MIN, LLONG_MAX);
	
  return 0;
}
