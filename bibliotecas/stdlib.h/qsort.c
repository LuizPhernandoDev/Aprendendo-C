#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp_cres(const void *a, const void *b){
	int v1 = *(int *) a;
	int v2 = *(int *) b;
	
	if(v1<v2){
		return -1;
	}else if(v1>v2){
		return 1;
	}else{
		return 0;
	}
}

int cmp_decres(const void *a, const void *b){
	int v1 = *(int *) a;
	int v2 = *(int *) b;
	
	if(v1<v2){
		return 1;
	}else if(v1>v2){
		return -1;
	}else{
		return 0;
	}
}

typedef struct{
	char nome[20];
	int pontos, saldo;
}Equipe;

int cmp_equipes(const void *a, const void *b){
	Equipe t1 = *(Equipe *) a;
	Equipe t2 = *(Equipe *) b;
	
	int dp = t1.pontos - t2.pontos;
	int ds = t1.saldo - t2.saldo;
	int dn = strcmp(t1.nome, t2.nome);
	
	if(dp > 0 || (dp == 0 && ds > 0) || (dp == 0 && ds == 0 && dn <0)){
		return -1;
	}else if(dp == 0 && ds == 0 && dn == 0){
		return 0;
	}else{
		return 1;
	}
}

int main() {
	int n = 10;
	int v[] = {20, 10, 5, 8, 3, 1, 6, 12, 2, 7};
	
	qsort(v, n, sizeof(int), cmp_cres);
	for(int i = 0; i < n; i++){
		printf("%d ", v[i]);
	}
	printf("\n");
		
	qsort(v, n, sizeof(int), cmp_decres);
	for(int i = 0; i < n; i++){
		printf("%d ", v[i]);
	}
	printf ("\n\n");
	
	Equipe tabela[] = {
						{"Santo Andre", 13, 6}, {"Santa Cruz", 21, 14},
						{"Rosalpes", 15, 8}, {"Operario", 24, 14}, 
						{"Americano", 13, 6}, {"Barcelona", 21, 14}, 
						{"Tubaroes", 24, 20}, {"Salinas XII", 13, 9}, 
						{"Xavantes", 18, 16}, {"Jaguarense", 15, 7}
	};
	
	qsort(tabela, n, sizeof(Equipe), cmp_equipes);
	printf("%-15s %10s %10s\n", "Equipe", "Ponto", "Saldo");
	for(int i=0; i<n; i++){
		printf("%-15s %10d %10d\n", tabela[i].nome, tabela[i].pontos, tabela[i].saldo);
	}
	
    return 0;
}
