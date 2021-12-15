#include <stdio.h>
#include <string.h>

typedef struct No{
    struct No* prox;
    int vida;
    int moeda;
    int posicao_x;
    int posicao_y
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

void inserir(Lista *p, int vida, int moeda, int posicao_x, int posicao_y){
    No *no = (No*) malloc(sizeof(No));

    if(no == NULL){
        exit(1);
    }

    no->vida = vida;
    no->moeda = moeda;
    no->posicao_x = posicao_x;
    no->posicao_y = posicao_y;
    no->prox = p->topo;
    p->topo = no;
}

void desempilhar(Lista *p, int *life, int *moedas, int *posicao_x, int *posicao_y){
    No *no = p->topo;

    if(no == NULL){
        return 0;
    }

    p->topo = no->prox;
    *life = no->vida;
    *moedas = no->moeda;
    *posicao_x = no->posicao_x;
    *posicao_y = no->posicao_y;

    free(no);
}


void andando_tabuleiro(int linha, int coluna, int matriz[][coluna], char *jogadas, int *posicao_x, int *posicao_y, int *life, int *moedas){

    int *des_vida = &life;
    int *des_moedas = &moedas;
    int *des_posicao_x = &posicao_x;
    int *des_posicao_y = &posicao_y;

    Lista *p = criarLista();

    for(int i = 0; i < strlen(jogadas); i++){
        if(*(jogadas + i) == 'D'){
            *posicao_x = *posicao_x + 1;
            if((matriz[*posicao_y][*posicao_x]) == 22){
                *life = *life - 5;
            }
            if((matriz[*posicao_y][*posicao_x]) == 11){
                *moedas = *moedas + 1;
                matriz[*posicao_y][*posicao_x] = 0;
            }
            inserir(p, *life, *moedas, *posicao_x, *posicao_y);
            //printf("vida: %d moeda: %d \n", p->topo->vida, p->topo->moeda);
        }

        if(*(jogadas + i) == 'A'){
            *posicao_x = *posicao_x - 1;
            if((matriz[*posicao_y][*posicao_x]) == 22){
                *life = *life - 5;
            }
            if((matriz[*posicao_y][*posicao_x]) == 11){
                *moedas = *moedas + 1;
                matriz[*posicao_y][*posicao_x] = 0;
            }
            inserir(p, *life, *moedas, *posicao_x, *posicao_y);
            //printf("vida: %d moeda: %d \n", p->topo->vida, p->topo->moeda);
        }

        if(*(jogadas + i) == 'S'){
            *posicao_y = *posicao_y + 1;
            if((matriz[*posicao_y][*posicao_x]) == 22){
                *life = *life - 5;
            }
            if((matriz[*posicao_y][*posicao_x]) == 11){
                *moedas = *moedas + 1;
                matriz[*posicao_y][*posicao_x] = 0;

            }
            inserir(p, *life, *moedas, *posicao_x, *posicao_y);
        }

        if(*(jogadas + i) == 'W'){
            *posicao_y = *posicao_y - 1;
            if((matriz[*posicao_y][*posicao_x]) == 22){
                *life = *life - 5;
            }
            if((matriz[*posicao_y][*posicao_x]) == 11){
                *moedas = *moedas + 1;
                matriz[*posicao_y][*posicao_x] = 0;
            }
            inserir(p, *life, *moedas, *posicao_x, *posicao_y);
        }

        if(*(jogadas + i) == 'Z'){
            if(*moedas != p->topo->moeda){
                matriz[*posicao_y][*posicao_x] = 11;
            }
            desempilhar(p, *des_vida, *des_moedas, *des_posicao_x, *des_posicao_y);
        }

    }
}



int main(){
    int linha, coluna, posicao_x = 0, posicao_y = 0, life = 100, moedas = 0;
    scanf("%d %d", &linha, &coluna);
    int matriz[linha][coluna];

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    char jogadas[201];
    scanf("%s", jogadas);
    andando_tabuleiro(linha, coluna, matriz, jogadas, &posicao_x, &posicao_y, &life, &moedas);
    printf("posicao x: %d\n", posicao_x);
    printf("posicao y: %d\n", posicao_y);
    printf("moedas: %d\n", moedas);
    printf("life: %d\n", life);

}