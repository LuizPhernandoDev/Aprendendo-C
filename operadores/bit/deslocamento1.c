#include <stdio.h>

int main() {
    unsigned int a = 5;  // 00000101
    unsigned int b = 40; // 00101000

    printf("a = %u\n", a);
    printf("a << 1 = %u (Multiplica por 2)\n", a << 1); // 10  00001010
    printf("a << 3 = %u (Multiplica por 8)\n", a << 3); // 40  00101000

    printf("\nb = %u\n", b);
    printf("b >> 1 = %u (Divide por 2)\n", b >> 1);     // 20  00010100
    printf("b >> 3 = %u (Divide por 8)\n", b >> 3);     // 5   00000101

    return 0;
}