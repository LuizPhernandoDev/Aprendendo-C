#include <stdio.h>
#include <string.h>

int main(){
	//define a verção do compilador como a c89 se nao estiver definida
	#ifndef __STDC_VERSION__
		printf ("Versao : C89\n") ;
	#else
		#if (__STDC_VERSION == 199409L)
			printf ("Versao: C94\n") ;
		#endif
		#if (__STDC_VERSION__ == 199901L)
			printf ("Versao: C99\n") ;
		#endif
	#endif
	
	return 0;
}