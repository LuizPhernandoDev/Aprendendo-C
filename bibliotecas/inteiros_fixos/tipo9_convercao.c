#include <stdio.h>
#include <inttypes.h> // Contém as funções e a estrutura imaxdiv_t

int main() {
    
    printf("   Função    | Biblioteca |   Retorno   | Parâmetros / Descrição\n");
    printf("-------------|------------|-------------|--------------------------------------------------------------\n");

    printf(" imaxabs     | inttypes.h | intmax_t    | (intmax_t n)\n");
    printf("             |            |             | -> Retorna o valor absoluto do numero.\n");
    printf("-------------|------------|-------------|--------------------------------------------------------------\n");
    printf(" imaxdiv     | inttypes.h | imaxdiv_t   | (intmax_t numer, intmax_t denom)\n");
    printf("             |            |             | -> Retorna quociente (.quot) e resto (.rem) em uma struct.\n");
    printf("-------------|------------|-------------|--------------------------------------------------------------\n");
    printf(" strtoimax   | inttypes.h | intmax_t    | (const char *nptr, char **endptr, int base)\n");
    printf("             |            |             | -> Converte string para intmax_t (com sinal).\n");
    printf("-------------|------------|-------------|--------------------------------------------------------------\n");
    printf(" strtoumax   | inttypes.h | uintmax_t   | (const char *nptr, char **endptr, int base)\n");
    printf("             |            |             | -> Converte string para uintmax_t (sem sinal).\n");
    printf("-------------|------------|-------------|--------------------------------------------------------------\n");

    
    printf("\n--- Exemplo de Uso ---\n");
    
    //Convertendo uma string para o tipo máximo seguro
    const char *numero_texto = "9223372036854775800";
    char *sobra;
    intmax_t valor_convertido = strtoimax(numero_texto, &sobra, 10); // Base 10
    
    printf("String convertida: %" PRIdMAX "\n", valor_convertido);
    
    //Fazendo a divisão e pegando o resto de uma só vez (muito eficiente)
    imaxdiv_t resultado = imaxdiv(valor_convertido, 45);
    
    printf("Divisao por 45    -> Quociente: %" PRIdMAX " | Resto: %" PRIdMAX "\n", resultado.quot, resultado.rem);

    return 0;
}