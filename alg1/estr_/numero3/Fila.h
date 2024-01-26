#ifndef FILA_H_INCLUDED
#define FILA_H_INCLUDED

#define MAX 100

typedef struct {
    int ra;
    char nome[30];
    char curso[30];
} Aluno;


typedef struct fila Fila;


Fila *criar();

void limpar(Fila *f);
int inserir(Fila *f, Aluno it);
int remover(Fila *f, Aluno *it);
int filaVazia(Fila *f);
int filaCheia(Fila *f);


#endif 
