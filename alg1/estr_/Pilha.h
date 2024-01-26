#ifndef Pilha_H_INCLUDED
#define Pilha_H_INCLUDED

typedef struct {
    char titulo[50];
    char autor[30];
    int anoPublicacao;
} Livro;


typedef struct pilha Pilha;


Pilha *criar();

void limpar(Pilha *p);
int inserir(Pilha *p, Livro it);
int remover(Pilha *p, Livro *it);
int pilaVazia(Pilha *p);
int pilaCheia(Pilha *p);

#endif