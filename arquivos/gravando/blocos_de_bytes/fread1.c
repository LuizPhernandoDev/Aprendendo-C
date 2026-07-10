#include <stdio.h>

int main() {
    FILE *f;

    f = fopen("texte3_1.txt", "rb");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    int total_gravado, vetor[5] = {1, 2, 3, 4, 5};
	total_gravado = fread(vetor, sizeof(int), 5, f);
	
	if(total_gravado != 5){
		printf("Erro na escrita do arquivo\n");
		return 1;
	}
    
    fclose(f);
    printf("%d, %d, %d , %d, %d\n", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);

    return 0;
}