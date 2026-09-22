#include <stdio.h>
#include <string.h>

int main(){
    // stricmp compara duas strings ignorando maiúsculas/minúsculas.
    // Retorna 0 quando são exatamente iguais em conteúdo.

    char Palavra1[20] = "Ola Mundo!";
    char Palavra2[20] = "OLA MUNDO!";
    
    printf("%d\n", stricmp(Palavra1, Palavra2));            // imprime 0
    printf("%d\n", stricmp("Ola Mundo!", "OLA MUNDO!"));    // imprime 0
    
    printf("%d\n", stricmp(Palavra1, "OLA MUNDO!"));        // imprime 0
    printf("%d\n", stricmp("Ola Mundo!", Palavra2));        // imprime 0
    
    printf("%d\n", stricmp(Palavra1, Palavra1));            // imprime 0
    printf("%d\n", stricmp(Palavra2, Palavra2));            // imprime 0
    
    printf("%d\n", stricmp("Ola Mundo!", "Ola Mundo!"));    // imprime 0
    printf("%d\n", stricmp("OLA MUNDO!", "OLA MUNDO!"));    // imprime 0
    
    printf("%d\n", stricmp(Palavra1, "Ola Mundo!"));        // imprime 0
    printf("%d\n", stricmp(Palavra2, "OLA MUNDO!"));        // imprime 0
    
    printf("%d\n", stricmp(Palavra1, "ola mundo!"));        // imprime 0
    printf("%d\n", stricmp(Palavra2, "ola mundo!"));        // imprime 0
    
    printf("%d\n", stricmp("Ola Mundo!", "ola mundo!"));    // imprime 0
    printf("%d\n", stricmp("OLA MUNDO!", "ola mundo!"));    // imprime 0
    
    printf("%d\n", stricmp("ola mundo!", Palavra1));        // imprime 0
    printf("%d\n", stricmp("ola mundo!", Palavra2));        // imprime 0

    printf("%d\n", stricmp("ola mundo!", "Ola Mundo!"));    // imprime 0
    printf("%d\n", stricmp("ola mundo!", "OLA MUNDO!"));    // imprime 0
    
    return 0;
}
