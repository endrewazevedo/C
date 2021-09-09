//Escreva uma função que verifique se uma matriz quadrada de dimensão NxN é uma matriz identidade.

#include<stdio.h>
#define N 10


int identidade(int n, double m[][N]){
	double soma_linha = 0;
	for(int i = 0; i < n; i++){ // Esse laço irá verificar se a diagonal principal é formada por 1, caso não a matriz não é identidade;
		if((m[i][i]) != 1){
			return 0;
		}
	}
	for(int i = 0; i < n; i++){ // Esse laço ira somar todas os elementos da matriz;
    	for(int j = 0; j < n; j++){
			soma_linha += m[i][j];
		}
    }
	if(soma_linha != n){ // caso a soma seja diferente do n, a matriz não é identidade
	    return 0;
	}
    else{
        return 1; 
    }
}

int main(){
    int n, flag;
   	double m[N][N];
	scanf("%d", &n);
    for(int i = 0; i < n; i++){
    	for(int j = 0; j < n; j++){
        	scanf("%lf", &m[i][j]);
        }
    }
	if(identidade(n, m) == 0){
		printf("A Matriz não é Identidade");
	}
	else {
		printf("Matriz Identidade");
	}
	return 0;
}
