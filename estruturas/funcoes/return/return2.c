#include <stdio.h>

int maior(int x, int y){
    if(x > y){
    	return x;   // uma função pode ter mais de um return
	}else{
		return y;
	}
}

int main(){
	int x = 10, y = 5;
	
	printf("O maior: %d", maior(x, y));
	
    return 0;
}
