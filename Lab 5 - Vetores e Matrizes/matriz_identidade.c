//Escreva uma função que verifique se uma matriz quadrada de dimensão NxN é uma matriz identidade.

#include<stdio.h>
#define N 3

int identidade(int n, double A[][N]){
	 // Esse laço irá verificar se a diagonal principal é formada por 1, caso não a matriz não é identidade;
	for(int i = 0; i < N; i++){
		if((A[i][i]) != 1){
			return 0;
		}
	}
	 // Esse laço irá verificar se os elementos(fora a diagonal princial) são diferentes de 0, caso for a matriz não é identidade
	for(int i = 0; i < N; i++){
    	for(int j = 0; j < N; j++){
			if(i != j){
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
	if(identidade(N, A) == 0){
		printf("A Matriz não é Identidade");
	}
	else if(identidade(N, A) == 1) {
		printf("Matriz Identidade");
	}
	return 0;
}
