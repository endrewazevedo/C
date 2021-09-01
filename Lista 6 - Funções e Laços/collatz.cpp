#include <stdio.h>

int sequencia(int numero){
    if(numero == 1){
        return 0;
    }
    if(numero % 2 == 0){
        return (numero/2);
    }
    else{
        return (numero*3)+1;
    }
}

int main(){
    int numero;
    scanf("%d", &numero);
    printf("%d", numero);
    while(sequencia(numero) != 0){
        printf(" -> %d", sequencia(numero));
        numero = sequencia(numero);
    }
}