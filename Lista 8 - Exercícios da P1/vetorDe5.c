#include <stdio.h>
#include <stdlib.h>

int main(){
    int menor = 100, menor_impar = 99, menor_diferenca = 200, numero, anterior;
    for(int i = 0; i < 5; i++){
        scanf("%d", &numero);
        if(i == 0){
            anterior = numero;
        }
        if(numero < menor){
            menor = numero;
        }
        if(numero % 2 != 0){
            if(numero < menor_impar){
                menor_impar = numero;
            }
        }
        if(i > 0){
            if(abs(numero - anterior) < menor_diferenca){
                menor_diferenca = abs(numero - anterior);
            }
            anterior = numero;
        }
    }
    printf("%d %d %d", menor, menor_impar, menor_diferenca);
}