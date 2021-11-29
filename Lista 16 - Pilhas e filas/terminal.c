#include<stdio.h>
#include<stdlib.h>

typedef struct No {
    int dados;
    struct No* prox;
}No;

typedef struct{
    No* prim;
}Fila;

Fila* criarFila(){
    Fila *p = (Fila*) malloc(sizeof(Fila));

    if(p == NULL){
        exit(1);
    }

    p->prim = NULL;
    return p;
}

void inserir(Fila* fila, int num) {

    No* novo = malloc(sizeof(No));

    novo->dados = num;
    novo->prox = NULL;

    if(fila->prim == NULL) {
        fila->prim = novo;
        return;
    }

    No* temp = fila->prim;

    while (temp->prox != NULL) {
        temp = temp->prox;
    }

    temp->prox = novo;

}


int totalTempo(Fila* fila, int q){

    No* temp = fila->prim;

    int tempo = 0;

    while (temp != NULL) {

        if (temp->dados > q) {
            inserir(fila, temp->dados - q);
        }

        if(temp->dados < q && temp->prox == NULL){
            tempo += temp->dados;
        }else{
            tempo += q;
        } 

        No* aux = temp;
        temp = temp->prox;
        free(aux);
        fila->prim = temp;
    }

    return tempo;
}

int main() {

    Fila *fila = criarFila();

    int q;

    scanf("%d", &q);

    int tempo;
    
    while (scanf("%d", &tempo) != EOF) {
        
        inserir(fila, tempo);

    }

    printf("%d\n", totalTempo(fila, q));

}