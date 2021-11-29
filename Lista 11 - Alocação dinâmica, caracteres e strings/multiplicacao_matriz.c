#include <stdio.h>
#include <stdlib.h>


int vefica_matriz(int linhaB, int colunaA){

    if(colunaA == linhaB){
        return 1;
    }
    return 0;
}

void preenche_matriz(int linha, int coluna, float** matriz){
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
}

void mult_matriz(int linhaA, int linhaB, int colunaB, int colunaA, float** matrizA, float** matrizB, float** matrizC){

    float soma = 0;

    for(int i = 0; i < linhaA; i++){
        
        for(int j = 0; j < colunaB; j++){

            soma = 0;

            for(int k = 0; k < colunaA; k++){
                
                //printf("estou mulplicando o elemento [%d][%d] de A = %f e [%d][%d] de B = %f\n", i, k, matrizA[i][k], k, j, matrizB[k][j]);

                soma += matrizA[i][k] * matrizB[k][j];
                //printf("valor da linha %d valor da coluna %d\n", i, j);
                //printf("valor da k: %d\n", k);

            }

            matrizC[i][j] = soma;
            //printf("valor da soma: %f\n", soma);
            
        }
    } 
}


int main(){
    int linha, coluna, n_casos = 1;
    int linhaB, colunaB;

    float** matrizA;
    float** matrizB;

    while(scanf("%d%d", &linha, &coluna) && (linha != 0 || coluna != 0)){

        matrizA = malloc(linha * sizeof (float*));

        for(int i = 0; i < linha; i++){
            matrizA[i] = (float*) malloc(coluna * sizeof(float));
        }
        preenche_matriz(linha, coluna, matrizA);

        scanf("%d%d", &linhaB, &colunaB);

        matrizB = malloc(linhaB * sizeof (float*));

        for(int i = 0; i < linhaB; i++){
            matrizB[i] = (float*) malloc(colunaB * sizeof(float));
        }

        preenche_matriz(linhaB, colunaB, matrizB);

        float** matrizC;

        matrizC = malloc(linha * sizeof (float*));

        for(int i = 0; i < linha; i++){
            matrizC[i] = (float*) malloc(colunaB * sizeof(float));
        }

        mult_matriz(linha, linhaB, colunaB, coluna, matrizA, matrizB, matrizC);


        printf("Caso #%d\n", n_casos);

        n_casos++;

        if(vefica_matriz(linhaB, coluna) == 1){

            for(int i = 0; i < linha; i++){
                for(int j = 0; j < colunaB; j++){
                    printf("%.2f ", matrizC[i][j]); 
                }
                printf("\n");
            }

        }
        
        free(matrizA);
        free(matrizB);
        free(matrizC);
    }
}