#include <stdio.h>

int main() {
    FILE *f;
    
    f = fopen("texte2_1.txt", "r");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    char str1[10],str2[10];
    
    //ao chegar em um \n a função para de ler, sendo necessario colocar outra para ler a proxima linha
    fgets(str1, sizeof(str1), f);
    fgets(str2, sizeof(str2), f);
    printf("%s", str1);
    printf("%s", str2);
    
    fclose(f);

    return 0;
}
