#include <stdio.h>

int main() {
    char Nota; 
    
    scanf("%c", &Nota);
    printf("Avaliando a nota: %c\n", Nota);

    switch (Nota) {
        case 'A':
        case 'a':
            printf("Excelente! Trabalho perfeito.\n");
            break;
            
        case 'B':
        case 'b':
            printf("Muito bom! Mas ainda pode melhorar um pouco.\n");
            break;
            
        case 'C':
        case 'c':
            printf("Suficiente. Você passou, mas estude mais da próxima vez.\n");
            break;
            
        case 'D':
        case 'd':
            printf("Abaixo da media. Precisa de reforco.\n");
            break;
            
        case 'F':
        case 'f':
            printf("Reprovado. Procure o professor.\n");
            break;
            
        default:
            printf("Nota invablida! Por favor, insira uma letra de A a F.\n");
            break;
    }

    return 0;
}