#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned)
//prototipo sem parametro
double obterPi();

int main() {
    double raio = 2.0;
    //ignora qualquer tipo de parametro de invocação da função
    double area = obterPi('A',67,16.5) * (raio * raio); 
    
    printf("A area eh: %.4f\n", area);
    
    return 0;
}
//função sem parametro
double obterPi() {
    return 3.1415926535;
}
