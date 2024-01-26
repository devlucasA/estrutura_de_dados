#include <stdio.h>
#include <string.h>
#include "Pilha.h"


typedef struct no {
    Livro livros;
    struct no *prox;
}No;


typedef struct pilha {
    No *topo;
}Pilha;


Pilha *criar() {

    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;

}

void limpar(Pilha *p) {
    if (p == NULL) return;
    while (pilhaVazia(p) !=0)
    pop(p);
    free(p);
    p = NULL;

}

int push(Pilha *p, Livro it){

    if (p == NULL) return 2;
    No *no = (No *)malloc(sizeof(No));
    no->livros = it;
    no->prox = p->topo;
    p->topo = no;
    return 0;
}

int pop(Pilha *p, Livro *it){
    if (p == NULL) return 2;
    if (pilhaVazia(p) == 0)return 1;
    No *temp = p->topo;
    *it = temp->livros;
    p->topo = temp->prox;
    free(temp);
    return 0;
}


int pilhaVazia(Pilha *p) {

    if (p == NULL) return 2;
    if (p->topo == NULL)
    return 0;
    else
    return 1;
}

int pilhaCheia(Pilha *p) {
    return 1;
}

void mostrar(Pilha *p) {
    if (p != NULL) {
    printf("[");
    No *no = p->topo;
    while (no != NULL) {
        printf("");
        printf("");
        printf("");
    no = no->prox;
    }
    printf("]\n");
    }
}