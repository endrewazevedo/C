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

/* void mostrarLista(Lista *pList){

	No *p;

	for (p = pList->topo; p != NULL; p = p->prox) {

		printf("%d ", p->dado);

	}

	printf("\n");
} */

int triplas(Lista* l) {

    No* teste = l->topo;
    No* anterior = teste;

    int cont = 0;

    while(teste != NULL) {

        teste = teste->prox;
        if (teste != NULL && teste->dado == anterior->dado){
            cont++;
        }else{
            cont = 0;
        }

        if(cont == 2){
            printf("tripla\n");
            return 0;
        }
        anterior = teste;
    }
    printf("nada\n");
}

int main(){

	int operacao, dado;
    
    while(scanf("%d", &dado) && dado != -1){
        Lista *p = criarLista();

        while(scanf("%d", &dado) && dado != 0){
		    inserir(p, dado);
	    }

        //mostrarLista(p);

        scanf("%d", &operacao);

        remover(p, operacao);

        triplas(p);

        //mostrarLista(p);

    }
	
}

