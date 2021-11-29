#include <stdio.h>
#include <stdlib.h>

int verifica_identidade(int n, int** A){// Esse laço irá verificar se a diagonal principal é formada por 1, caso não a matriz não é identidade;
	for(int i = 0; i < n; i++){
		if((A[i][i]) != 1){
			return 0;
		}
	}//Esse laço irá verificar se os elementos(fora a diagonal princial) são diferentes de 0, caso for a matriz não é identidade
	for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
			if(i != j){
				if(A[i][j] != 0){
					return 0;
				}
			}
		}
    }
    return 1; 
}


void preenche_matriz(int dimensao, int** matriz){
    for(int i = 0; i < dimensao; i++){
        for(int j = 0; j < dimensao; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mult_matriz(int dimensao, int** matrizA, int** matrizB, int** matrizC){

    int soma = 0;

    for(int i = 0; i < dimensao; i++){
        
        for(int j = 0; j < dimensao; j++){

            soma = 0;

            for(int k = 0; k < dimensao; k++){
                
                soma += matrizA[i][k] * matrizB[k][j];

            }

            matrizC[i][j] = soma;
            
        }
    } 
}


int main(){

    int dimensao;

    int** matrizA;
    int** matrizB;
    int** matrizC;

    while(scanf("%d", &dimensao) && dimensao){

        matrizA = malloc(dimensao * sizeof (int*));

        for(int i = 0; i < dimensao; i++){

            matrizA[i] = (int*) malloc(dimensao * sizeof(int));

        }

        preenche_matriz(dimensao, matrizA);

        matrizB = malloc(dimensao * sizeof (int*));

        for(int i = 0; i < dimensao; i++){

            matrizB[i] = (int*) malloc(dimensao * sizeof(int));

        }

        preenche_matriz(dimensao, matrizB);

        matrizC = malloc(dimensao * sizeof (int*));

        for(int i = 0; i < dimensao; i++){

            matrizC[i] = (int*) malloc(dimensao * sizeof(int));

        }

        mult_matriz(dimensao, matrizA, matrizB, matrizC);

        if(verifica_identidade(dimensao, matrizC) == 1){
            printf("sim\n");
        }else{
            printf("nao\n");
        }
        
        free(matrizA);
        free(matrizB);
        free(matrizC);

    }
}