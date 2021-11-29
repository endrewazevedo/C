#include <stdio.h>
#include <stdlib.h>
#define N 9

void layout(){ //Essa função exibe a tela de boas-vindas
    printf(" \n Bem vindo ao Sudoku de Maycon\n\n a dificuldade do jogo depende do valor que voce digitara \n\n Por favor digite quantos valores deseja completar \n\n Bom jogo\n\n ");
}


void lerMatriz(unsigned char matriz[][N]){
    for(unsigned char i = 0; i < N; i++){
        for(unsigned char j = 0; j < N; j++){
            scanf("%hhu", &matriz[i][j]);
        }
    }
}

void imprimirMatriz(unsigned char matriz[][N]){
    unsigned char i, j;
    printf("-------------------------\n");
    for(i = 0; i < N; i++){
        printf("| ");
        for(j = 0; j < N; j++){
            if(matriz[i][j] == 0)
                printf("_ ");
            else if(matriz[i][j] < 10)
                printf("%hhu ", matriz[i][j]);
            else
            printf("%hhu ", matriz[i][j] - 9);
            if((j+1) % 3 == 0)
                printf("| ");
            
        }
        if((i+1) % 3 == 0)
                printf("\n-------------------------");
        printf("\n");
    }
}

void eliminarCelulas(unsigned char matriz[][N], unsigned char numCelulasEliminadas, unsigned seed){
    int contador = numCelulasEliminadas;
    srand(seed);
    while(contador > 0){
        unsigned char x = rand() % 9;
        unsigned char y = rand() % 9;
        if(matriz[x][y] != 0){
            matriz[x][y] = 0;
            contador--;
        }
    }
}


char verificarLinha(unsigned char matriz[][N], unsigned char x, unsigned char y){
    unsigned char celula_testada = matriz[x][y];
    for(unsigned char j = 0; j < 9; j++){
        if(matriz[x][j] == celula_testada && j != y){
            return 0;
        }
    }
    return 1;
}

char verificarColuna(unsigned char matriz[][N], unsigned char x, unsigned char y){
    unsigned char celula_testada = matriz[x][y];
    for(unsigned char i = 0; i < 9; i++){
        if(matriz[i][y] == celula_testada  && i != x){
            return 0;
        }
    }
    return 1;
}

char limiteinflinhaquadrante(unsigned char x){ //Essa função define qual o limite inferior da x no quadrante
   
    if(x < 3){
        return 0;
    }
    if(x > 2 && x < 6){
        return 3;
    }
    if(x  >5 && x < 9){
        return 6;
    }
}
char limiteinfcolunaquadrante(unsigned char y){ //Essa função define qual o limite inferior da coluna no quadrante
    if(y<3){
        return 0;
    }
    if(y>2 && y<6){
        return 3;
    }
    if(y>5 && y<9){
        return 6;
    }
}
char limitesuplinhaquadrante(unsigned char x){ //Essa função define qual o limite superior da linha no quadrante
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
char limitesupcolunaquadrante(unsigned char y){ //Essa função define qual o limite superior da coluna no quadrante
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

char verificaBloco(unsigned char matriz[][N], unsigned char x, unsigned char y){
    char celula_testada = matriz[x][y];
    unsigned char inferiorl = (unsigned char)limiteinflinhaquadrante(x);
    unsigned char inferiorc = (unsigned char)limiteinfcolunaquadrante(y);
    unsigned char superiorl = (unsigned char)limitesuplinhaquadrante(x);
    unsigned char superiorc = (unsigned char)limitesupcolunaquadrante(y);
    while(inferiorl<superiorl){
        while(inferiorc<superiorc){
            if(matriz[inferiorl][inferiorc] == celula_testada && inferiorl != x && inferiorc != y){
                return 0;
                }
                inferiorc++;
        }
        inferiorc = (unsigned char)limiteinfcolunaquadrante(y);
        inferiorl++;
    }
    return 1;

}

char jogadaInvalida(unsigned char matriz[][N], unsigned char x, unsigned char y){

    if(verificarColuna(matriz, x, y) == 1){
        if(verificarLinha(matriz, x, y) == 1){
            if(verificaBloco(matriz, x, y) == 1){
                return 1;
            }
        }
    }
    return 0;
}

char preencherCelula(unsigned char matriz[][N], unsigned char x, unsigned char y, unsigned char valor){
    if(x > 8){
        return 0;
    }
    else if(y > 8){
        return 0;
    }
    else if(valor == 0 || valor > 9){
        return 0;
    }
    else{
        matriz[x][y] = valor;
        return 1;
    }
}

char ganhouJogo(unsigned char matriz[][N]){
    for(unsigned i = 0; i < N; i++){
        for(unsigned j = 0; j < N; j++){
            if(matriz[i][j] == 0){
                return 0;
            }
        }
    }
    return 1;
}

int main(){
    unsigned char matriz[N][N], numCelulasEliminadas, x, y, numero;
    int ganhou = 0;
    unsigned seed;

    lerMatriz(matriz);
    scanf("%u", &seed);
    layout();
    scanf("%hhu", &numCelulasEliminadas);
    eliminarCelulas(matriz, numCelulasEliminadas, seed);
    imprimirMatriz(matriz);
    while(ganhouJogo(matriz) == 0){
        scanf("%hhu %hhu %hhu", &x, &y, &numero);
        printf("\n");
        if(matriz[x][y] == 0){
            preencherCelula(matriz, x, y, numero);
            if(preencherCelula(matriz, x, y, numero) == 0){
                printf("Jogada invalida\n");
            }
            else{
                preencherCelula(matriz, x, y, numero);
                if(jogadaInvalida(matriz, x, y) == 0){
                    ganhou++;   
                }
                
            }
        }
        else{
            printf("Jogada invalida\n");   
        }

        imprimirMatriz(matriz);
    }
    if(ganhou == 0){
        printf("Parabens voce ganhou\n");
    }
    else{
        printf("Voce perdeu\n");
    }
    

}
