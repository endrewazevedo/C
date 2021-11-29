#include <stdio.h>
#include <stdlib.h>

int calcula_mdc(int num1, int num2){
    int maior, aux;
    num1 = abs(num1);
    num2 = abs(num2);

    if(num1 == 0 || num2 == 0){
        if(num1 != 0){
            return num1;
        }else{
            return num2;
        }
    }

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
    int *num1;
    int *num2;

    num1 = (int*) malloc(sizeof(int));
    num2 = (int*) malloc(sizeof(int));

    while(scanf("%d%d", num1, num2) && *num1 != 1 || *num2 != 1){
        printf("%d\n", calcula_mdc(*num1, *num2));
    }
}