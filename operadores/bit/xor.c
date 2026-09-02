#include <stdio.h>

int main(){
	
	int x = 1, y = 0, a = 17, b = 80;
	
	//troca o valor das variaveis sem variavel alxiliar
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	
	printf("%d\n", x);         //inprime 0
	printf("%d\n", y);         //inprime 1
	
	printf("%d\n", 0 ^ 0);     //imprime 0
	printf("%d\n", 0 ^ 1);     //imprime 1
	printf("%d\n", 1 ^ 0);     //imprime 1 
	printf("%d\n", 1 ^ 1);     //imprime 1
	
	//transforma os dados em numero binario e compara com o xor cada unidade posicional e retorna o valor convertido
    printf("%d\n", a ^ b);     //imprime 65 
    printf("%d\n", a ^ 80);    //imprime 65 
    printf("%d\n", 17 ^ b);    //imprime 65 
    printf("%d\n", 17 ^ 80);   //imprime 65 
	printf("%c\n", a ^ b);     //imprime A 
    printf("%c\n", a ^ 80);    //imprime A 
    printf("%c\n", 17 ^ b);    //imprime A
	printf("%c\n", 17 ^ 80);   //imprime A 
	
	//assim ele compara qualquer valor, diferente de 0, como verdadeiro(1) 
	printf("%d\n", !17 != !80);   //imprime 0
	printf("%d\n", !17 != !0);    //imprime 1
	printf("%d\n", !0 != !80);    //imprime 1
	
	printf("%d\n", !0 != !0);     //imprime 0
	printf("%d\n", !0 != !1);     //imprime 1
	printf("%d\n", !1 != !0);     //imprime 1
	printf("%d\n", !1 != !1);     //imprime 0
	
	printf("%d\n", 0 ^ 0 ^ 0 ^ 0 ^ 1);     //imprime 1 
	printf("%d\n", 0 ^ 0 ^ 0 ^ 1 ^ 1);     //imprime 0 ==> somente uma das expressões tem que ser verdadeira
	
	//conta a quantidade  de caracteres do printf, tranforma esse numro em binario e compara com o xor cada unidade posicional e retorna o valor convertido
	printf("%d\n", 1 ^ printf("Verdadeiro\n"));     //imprime Verdadeiro e depois 10
	
	return 0;
}