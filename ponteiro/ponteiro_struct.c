#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
};

int main() {
    struct Aluno aluno1;
    struct Aluno *ptrAluno = &aluno1; 

    // Usando o ponteiro para modificar os dados (Operador Seta ->)
    sprintf(ptrAluno->nome, "Carlos");
    ptrAluno->idade = 20;

    // Acessando os dados
    printf("Nome: %s\n", ptrAluno->nome);
    printf("Idade: %d\n", ptrAluno->idade);

    return 0;
}