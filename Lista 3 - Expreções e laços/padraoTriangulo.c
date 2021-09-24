//Um bom treino de iteração é escrever programas que desenham padrões. Neste exercício você fará o padrão do triângulo.
//escreva um programa que lê um número inteiro e desenhe um triangulo.

#include <stdio.h>

int main(void){
	int n;
	scanf("%d", &n);
	for(int i = 1; i < n+1; i++){
        for(int j = 0; j < n; j++){
            if(j < i){
			printf("*");
		    }
		    else{
			printf(".");
		    }
        }
        printf("\n");
	}
}