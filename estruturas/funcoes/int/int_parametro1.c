#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned) e receber qualquer tipo de parametro(int, char, float, double) ate com modificadores
int Soma(int A, int B) {
    return A + B;
}

int main(){
	int Num1 = 17, Num2 = 34;
	
	printf("%d\n", Soma(Num1,Num2));
	
    return 0;
}