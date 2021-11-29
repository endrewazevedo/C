#include <stdio.h>
#include <stdlib.h>

typedef struct matriz {
  int linhas, colunas;
  int **valores;
} Matrizes;

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

    for(int i = 0; i < linhas; i++){
        free(mat[i]);
    }
    free(mat);
}


int main(void){
    int q_matriz, linha, coluna, mat1, mat2;
    scanf("%d", &q_matriz);
    int menor_linha, menor_coluna;

  Matrizes* matriz;

    matriz = (Matrizes*) malloc(q_matriz * sizeof(Matrizes));

    for(int i = 0; i < q_matriz; i++){
        scanf("%d%d", &linha, &coluna);
        matriz[i].linhas = linha;
        matriz[i].colunas = coluna;
        matriz[i].valores = ler_matriz(linha, coluna);
    }
    

    while(scanf("%d %d", &mat1, &mat2) && (mat1 != 0 || mat2 != 0)){
        
        if(matriz[mat1].linhas < matriz[mat2].linhas){
            menor_linha = matriz[mat1].linhas;
        }else{
            menor_linha = matriz[mat2].linhas;
        }
        
        if(matriz[mat1].colunas <= matriz[mat2].colunas){
            menor_coluna = matriz[mat1].colunas;
        }else{
            menor_coluna = matriz[mat2].colunas;
        }


        somar_matrizes(matriz[mat1].valores, matriz[mat2].valores, menor_linha, menor_coluna);

        

    }
  imprimir_matriz(matriz[0].valores, matriz[0].linhas, matriz[0].colunas);
  // liberar_matriz(matriz[0].valores, matriz[0].linhas);


}