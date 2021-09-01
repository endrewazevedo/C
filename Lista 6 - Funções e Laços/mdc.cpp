#include <stdio.h>

int mdc(int num1, int num2){
    int maior, aux;
    if(num1 == num2){
        return num1;
    }
    else if(num1 > num2){
        maior = num1;
    }
    else{
        maior = num2;
        num2 = num1;
    }
    while(maior != num2){
        maior -= num2;
        if(num2 > maior){
            aux = maior;
            maior = num2;
            num2 = aux;
        }
    }
    return maior;
}

int main(){
    int numerador, denominador;
    while(scanf("%d%d", &numerador, &denominador), numerador && denominador){
        printf("%d\n",  mdc(numerador, denominador));
    }
}

