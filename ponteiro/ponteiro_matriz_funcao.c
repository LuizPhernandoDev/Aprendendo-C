#include <stdio.h>

void imprime(int m[3][4]){
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ", m[i][j]);
		}
		printf("\n");
	}
}
/*Em C, uma matriz não é exatamente um ponteiro, 
mas se degrada (converte implicitamente) 
para um ponteiro para o seu primeiro elemento na maioria das expressões*/
int main(){
	int mat[3][4] = {{1,2,3,4},{50,60,70,80},{91,101,111,121}};
	imprime(mat);
	
	return 0;
}