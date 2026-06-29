#include <stdio.h>

double obterPi(void);

int main() {
    double raio = 2.0;
    double area = obterPi(void) * (raio * raio); 
    
    printf("A area eh: %.4f\n", area);
    
    return 0;
}

double obterPi(void) {
    return 3.1415926535;
}
