#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    struct No* prox;
    int dado;
}No;

typedef struct{
    No* topo;
}Lista;

Lista* criarLista(){
    Lista *p = (Lista*) malloc(sizeof(Lista));

    if(p == NULL){
        exit(1);
    }

    p->topo = NULL;
    return p;
}

void inserir(Lista *p, int elemento){
    No *no = (No*) malloc(sizeof(No));

    if(no == NULL){
        exit(1);
    }

    no->dado = elemento;
    no->prox = p->topo;
    p->topo = no;
}

void buscar(Lista *lista, int num){
    No *aux;

    aux = lista->topo;

    while(aux && aux->dado != num){
        aux = aux->prox;
    }

    if(aux == NULL){
        printf("%d: nao existe\n", num);
    }
    else if(aux->prox == NULL){
        printf("%d: fim\n", num);
    }
    else if(aux->dado == lista->topo->dado){
        printf("%d: inicio\n", num);

    }
    else if(aux != NULL){
        printf("%d: existe\n", num);

    }

       
}

int main(){
    Lista *p = criarLista();
    int dado, sentinela;
    while(scanf("%d", &dado) && dado != 0){
		inserir(p, dado);
	}
    while(scanf("%d", &sentinela) && sentinela != 0){
        buscar(p, sentinela);
    }


}