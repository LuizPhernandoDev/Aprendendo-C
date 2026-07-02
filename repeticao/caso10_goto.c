// não se mais usado esse comando
#include <stdio.h>

int main(){
	
	int i=1;
	// a tag "inicio" pode ser trocado qualquer um de sua preferencia
	inicio:
	if(i<=10){
		printf("%d ", i);
		i++;
		goto inicio;
	}
	
    return 0;
}
