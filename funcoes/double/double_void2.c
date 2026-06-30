#include <stdio.h>

//pode ser usado modificadores(short, long, unsigned)
double obterPi(void);

int main() {
    double raio = 2.0;
    double area = obterPi() * (raio * raio); 
    
    printf("A area eh: %.4f\n", area);
    
    return 0;
}

double obterPi(void) {
    return 3.1415926535;
}
