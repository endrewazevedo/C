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
    
    No* aux = p->topo;
    while (aux->prox != NULL) { 
        aux = aux->prox;
    }


    no->dado = elemento;
    no->prox = NULL;

    aux = no;

}

void remover(Lista* l, int elemento) {

    No* aux = l->topo;
    No* anterior;

    while(aux != NULL){

        if (aux == l->topo && aux->dado == elemento) {
            l->topo = aux->prox;
            free(aux);
            aux = l->topo;
        }

        else if (aux->prox != NULL && aux->prox->dado == elemento) {

            anterior = aux;
            aux = aux->prox;
            anterior->prox = aux->prox;

            free(aux);
            
            aux = anterior;

        }else{
            aux = aux->prox;
        }
    }
}

void mostrarLista(Lista *pList){

  No *p;

  for (p = pList->topo; p != NULL; p = p->prox) {

    printf("%d ", p->dado);

  }

  printf("\n");
}

int main(){
    int dado;

    Lista *p = criarLista();

    while(scanf("%d", &dado) && dado >= 0){
    inserir(p, dado);
  } 
    mostrarLista(p);
}