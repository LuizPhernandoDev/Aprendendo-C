#include <stdio.h>
#include <stdlib.h>

int main(void) {
    system("cls");                    // Limpa a tela do terminal
	system("dir");                    // Lista arquivos e diretórios da pasta atual
	system("mkdir minha_pasta");      // Cria uma nova pasta
	system("del arquivo.txt");        // Deleta um arquivo
	system("type arquivo.txt");       // Exibe o conteúdo de um arquivo na tela
	system("pause");                  // Congela a tela exibindo "Pressione qualquer tecla..."
	system("color 0a");               // Muda a cor do terminal (dois especificadores = fundo e letra; 0-F)
	system("tasklist");               // Lista todos os processos em execução
	system("start https://github.com/LuizPhernandoDev/Aprendendo-C");// Abre uma URL no navegador padrão

    return 0;
}