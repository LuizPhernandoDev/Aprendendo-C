#include <stdio.h>

int main(){
	
	// adapta dinamicamente à arquitetura do seu sistema
	// sistema 32-bits: size_t tem 32 bits (4 bytes)
	// sistema 64-bits: size_t tem 64 bits (8 bytes)
	size_t Char = sizeof(char);
	size_t Int = sizeof(int);
	size_t Float = sizeof(float);
	size_t Double = sizeof(double);
	size_t Size_t = sizeof(size_t);
	
	printf("Tipos de variaveis | Especificadores | Tamanho (Bytes) \n");
	printf("                   |   de formato    |                 \n");
	printf("-------------------|-----------------|-----------------\n");
	printf("       char        |     %%c ou %%s    |        %zu    \n", Char);
	printf("       int         |     %%d ou %%i    |        %zu    \n", Int);
	printf("      float        |        %%f       |        %zu     \n", Float);
	printf("      double       |       %%lf       |        %zu     \n", Double);
	printf("      size_t       |       %%zu       |        %zu     \n", Size_t);
	
  return 0;
}