#include <stdio.h>

int main() {
    
	int i, j, k;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 5; j++){
			for(k = 0; k < 5; k++){
                // para o programa se a condição for verdadeira
				if(i == 2 && j == 3 && k == 1){
					goto fim;
				}else{
					printf("[%d][%d][%d]\n", i, j, k);
				}
			}
		}
		puts("");
	}
	fim:
	
    return 0;
}
