#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    struct No* prox;
    int dado;
}No;

typedef struct{
    No *topo;
}Pilha;

Pilha* criarPilha(){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    if(p == NULL){
        exit(1);
    }

    p->topo = NULL;
    return p;
}

void empilhar(Pilha *p, int dado){
    No *no = (No*) malloc(sizeof(No));

    if(no == NULL){
        exit(1);
    }

    no->dado = dado;
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

void apagarPilha(Pilha *p){
    No *no = p->topo;
    No *no1;

    while(no){
        no1 = no->prox;
        free(no);
        no = no1;
    }

    free(p);
}

int alturaPilha(Pilha *p){
    No *no = p->topo;
    int altura = 0;

    while(no){
        altura++;
        no = no->prox;
    }

    return altura;
}

void imprimirPilha(Pilha *p){
    int altura = alturaPilha(p);
    int dado;

    while((dado = desempilhar(p)) != 0){
        if(altura % 2 == 1){
            while(dado-- > 0){
                printf("+");
            }
        }
        else{
            while(dado-- > 0){
                printf("-");
            }
        }
        printf("\n");
        --altura;
    }
}

int main(){
	Pilha *p = criarPilha();
	int operacao, dado;
	
	while(scanf("%d", &dado) && dado != 0){
		empilhar(p, dado);
	}

    imprimirPilha(p);
    apagarPilha(p);
}