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
    int linhas, colunas;
    scanf("%d%d", &linhas, &colunas);
    int **matrizA = ler_matriz(linhas, colunas);
    int **matrizB = ler_matriz(linhas, colunas);
    somar_matrizes(matrizA, matrizB, linhas, colunas);
    imprimir_matriz(matrizA, linhas, colunas);
    liberar_matriz(matrizA, linhas);

}

