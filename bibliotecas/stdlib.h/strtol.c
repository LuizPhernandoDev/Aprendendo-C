#define __USE_MINGW_ANSI_STDIO 1
#include <stdio.h>
#include <stdlib.h>

int main() {
	char str1[] = "13038678 -978692846";
	char str2[] = "89727263 9862983650505088";
	char str3[] = "143.9663 0.89718787585187 8754.896734758715815";
	char *p = NULL;
	
    long l = strtol(str1, &p, 10);
    long long ll = strtol(p, &p, 10);
    
    unsigned long ul = strtoul(str2, &p, 16);
    unsigned long long ull = strtoull(p, &p, 16);
    
    float f = strtof(str3, &p);
	double d = strtod(p, &p);
	long double ld = strtold(p, &p);
    
    printf("%ld\n", l);
    printf("%lld\n", ll);
    printf("%ul\n", ul);
    printf("%ull\n", ull);
    
    printf("%f\n", f);
    printf("%lf\n", d);
    printf("%Lf\n", ld);


    return 0;
}