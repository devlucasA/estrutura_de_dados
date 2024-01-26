#include "Fila.h"


typedef struct fila {

    int inicio,fim,qtd;
    Aluno valores[MAX];

}Fila;

Fila *criar() {
    Fila *f = (Fila*)malloc(sizeof(Fila));
    f->inicio = 0;
    f->fim = 0;
    f->qtd = 0;
    return f;
}
void limpar(Fila *f) {
    free(f);
    f = NULL;
}

int filaCheia(Fila *f) {
    return f->qtd == MAX;
}

int inserir(Fila *f, Aluno it){

    if (f == NULL) return 2;
    //if (filaCheia(f) == 0) return 1;
    f->valores[f->fim] = it;
    f->fim = (f->fim+1)%MAX;
    f->qtd++;

return 0;
}



int filaVazia(Fila *f) {
    return f->qtd == 0;
}


int remover(Fila *f, Aluno *it){

    if (f == NULL) return 2;
    //if (filaVazia(f) == 0) return 1;
    *it = f->valores[f->inicio];
    f->qtd--;
    f->inicio = (f->inicio+1)%MAX;

    return 0;
}


void mostrar(Fila *f) {
    if (f != NULL) {
        printf("[\n");
        int i = f->inicio;
        int q = f->qtd;
        while (q > 0) {
            printf(" {RA: %d, Nome: %s, Curso: %s}\n", f->valores[i].ra, f->valores[i].nome, f->valores[i].curso);
            i = (i + 1) % MAX;
            q--;
        }
        printf("]\n");
    }
}
