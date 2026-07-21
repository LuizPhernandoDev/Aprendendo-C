#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[20] = "13.5387khbe863bowbc";   //vai ler os numeros, os caracteres ira ignorar
    int i = atoi(str);
    long l = atol(str);
    long long ll = atoll(str);
    double d = atof(str);
    
    printf("%d\n", i);
    printf("%ld\n", l);
    printf("%lld\n", ll);
    printf("%lf\n", d);

    return 0;
}