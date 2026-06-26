#include <stdio.h>
#include <limits.h>
#include <float.h>
#include <math.h>

int main(){
	
	// valores inteiros
	char Char;  
	int Int;
	
	// valores de ponto flutuanes(com casas decimais)
	float Float;
	double Double;
	
	printf("Tipos de variaveis | Especificadores | Tamanho (Bytes) |            Intervalo\n");
	printf("                   |   de formato    |                 |\n");
	printf("-------------------|-----------------|-----------------|--------------------------------\n");
	printf("       char        |     %%c ou %%s    |        %zu        |           %d a %d  \n", sizeof(char), CHAR_MIN, CHAR_MAX);
	printf("       int         |     %%d ou %%i    |        %zu        |    %d a %d         \n", sizeof(int), INT_MIN, INT_MAX);
	printf("      float        |        %%f       |        %zu        | %e a %e            \n", sizeof(float), -FLT_MIN, FLT_MAX);
	printf("      double       |       %%lf       |        %zu        | %e a %e            \n", sizeof(double) , -DBL_MIN, DBL_MAX);
	
  return 0;
}