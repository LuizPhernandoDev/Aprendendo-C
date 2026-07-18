#include <stdio.h>
#include <math.h>

int main() {
	/*
	deve ser feita com qualquer tipo de ponto flutuante, 
	mas se não for double deve adicionar um sufixo
	f para float e l para long double
	*/
    double x = 3.0, y = 4.0;
    double a = 25.0, b = 27.0;
    double negativo = -4.5;
    
    printf("Eleva a base x ao expoente y: %.1lf\n", pow(x, y));
    printf("Calcula a raiz quadrada positiva de a: %.1lf\n", sqrt(a)); //se for negativo ela retorna NaN
    printf("Calcula a raiz cúbica pura de b: %.1lf\n", cbrt(b));
    printf("Calcula a hipotenusa de um triângulo sem risco de overflow: %.1lf\n", hypot(x, y));
    printf("Retorna o valor absoluto positivo de um número: %.1lf\n", fabs(negativo));
    printf("Retorna o maior valor numérico entre x e y: %.1lf\n", fmax(x, y));
    printf("Retorna o menor valor numérico entre x e y: %.1lf\n", fmin(x, y));
    printf("Retorna a diferença positiva entre x e y (ou 0 se x < y): %.1lf\n", fdim(y, x));

    return 0;
}