#include <stdio.h>

int main() {
    FILE *f;
    
    //blocos de bytes são dados mais complexos (int, float, double , estruturas, arrays)
    //para esses tipos de dados, é recomendado guardar em arquivos binarios 
    f = fopen("texte3_1.txt", "wb");

    if (f == NULL) {
        printf("Erro: O arquivo não existe ou não pôde ser aberto.\n");
        return 1;
    }
    
    //o dado a ser guardado precisa ser um ponteiro, como vetores são ponteiros naturais não foi colocado 
    int total_gravado, vetor[5] = {1, 2, 3, 4, 5};
	total_gravado = fwrite(vetor, sizeof(int), 5, f);
	
	if(total_gravado != 5){
		printf("Erro na escrita do arquivo\n");
		return 1;
	}
    
    fclose(f);

    return 0;
}