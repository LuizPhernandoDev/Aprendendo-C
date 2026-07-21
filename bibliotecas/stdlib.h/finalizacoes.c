#include <stdio.h>
#include <stdlib.h>

void tchau(){
	printf("Ate mais programador\n");
}

int main() {	
	
	// a funcao sem parametros passado, sera excultada antes do programa finalizar 
	atexit(tchau);
	
	//finalizara o programa de forma anormal e imediata, disparando o sinal SIGABRT(não executa funções registradas com atexit)
	abort();
	
	//Termina o programa normalmente, limpando buffers de I/O e chamando rotinas de término
	exit(0);
	
	//Termina o programa imediatamente sem executar manipuladores de término ou limpar buffers(não executa funções registradas com atexit)
	_Exit(0);
	
    //status de sucesso = EXIT_SUCCES ou 0
	//status de falha = EXIT_FAILURE ou != 0
    return EXIT_SUCCESS;
}