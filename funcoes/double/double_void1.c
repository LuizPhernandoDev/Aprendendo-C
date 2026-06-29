#include <stdio.h>

double obterPi(void) {
    return 3.1415926535;
}

int main() {
    double raio = 2.0;
    double area = obterPi(void) * (raio * raio); 
    
    printf("A area eh: %.4f\n", area);
    
    return 0;
}