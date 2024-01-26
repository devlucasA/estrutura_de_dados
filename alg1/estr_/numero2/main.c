#include <stdio.h>
#include <stdlib.h>


struct Produto{
    int codigo;
    float preco;
    int quantidade;
};

void cadastro( struct Produto *p){

    printf("\n \n Faca o cadastro do Produto \n\n");

    printf("Digite o codigo do produto: ");
    scanf("%d", &p->codigo);

    printf("Digite a quantidade do produto: ");
    scanf("%d", &p->quantidade);

    printf("Digite o preco do produto: ");
    scanf("%f", &p->preco);

    printf("\n");
}


void mostrar(struct Produto *p){

    printf(" codigo: %d | quantidade: %d | preco: %.2f \n \n",p->codigo, p->quantidade,p->preco );



}

int main()
{
    struct Produto p;
    int op;
    int op2;

    cadastro(&p);
    mostrar(&p);

    printf("Informe o novo preco do produto: \n \n");
    scanf("%f", &p.preco);

    mostrar(&p);

    printf("Realize uma venda: ");

    printf("Digite 1 para realizar a compra: ");
    scanf("%d", &op);
     printf("Digite a quantidade que deseja comprar: ");
     scanf("%d", &op2);

     //int res = p.quantidade;

    if(op == 1){

        if( op2 <= p.quantidade){
            p.quantidade -= op2;
        }
        else{
        printf("Nao foi possivel\n");
        exit(1);
        }
    }
    mostrar(&p);

    

    return 0;
}