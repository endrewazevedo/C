#include <stdio.h>

/* Defina suas funções e structs aqui */

typedef struct No{
    struct No* prox;
    char dado;
}No;

typedef struct{
    No *topo;
}Pilha;

Pilha* pilha_cria(void){
    Pilha *p = (Pilha*) malloc(sizeof(Pilha));

    if(p == NULL){
        exit(1);
    }

    p->topo = NULL;
    return p;
}

void pilha_push(Pilha *p, char *v){
    No *no = (No*) malloc(sizeof(No));

    if(no == NULL){
        exit(1);
    }

    no->dado = v;
    no->prox = p->topo;
    p->topo = no;
}

char pilha_pop(Pilha *p){
    No *no = p->topo;
    char v;

    if(no == NULL){
        return 0;
    }
    p->topo = no->prox;
    v = no->dado;
    free(no);
    return v;
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
    No *no = p->topo;
    int altura = alturaPilha(p);
    char dado;

    while((dado = pilha_pop(p)) != 0){
        printf("%s", dado);
        --altura;
    }
}

int main(void){
	char c[20];
    Pilha* p = pilha_cria();
	scanf("%s", c);

        pilha_push(p, c);
        imprimirPilha(p);
		
	/* escreva sua lógica de empilhamento aqui */
	
	//while( !pilha_vazia(p) ){
		/* escreva sua lógica de desempilhamento aqui */
	//}
	return 0;
}