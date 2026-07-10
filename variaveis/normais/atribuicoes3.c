#include <stdio.h>

int main() {    
    char Num1 = 'A';
    int Num2, Alxi = 100;
    
    Num2 = Num1;
        
    printf("Inteiro: %d\n",Num1);  //imprime 65 // transforma em codigo ascii
    
    Num1 = Alxi;
    
    printf("Inteiro: %c\n",Num1);  //imprime d  // transforma em codigo ascii


    char Letra = 'A';
        
    printf("Inteiro: %d\n",Letra);  //imprime 65 // transforma em codigo ascii
    
    printf("Inteiro: %c\n",Letra);  //imprime A  // transforma em codigo ascii
    
    return 0;
}