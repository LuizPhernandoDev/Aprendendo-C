#include <stdio.h>

int main() {
    double pi = 3.1415926535;
    int casas = 4;

    // Imprime 'pi' com 4 casas decimais dinamicamente
    printf("%.*f\n", casas, pi); // imprime: 3.1416

    casas = 2;
    printf("%.*f\n", casas, pi); // imprime: 3.14

    return 0;
}