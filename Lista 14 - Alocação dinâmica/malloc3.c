#include <stdio.h>
#include <stdlib.h>

int **ler_matriz(int linhas, int colunas){
    int **matriz = malloc(linhas * (sizeof(int*)));

    for(int i = 0; i < linhas; i++){
        matriz[i] = (int*) malloc(colunas * sizeof(int*));
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    return matriz;
}

void somar_matrizes(int **mat1, int **mat2, int linhas, int colunas){

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            mat1[i][j] = mat1[i][j] + mat2[i][j]; 
        }
    }
}

void imprimir_matriz(int **mat, int linhas, int colunas){

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
           printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

void liberar_matriz(int **mat, int linhas){

    free(mat);
    for(int i = 0; i < linhas; i++){
        free(mat[i]);
    }
}

int main(void){
    int ***matrizes;
    int num_matrizes, mat1, mat2;

    scanf("%d", &num_matrizes);

    matrizes = malloc(num_matrizes * sizeof(int***));
    int linhas, colunas;

    scanf("%d%d", &linhas, &colunas);

    for(int i = 0; i < num_matrizes; i ++){
        matrizes[i] = ler_matriz(linhas, colunas);
    }

    while(scanf("%d%d", &mat1, &mat2) && mat1 != 0 || mat2 != 0){
        somar_matrizes(matrizes[mat1], matrizes[mat2], linhas, colunas);
    }

    imprimir_matriz(matrizes[0], linhas, colunas);
    liberar_matriz(matrizes[0], linhas);

}

