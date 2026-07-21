#include <stdio.h>
#include <stdlib.h>

int main() {
	int i = -5;
	long l = -5L;
	long long ll = -5LL;
	
	printf("Absoluto de int: %d\n", abs(i));
	printf("Absoluto de long: %ld\n", labs(l));
	printf("Absoluto de long long: %lld\n", llabs(ll));
	
	int v1 = 548;
	long v2 = 548L;
	long long v3 = 548LL;
	
	div_t div1 = div(v1, abs(i));
	ldiv_t div2 = ldiv(v2, abs(l));
	lldiv_t div3 = lldiv(v3, abs(ll));
	
	printf("%d / %d = %d * %d + %d\n", v1, abs(i), abs(i), div1.quot, div1.rem);
	printf("%ld / %ld = %ld * %ld + %ld\n", v2, abs(l), abs(l), div2.quot, div2.rem);
	printf("%lld / %lld = %lld * %lld + %lld\n", v3, llabs(ll), llabs(ll), div3.quot, div3.rem);
	
    return 0;
}
