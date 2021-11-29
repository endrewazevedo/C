    #include<stdio.h>
    #include<stdlib.h>

    typedef struct No {
        int dados;
        struct No* prox;
    }No;

    typedef struct{
        No* prim;
    }Lista;

    Lista* criarLista(){
        Lista *p = (Lista*) malloc(sizeof(Lista));

        if(p == NULL){
            exit(1);
        }

        p->prim = NULL;
        return p;
    }

    void inserir(Lista* l, int num) {

        No* novo = malloc(sizeof(No));
        No* aux = l->prim;

        novo->dados = num;

        if (l->prim == NULL) {
            novo->prox = novo;
            l->prim = novo;
            return;
        }

        while (aux->prox != l->prim) {
            aux = aux->prox;
        }

        aux->prox = novo;
        novo->prox = l->prim;

    }

    void mostrarLista(Lista *pLista){

        No *p;

        for (p = pLista->prim; p != NULL; p = p->prox) {

            printf("%d ", p->dados);

        }

        printf("\n");
    }

    void remover(Lista* lista) {

        if (lista->prim == NULL) return;

        No* ultimo = lista->prim;
        while (ultimo->prox != lista->prim) {
            ultimo = ultimo->prox;
        }

        No* temp = lista->prim;

        if (ultimo == lista->prim) {
            lista->prim = NULL;
        }
        else {
            lista->prim = lista->prim->prox;
            ultimo->prox = lista->prim;
        }

        free(temp);

    }

    No* procuraMenor(Lista* lista) {

        if (lista == NULL) return NULL;

        No* menor = lista->prim;
        No* aux = lista->prim;

        do {
            if (aux->dados < menor->dados) {
                menor = aux;
            }
            aux = aux->prox;
        } while (aux != lista->prim);

        return menor;

    }

    void zerarLista(Lista* lista) {

        while (lista->prim != NULL) {

            No* menor = procuraMenor(lista);

            lista->prim = menor;

            No* atual = lista->prim;

            int cont = 1;
            while (atual->prox != lista->prim && atual->dados <= atual->prox->dados) {

                cont++;
                atual = atual->prox;

            }

            atual = lista->prim;
            for (int i = 0; i < cont; i++){
                printf("%d ", atual->dados);
                remover(lista);
                atual = lista->prim;
            }

        }

    }

    int main() {

        Lista *lista = criarLista();

        int x;
        while (scanf("%d", &x), x != -1) {

            inserir(lista, x);

        }

        zerarLista(lista);

    }