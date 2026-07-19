#include <stdio.h>

int main() {
    int *v;
    
    v = (int[3]){11, 22, 33};
    //v = (int[]){11, 22, 33};
    
    for(int i=0; i<3; i++){
		printf("%d ",v[i]);
	}
	printf("\n");

    return 0;
}