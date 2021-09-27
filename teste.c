#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1;

    scanf("%d", &num1);

    int i;

    int numAtual;

    int numAnterior = num1;

    int maior = num1;

    int menorPar = 98;

    int menorDif = 99;

    int difAtual;

    int result;

    for(i = 0; i < 4; i++){
        scanf("%d", &numAtual);
     
        if(numAtual > maior){
            maior = numAtual;
        }

        if(num1 % 2 == 0 && num1 < menorPar){
            menorPar = num1;
        }
        else if(numAtual % 2 == 0 && numAtual < menorPar){
            menorPar = numAtual;
        }

        difAtual = (abs) (numAtual - numAnterior);

        if(difAtual < menorDif){
            menorDif = difAtual;
            numAnterior = numAtual;
        }
    }

    
    
    printf("%d %d %d", maior, menorPar, menorDif);
}