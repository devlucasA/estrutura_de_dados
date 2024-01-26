#include <stdio.h>
#include "Pilha.h"


typedef struct pilha {
    int topo;
    Livro livros[MAX];
}Pilha;

Pilha *criar() 
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));p->topo = 0;
    return p;
}


void limpar(Pilha *p) {
    free(p);
    p = NULL;
}

int pilhaVazia(Pilha *p) {
    if (p == NULL) return 2;
    if (p->topo == 0) return 0
    ;else return 1;
}


int pilhaCheia(Pilha *p) {
    if (p == NULL) return 2; 
    if (p->topo == MAX) return 0;
    else return 1;
}


int push(Pilha *p, Livro it){

    if (p == NULL) return 2;
    //if (pilhaCheia(p) == 0)return 1;
    p->livros[p->topo] =it;p->topo++;

    return 0;
}

int pop(Pilha *p, Livro *it){

    if (p == NULL) return 2;
    //if (pilhaVazia(p) == 0)return 1;
    *it = p->livros[p->topo-1];
    p->topo--;
    return 0;
}

void exibirPilha(Pilha *p) {
    if (pilhaVazia(p)) {
        printf("A pilha esta vazia.\n");
        return;
    }

    printf("Livros na pilha:\n");
    for (int i = p->topo; i >= 0; i--) {
        printf("Titulo: %s\n", p->livros[i].titulo);
        printf("Autor: %s\n", p->livros[i].autor);
        printf("Ano de Publicacao: %d\n", p->livros[i].anoPublicacao);
        printf("\n");
    }
}