#include <stdio.h>

int main() {    
    int Num1 = 85;
    float Num2, Alxi = 5.345;
    
    Num2 = Num1;
        
    printf("Inteiro: %f\n",Num2);  //imprime 85.000000
    
    Num1 = Alxi;
    
    printf("Inteiro: %d\n",Num1);  //imprime 5  // perde a parte fracionada
    
    return 0;
}