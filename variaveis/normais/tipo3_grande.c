// diretiva para ignorar o limite de 8 Bytes para valores de ponto flutuantes pre definida no windows
#define __USE_MINGW_ANSI_STDIO 1

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	
	// valores inteiros
    // é redundante colocar o int na frente, pode ser abreviado por long ou long long
	long int Int; // têm difença do windows(4 bytes) para o linox(8 bytes)     
	long long int Int2;
	
	// valores de ponto flutuanes(com casas decimais)
	long double Double;
	
	printf("Tipos de variaveis | Especificadores | Tamanho (Bytes) |                  Intervalo\n");
	printf("                   |   de formato    |                 |\n");
	printf("-------------------|-----------------|-----------------|--------------------------------------------\n");
	printf("     long int      |       %%ld       |        %zu        |          %ld a %ld         \n", sizeof(long int), LONG_MIN, LONG_MAX);
	printf("   long long int   |       %%lld      |        %zu        | %lld a %lld            \n", sizeof(long long int), LLONG_MIN, LLONG_MAX);
	printf("    long double    |       %%Lf       |        %zu       |      %Le a %Le            \n", sizeof(long double) , -LDBL_MIN, LDBL_MAX);
	
  return 0;
}