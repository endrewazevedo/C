#include <stdio.h>


int crescente(int numero1, int numero2){

    scanf("%d", &numero1);

    int verificador = 1;

    while(scanf("%d", &numero2) && numero2 != -1){

        if(numero2 < numero1){
            verificador = 0;
        }
        
        else if(numero2 > numero1){
            numero1 = numero2;
        }

        else if(numero1 == numero2){
            verificador = 0;
        }
        
    }

    return verificador;

}

int main(){

    int num1;
    int num2;

    int resultado;

    resultado = crescente(num1, num2);

    if(resultado == 1){
        printf("SIM");
    }
    else if(resultado == 0){
        printf("NAO");
    }

}