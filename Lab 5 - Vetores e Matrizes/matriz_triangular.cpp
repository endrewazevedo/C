//Escreva uma função que verifique se uma matriz quadrada de dimensão N x N, é uma matriz triangular inferior.

#include <stdio.h>

#define N 3

int triangular_inferior(double A[][N]){
    for(int i = 0; i < N; i++){ //Verifica todos os elementos acima da diagonal principal, caso o elemento seja diferente de 0 retorna 0, se não, retorna 1;
        for(int j = 1; j < N; j++){
            if(j > i){
                if(A[i][j] != 0){
                return 0;
                }
            }
        }
    }
    return 1;
}

int main(){
	double A[N][N];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            scanf("%lf", &A[i][j]);
        }
    }
    printf("%d", triangular_inferior(A));
	return 0;
}