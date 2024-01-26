#include <stdio.h>
#include "Fila.h"


typedef struct no {
    Aluno valor;
    struct no *proximo;
}No;

typedef struct fila {
    No *inicio;
    No *fim;
    int qtd;
}Fila;


Fila *criar() {
    Fila *f = (Fila*)malloc(sizeof(Fila));f->qtd = 0;
    f->inicio = NULL;
    f->fim = NULL;
    return f;
}

void limpar(Fila *f) {
    if (f == NULL) return;
    while (filaVazia(f) != 0)remover(f,NULL);
    free(f);
    f = NULL;
}

int inserir(Fila *f, Aluno it){
    if (f == NULL) return 2;
    No *no = (No*)malloc(sizeof(No));
    no->valor = it;
    no->proximo = NULL;
    if (filaVazia(f) == 0) f->inicio=no;
    else f->fim->proximo = no;
    f->fim = no;
    f->qtd++;

    return 0;
}

int remover(Fila *f) {
    if (f == NULL) return 2;
    if (filaVazia(f) == 0) return 1;
    No *temp = f->inicio;
    f->inicio = temp->proximo;
    free(temp);
    if (f->inicio == NULL)
    f->fim = NULL;
    f->qtd--;
    return 0;
}

int filaVazia(Fila *f) {
    if (f == NULL) return 2;if (f->qtd == 0)
    return 0;
    else
    return 1;
}
int filaCheia(Fila *f) {
    return 1;
}