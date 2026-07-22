#include <stdio.h>

enum escapes{
	//enumerações podem receber qualquer tipo de valor da tabela ASCII
    pulalinha = '\n',  
    retrocesso = '\b',
	tabulacao = '\t'      
};

int main() {
    enum escapes E = pulalinha;
    
    printf("teste %c de %c escrita\n", E, E);
    
    E = retrocesso;
    
    printf("teste %c de %c escrita\n", E, E);
    
    E = tabulacao;
    
    printf("teste %c de %c escrita\n", E, E);

    return 0;
}