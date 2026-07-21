#include <stdio.h>
#include <ctype.h>

int main() {

    printf("  Função   | descrição\n");
    printf("-----------|---------------------------------------------------------\n");
    printf("  isalnum  | Verifica se é alfanumérico (letra ou dígito 0-9)\n");
    printf("  isalpha  | Verifica se é letra do alfabeto (a-z, A-Z)\n");
    printf("  isblank  | Verifica se é espaço em branco curto (espaço ou \\t)\n");
    printf("  iscntrl  | Verifica se é um caractere de controle (não imprimível)\n");
    printf("  isdigit  | Verifica se é um dígito decimal ('0' a '9')\n");
    printf("  isgraph  | Verifica se tem representação gráfica (exceto espaço)\n");
    printf("  islower  | Verifica se é uma letra minúscula\n");
    printf("  isprint  | Verifica se é caractere imprimível (inclui espaço)\n");
    printf("  ispunct  | Verifica se é pontuação ou símbolo gráfico\n");
    printf("  isspace  | Verifica se é espaço em branco (espaço, \\n, \\t, etc.)\n");
    printf("  isupper  | Verifica se é uma letra maiúscula\n");
    printf(" isxdigit  | Verifica se é dígito hexadecimal (0-9, a-f, A-F)\n");
    printf("  tolower  | Converte uma letra maiúscula para minúscula\n");
    printf("  toupper  | Converte uma letra minúscula para maiúscula\n");
    printf("  isascii  | Verifica se pertence à tabela ASCII de 7 bits (0 a 127)\n");
    printf("  toascii  | Converte o valor para um caractere ASCII válido (7 bits)\n");

    return 0;
}