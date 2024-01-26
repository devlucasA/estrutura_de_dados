
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.c"
#include "Pilha.h"



int main() {

    Pilha *p = criar();

    Livro livro1 = {"BERSERK", "Kentaro Miura", 1989};
    Livro livro2 = {"GAME OF THRONES", "David Benioff", 2011};
    Livro jogo3 = {"ELDEN RING", "Hidetaka Miyazaki", 2024};

    push(p, livro1);
    push(p, livro2);
    push(p, jogo3);

    mostrar(p);

    
    Livro jogoRemovido;
    pop(p, &jogoRemovido);

    printf("\nREMOCAO\n");
    printf("Titulo: %s\n", jogoRemovido.titulo);
    printf("Autor: %s\n", jogoRemovido.autor);
    printf("Ano de Publicacao: %d\n", jogoRemovido.anoPublicacao);

    printf("\n");

    mostrar(p);
    
    return 0;
}