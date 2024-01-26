#ifndef Pilha_H_INCLUDED
#define Pilha_H_INCLUDED

#define MAX 100

typedef struct {
    char titulo[50];
    char autor[30];
    int anoPublicacao;
} Livro;


typedef struct pilha Pilha;


Pilha *criar();

void limpar(Pilha *p);
int push(Pilha *p, Livro it);
int pop(Pilha *p, Livro *it);
int pilhaVazia(Pilha *p);
int pilhaCheia(Pilha *p);
void exibirPilha(Pilha *p);

#endif