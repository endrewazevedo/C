#include <stdio.h>
#include <stdlib.h>

float* converte_a (int m, int n, float** mat){
    float *matriz_vetor;
    matriz_vetor = malloc (m * n * sizeof(float));
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			*(matriz_vetor + (i*n) + j) = mat[i][j]; 
		}
	}
    return matriz_vetor;
}

int main(){
    float **mat;

    int linha, coluna;

    scanf("%d%d", &linha, &coluna);

    mat = malloc (linha * sizeof (float*));

    for (int i=0; i < linha; i++){
        mat[i] = (float*) malloc(coluna * sizeof(float)) ;
    }

    for(int i = 0; i<linha; i++){
        for(int j = 0; j < coluna; j++){
            scanf("%f", &mat[i][j]); 
        }
    }
    float *matriz_convertida = converte_a(linha, coluna, mat);
    for(int i = 0; i< linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%.2f ", matriz_convertida[(i*coluna) + j]); 
        }
        printf("\n");
    } 
}