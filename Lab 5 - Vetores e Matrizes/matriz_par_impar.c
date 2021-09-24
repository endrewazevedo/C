//Escreva uma função, que recebe uma matriz, seu número de linhas e colunas e imprima 1 se o número na posisão for par e 0 caso for ímpar.

#include <stdio.h>

#define N 10

void imprimirParImpar(int M[][N], int numlinhas, int numColunas){
    for(int i = 0; i < numlinhas; i++){
        for(int j = 0; j < numColunas; j++){
            if(M[i][j] % 2 == 0){
                M[i][j] = 1;
            }
            else{
                M[i][j] = 0;
            }
        }
    }
        for(int i = 0; i < numlinhas; i++){
            for(int j = 0; j < numColunas; j++){
                printf("%d " ,M[i][j]);
            }
            printf("\n");
        }
}

void lerMatriz(int M[][N], int numlinhas, int numColunas){
    int i, j;

    for(i = 0; i < numlinhas; i++){
        for(j = 0; j < numColunas; j++){
            scanf("%d", &M[i][j]);
        }
    }
}

int main(){
    int l, c;
    int m[N][N];

    scanf("%d %d", &l, &c);
    lerMatriz(m, l, c);
    
    imprimirParImpar(m, l, c);

    return 0;
}