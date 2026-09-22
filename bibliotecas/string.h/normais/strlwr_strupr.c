#include <stdio.h>
#include <string.h>

int main ( )
{
    char Frase[40];
    int Conversao;
    printf("Frase: ");
    gets(Frase);
    printf("Converter para (1- Maiscula 2-Minuscula):");
    scanf("%d", &Conversao);
    if(Conversao==1)
        strupr(Frase);
    else
        strlwr(Frase);
    printf("\nFrase convertida: %s\n",Frase);
}