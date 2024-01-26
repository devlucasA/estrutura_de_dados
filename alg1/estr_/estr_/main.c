
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pilha.c"
//#include "Pilha.h"



int main() {

    Pilha *pilhaDeLivros = criar();

    Livro livro1 = {"Harry Potter", "J.K. Rowling", 1997};
    Livro livro2 = {"1984", "George Orwell", 1949};
    Livro livro3 = {"O Senhor dos Anéis", "J.R.R. Tolkien", 1954};

    push(pilhaDeLivros, livro1);
    push(pilhaDeLivros, livro2);
    push(pilhaDeLivros, livro3);

    exibirPilha(pilhaDeLivros);

    Livro livroRemovido;
    pop(pilhaDeLivros, &livroRemovido);

    printf("\nLivro removido:\n");
    printf("Título: %s\n", livroRemovido.titulo);
    printf("Autor: %s\n", livroRemovido.autor);
    printf("Ano de Publicação: %d\n", livroRemovido.anoPublicacao);

    exibirPilha(pilhaDeLivros);

    return 0;
}