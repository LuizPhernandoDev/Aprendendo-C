#include <stdio.h>
#include <stdarg.h>

int soma_int(int n, ...){
	//inicializa as macros da biblioteca
	va_list lista;
	int i, s = 0;
	//usada para recuperar parametros adicionais passado na função
	va_start(lista,n);
	for(i = 1; i <= n; i++){
		//retorna o parametro atual da lista e passa para o proximo parametro
		s = s + va_arg(lista, int);
	}
	//macro para excluir a lista (desocupando a memoria)
	va_end(lista);
	return s;
}

int main (){
	int soma;
	
	soma = soma_int (2, 4, 5);
	printf ("Soma 2 parametros: %d\n", soma);
	
	soma = soma_int (3, 4, 5, 6);
	printf ("Soma 3 parametros: %d\n", soma);
	
	soma = soma_int (4, 4, 5, 6, 10);
	printf ("Soma 4 parametros: %d\n", soma);
	
	return 0;
}