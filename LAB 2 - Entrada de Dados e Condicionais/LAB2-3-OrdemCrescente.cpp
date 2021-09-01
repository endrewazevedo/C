//Ordem Crescente.

#include <stdio.h>

int main(void){
    int num1, num2, num3, menor, meio, maior;
    scanf("%d%d%d" , &num1, &num2, &num3);

    if(num1 > num2 && num1 > num3 ){
        maior = num1;
    }
    else if(num2 > num1 && num2 > num3){
        maior = num2;
    }
    else{ maior = num3;}

    if(num1 < num2 && num1 < num3 ){
        menor = num1;
    }
    else if(num2 < num1 && num2 < num3){
        menor = num2;
    }
    else{ menor = num3;}

    if(num1 > menor && num1 < maior ){
        meio = num1;
    }
    else if(num2 > menor && num2 < maior){
        meio = num2;
    }
    else{ meio = num3;}

    printf("%d %d %d" ,menor, meio, maior);
    
}