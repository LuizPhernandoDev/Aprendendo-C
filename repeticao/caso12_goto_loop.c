#include <stdio.h>

int main(){
	
	int i=10;
	inicio:
	if(i>=10){
		printf("%d ", i);
		i++;
		goto inicio;
	}
	
    return 0;
}
