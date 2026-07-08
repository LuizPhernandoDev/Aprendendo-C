#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("texte.txt", "r");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
    } else {
        printf("Arquivo aberto com sucesso!\n");
        // ... faz a leitura aqui ...
        
        fclose(f); // fechando o arquivo!
    }

    return 0;
}
