#include <stdio.h>
#include <stdbool.h>

int main(){
	
	(true)?
		printf("X é maior\n")
		:
		printf("Y é maior\n")
		;
	(false)?
		(printf("X é maior"), printf(" e o Y é menor\n"))
		:
		(printf("Y é maior"), printf(" e o X é menor\n"))
		;
		
	return 0;
}
