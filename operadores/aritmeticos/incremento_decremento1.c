#include <stdio.h>

int main(){
	
	int dado = 10;
	printf("Dado antes do incremento: %d.\n", dado);
	
	dado++;
	printf("Dado depois do incremento: %d.\n", dado);
	
	++dado;
	printf("Dado depois do incremento: %d.\n", dado);
	
	dado--;
	printf("Dado depois do descremento %d.\n", dado);
	
	--dado;
	printf("Dado depois do descremento %d.\n", dado);
	
	dado+=3;
	printf("Dado depois do incremento em 3 unidades: %d.\n", dado);
	
	dado-=2;
	printf("Dado depois do descremento em 2 unidades: %d.\n", dado);
	
	dado*=10;
	printf("Dado depois de multiplicar por 10: %d.\n", dado);
	
	dado/=5;
	printf("Dado depois de divir por 5: %d.\n", dado);
	
	dado%=3;
	printf("resto da divisao por 3: %d.\n", dado);

	return 0;
}