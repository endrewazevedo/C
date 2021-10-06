#include <stdio.h>
#include <string.h>

void andando_tabuleiro(int linha, int coluna, int matriz[][coluna], char *jogadas, int *posicao_x, int *posicao_y, int *life, int *moedas){
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
    char jogadas[21];
    scanf("%s", jogadas);
    andando_tabuleiro(linha, coluna, matriz, jogadas, &posicao_x, &posicao_y, &life, &moedas);
    printf("posicao x: %d\n", posicao_x);
    printf("posicao y: %d\n", posicao_y);
    printf("moedas: %d\n", moedas);
    printf("life: %d\n", life);

}