#include <stdio.h>
#include <math.h>

void divisores(int numero){
    int soma = 0;
    for(int i = 1; i < numero; i++){
        if(numero % i == 0){
            printf("%d\n", i);
            soma += i;
        }
    }
    if(soma == numero){
        printf("PERFEITO");
    }else{
        printf("NAO PERFEITO");
    }
}

int main(){
    int numero;
    scanf("%d", &numero);
    divisores(numero);
}