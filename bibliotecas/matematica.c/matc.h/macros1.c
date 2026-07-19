#define _USE_MATH_DEFINES // Ativa constantes como M_PI e M_E em todos os sistemas
#include <stdio.h>
#include <math.h>
#include <errno.h>    // Necessário para a variável errno e a macro EDOM

int main() {
    
    printf("Valor de Pi (M_PI): %f\n", M_PI);
    printf("Valor de Euler (M_E): %f\n\n", M_E);
    
    double carga_maxima = INFINITY;
    
    printf("Exibindo a macro INFINITY: %f\n", carga_maxima);
    
    //INFINITY em comparações diretas
    if (5000000.0 < carga_maxima) {
        printf("Qualquer numero finito e menor que INFINITY.\n\n");
    }

    double resultado_invalido = NAN;
    
    printf("Exibindo a macro NAN: %f\n", resultado_invalido);
    
    //NAN e o unico valor na computacao que NAO e igual a si mesmo
    if (resultado_invalido != resultado_invalido) {
        printf("Confirmado: NAN nao e igual a NAN.\n\n");
    }

    //HUGE_VAL (Valor Gigante para estoiro/overflow)
    double estouro = HUGE_VAL;
    
    printf("Exibindo HUGE_VAL: %f\n\n", estouro);
    //Geralmente o sistema exibe HUGE_VAL como 'inf' porque ele representa o maior double possivel.
    
    double resultado;
    double numero = -5.0;

    errno = 0; // Limpa a variável de erro antes da operação
    resultado = log(numero); // log() de número negativo não existe nos reais

    // Verifica se a variável errno foi alterada
    if (errno == EDOM) {
        printf("Erro: Argumento fora do dominio!\n");
    } else {
        printf("Resultado: %f\n", resultado);
    }

    return 0;
}