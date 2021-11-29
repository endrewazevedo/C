#include <stdio.h>
#include <stdlib.h>
#define N 9

void lerMatriz(int matriz[][N]){
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}


int verificarLinha(int matriz[][N], int x, int y){
    int celula_testada = matriz[x][y];
    for(int j = 0; j < 9; j++){
        if(matriz[x][j] == celula_testada && j != y){ //Verifica todos os elementos da linha exceto o próprio elemento
            return 0;
        }
    }
    return 1;
}

int verificarColuna(int matriz[][N], int x, int y){
    int celula_testada = matriz[x][y];
    for(int i = 0; i < 9; i++){
        if(matriz[i][y] == celula_testada  && i != x){  //Verifica todos os elementos da coluna exceto o próprio elemento
            return 0;
        }
    }
    return 1;
}

int limiteinflinhaquadrante(int x){ //Essa função define qual o limite inferior da x no quadrante
   
    if(x < 3){
        return 0;
    }
    else if(x > 2 && x < 6){
        return 3;
    }
    else if(x  > 5 && x < 9){
        return 6;
    }
}

int limiteinfcolunaquadrante(int y){ //Essa função define qual o limite inferior da coluna no quadrante
    if(y < 3){
        return 0;
    }
    if(y > 2 && y < 6){
        return 3;
    }
    if(y > 5 && y < 9){
        return 6;
    }
}

int limitesuplinhaquadrante(int x){ //Essa função define qual o limite superior da linha no quadrante
    if(x<3){
        return 3;
    }
    if(x>2 && x<6){
        return 6;
    }
    if(x>5 && x<9){
        return 9;
    }
}

int limitesupcolunaquadrante(int y){ //Essa função define qual o limite superior da coluna no quadrante
    if(y<3){
        return 3;
    }
    if(y>2 && y<6){
        return 6;
    }
    if(y>5 && y<9){
        return 9;
    }
}

int verificaQuadrante(int matriz[][N], int x, int y){
    int celula_testada = matriz[x][y];
    int inferiorl = limiteinflinhaquadrante(x);
    int inferiorc = limiteinfcolunaquadrante(y);
    int superiorl = limitesuplinhaquadrante(x);
    int superiorc = limitesupcolunaquadrante(y);

    for(int i = inferiorl; i < superiorl; i++){
        for(int j = inferiorc; j < superiorc; j++){
            if(matriz[inferiorl][inferiorc] == celula_testada && inferiorl != x && inferiorc != y){
                return 0;
            }
        }
    }
    return 1;
}

int tabuleiroCompleto(int matriz[][N]){
    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(verificarColuna(matriz, i, j) == 1){
                if(verificarLinha(matriz, i, j) == 1){
                    if(verificaQuadrante(matriz, i, j) == 1){
                        if(i == 8 && j == 8){
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}


int main(){
    int matriz[N][N];
    lerMatriz(matriz);
    if(tabuleiroCompleto(matriz) == 1){
        printf("Completou corretamente");
    }else{
        printf("Tabuleiro incorreto");
    }
}
