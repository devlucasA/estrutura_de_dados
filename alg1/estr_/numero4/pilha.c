#include <stdio.h>
#include <string.h>
#include "Pilha.h"


typedef struct pilha {
    int topo;
    Livro livros[MAX];
}Pilha;

Pilha *criar() 
{
    Pilha *p = (Pilha *)malloc(sizeof(Pilha));
    p->topo = 0;
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
    if (pilhaCheia(p) == 0)return 1;
    p->livros[p->topo] =it;
    p->topo++;

    return 0;
}

int pop(Pilha *p, Livro *it){

    if (p == NULL) return 2;
    if (pilhaVazia(p) == 0) return 1;
    *it = p->livros[p->topo-1];
    p->topo--;
    return 0;
}

void mostrar(Pilha *p) {
    if (p != NULL) {
    printf("MOSTRAR PILHA");
    printf("[");
    int i;
    for (i=0;i<p->topo;i++){
        printf(" {%s, ",p->livros[i].titulo);
        printf("%s, ",p->livros[i].autor);
        printf("%d}\n",p->livros[i].anoPublicacao);
        }
    printf("]\n");
    }
}