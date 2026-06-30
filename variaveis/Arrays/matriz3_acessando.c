#include <stdio.h>

int main() {
	int matriz[2][3] = {{10, 20, 30}, {40, 50, 60}};
	int Valor = matriz[1][2]; // Acessa a linha 1, coluna 2 
	
	printf("%d\n", Valor);

	matriz[0][0] = 99; // Altera o primeiro elemento da primeira linha para 99

	printf("%d %d %d\n", matriz[0][0], matriz[0][1], matriz[0][2]);
	printf("%d %d %d\n", matriz[1][0], matriz[1][1], matriz[1][2]);
	
    return 0;
}