#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b){
	int v1 = *(int *) a;
	int v2 = *(int *) b;
	
	return v1 - v2;
}

int main() {
	int n = 10, c = 30;
	int v[] = {1, 2, 4, 5, 7, 8, 9, 20, 30, 31};
	int *p = bsearch(&c, v, n, sizeof(int), cmp);
	
	if(p != NULL){
		printf("o elemento esta no vetor");
	}
	
    return 0;
}
