#include <stdio.h>

void simplifica_fracao(int *numerador, int *denominador){
	int valor_orig1 = *numerador;
    int valor_orig2 = *denominador;
    int num1 = *numerador;
    int num2 = *denominador;
    int aux, resto;

    if(num2 > num1){
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    do{
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    }while(resto != 0);

    *numerador = valor_orig1/num1;
    *denominador = valor_orig2/num1;
}

int main(){
    int numerador, denominador;
    scanf("%d%d", &numerador, &denominador);
    simplifica_fracao(&numerador, &denominador);
    printf("%d/%d\n", numerador, denominador);

}