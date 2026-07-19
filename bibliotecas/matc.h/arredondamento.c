#include <stdio.h>
#include <math.h>

int main() {
    double x = 3.1, y = 4.9;
    double a = 3.5, b = 0.5, c;
    
    printf("Arredonda o valor para cima, para o próximo número inteiro: %.1lf\n", ceil(x));
    printf("Arredonda o valor para baixo, para o inteiro anterior: %.1lf\n", floor(y));
    printf("Corta a parte decimal inteira, deixando apenas o inteiro: %.1lf\n", trunc(y));
    printf("Arredonda para o inteiro mais próximo (matemática comum): %.1lf\n", round(a));
    printf("Retorna o resto da divisão entre dois números decimais: %.1lf\n", fmod(a, b));
    
    double fracao = modf(a, &c);  // fiz fora do printf para ter certexa que o compilador iria executar a função primeiro
    
    printf("Separa e retorna a fração, gravando o inteiro no ponteiro c: decimal = %.1lf e inteiro = %.1lf\n", fracao, c);

    return 0;
}