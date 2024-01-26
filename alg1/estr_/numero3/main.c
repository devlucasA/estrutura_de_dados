#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fila.c"
#include "Fila.h"

int main() {

    Fila *fila = criar();

    
    Aluno aluno1;
    aluno1.ra = 123;
    strncpy(aluno1.nome, "Ju", sizeof(aluno1.nome));
    strncpy(aluno1.curso, "Engenharia", sizeof(aluno1.curso));
    inserir(fila, aluno1);

    
    Aluno aluno2;
    aluno2.ra = 1234;
    strncpy(aluno2.nome, "Robson", sizeof(aluno2.nome));
    strncpy(aluno2.curso, "Ciencias da Computacao", sizeof(aluno2.curso));
    inserir(fila, aluno2);
    
    printf("Fila inicial:\n");
    mostrar(fila);
    
    Aluno alunor;
    remover(fila, &alunor);

    printf("{RA: %d, Nome: %s, Curso: %s}\n", alunor.ra, alunor.nome, alunor.curso);
    
    printf("\nApos a remocao:\n");

    
    mostrar(fila);

    limpar(fila);
    
    return 0;
}

