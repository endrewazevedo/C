#include <stdio.h>

int fibonacci (int i){
    int pnultimo = 0, ultimo = 1, prox;
	
   if(i == 0){ return 0;}
	
	if(i == 1){
		return 1;
    }
	else{
		for(int j = 1; j < i; j++){
            if(j == 1){
                pnultimo = 1;
                ultimo = 1;
                prox = 1;
            }
			else{
             prox = pnultimo+ultimo;
			    pnultimo = ultimo;
			    ultimo = prox;
            }
		}
		return prox;
    }
}

int main(void) {
    int n;
    //printf("quantidade de termos da serie: ");
    scanf("%d",&n);
    printf("%d",fibonacci(n));
}