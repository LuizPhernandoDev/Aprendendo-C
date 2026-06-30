#include <stdio.h>

int main() {
	int matriz[2][3] = {{10, 20, 30}, // Primeira linha (índice 0)
    					{40, 50, 60}  // Segunda linha (índice 1)
    								};
	printf("%d %d %d\n", matriz[0][0], matriz[0][1], matriz[0][2]);
	printf("%d %d %d\n", matriz[1][0], matriz[1][1], matriz[1][2]);

    return 0;
}