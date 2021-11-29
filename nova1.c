#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct No{
    struct No* prox;
    char dado;
}No;

typedef struct{
    No* topo;
}Pilha;

Pilha* criarPilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    if(p == NULL){
        exit(1);
    }

    p->topo = NULL;
    return p;
}


void inserir(Pilha *p, int elemento){
    No *no = (No*) malloc(sizeof(No));

    if(no == NULL){
        exit(1);
    }

    no->dado = elemento;
    no->prox = p->topo;
    p->topo = no;
}

int desempilhar(Pilha *p){
    No *no = p->topo;
    int dado;

    if(no == NULL){
        return 0;
    }
    p->topo = no->prox;
    dado = no->dado;
    free(no);
    return dado;
}

void mostrarPilha(Pilha *pList){

	No *p;

	for (p = pList->topo; p != NULL; p = p->prox) {

		printf("%c", p->dado);

	}

	printf("\n");
}


int main(void){
	char c[20];
    Pilha* p = criarPilha();
	scanf("%s", c);
		
	/* escreva sua lógica de empilhamento aqui */
    for(int i = 0; i < strlen(c); i++){
        inserir(p, c[i]);
    }
	
        mostrarPilha(p);

	return 0;
}