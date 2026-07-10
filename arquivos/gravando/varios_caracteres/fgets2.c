#include <stdio.h>

int main() {
    FILE *f;
    
    f = fopen("texte2.txt", "r");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    char str[20];
    
    //não é necessario a função retornar algum valor para ser utilizada 
    fgets(str, sizeof(str), f);
    
    printf("%s", str);
    
    fclose(f);

    return 0;
}
