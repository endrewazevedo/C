#include <stdio.h>
#include <stdlib.h>


typedef struct fracao{
    int numerador;
    int denominador;
} Fracao;


int calcula_mdc(int num1, int num2){
    int maior, aux;
    num1 = abs(num1);
    num2 = abs(num2);

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


void simplificar_fracao(Fracao *fracao){
    if(fracao->numerador < 0 && fracao->denominador < 0){

        fracao->numerador = abs(fracao->numerador);
        fracao->denominador = abs(fracao->denominador);

    }
    else if(fracao->denominador < 0){
        fracao->numerador = -1*(fracao->numerador);
        fracao->denominador = abs(fracao->denominador);
    }
    else if(fracao->numerador == 0){
        return;
    }
    int mdc = calcula_mdc(fracao->numerador, fracao->denominador);
    //printf("mdc %d\n", mdc);
    fracao->numerador = (fracao->numerador)/mdc;
    fracao->denominador = (fracao->denominador)/mdc;

}

/* void simplificar_fracao(Fracao *fracao){
    int mdc, aux;

    if(fracao->numerador == fracao->denominador){
        mdc = fracao->numerador;
    }
    else if(fracao->numerador > fracao->denominador){
        mdc = fracao->numerador;
    }else{
        mdc = fracao->denominador; 
        fracao->denominador = fracao->numerador;
    }

    while(mdc != fracao->denominador){
        mdc -= fracao->denominador;

        if(fracao->denominador > mdc){
            aux = mdc;
            mdc = fracao->denominador;
            fracao->denominador = aux;
        }
    }

    fracao->numerador = ((fracao->numerador)/mdc);
    fracao->denominador = ((fracao->denominador)/mdc);
} */

void soma_fracao(int num1, int num2, int den1, int den2, Fracao* fracao){

    if(den1 != den2){
        num1 *= den2;
        num2 *= den1;
        den1 *= den2;
    }

    int soma_numerador = num1+num2;
    int soma_denominador = den1;
    fracao->numerador = soma_numerador;
    fracao->denominador = soma_denominador;
}

void subtrair_fracao(int num1, int num2, int den1, int den2, Fracao* fracao){

    if(den1 != den2){
        num1 *= den2;
        num2 *= den1;
        den1 *= den2;
    }

    int sub_numerador = num1-num2;
    int sub_denominador = den1;
    fracao->numerador = sub_numerador;
    fracao->denominador = sub_denominador;

}

void multiplicar_fracao(int num1, int num2, int den1, int den2, Fracao* fracao){

    int mult_numerador = num1*num2;
    int mult_denominador = den1*den2;
    fracao->numerador = mult_numerador;
    fracao->denominador = mult_denominador;

}

void dividir_fracao(int num1, int num2, int den1, int den2, Fracao* fracao){

    int mult_numerador = num1*den2;
    int mult_denominador = den1*num2;
    fracao->numerador = mult_numerador;
    fracao->denominador = mult_denominador;

}


int main(){
    Fracao fracao;
    int operacao;
    int num1, num2, den1, den2;
    while(scanf("%d", &operacao) && operacao){
        scanf("%d%d%d%d", &num1, &den1, &num2, &den2);
        switch(operacao){
            case 1: soma_fracao(num1, num2, den1, den2, &fracao); break;
            case 2: subtrair_fracao(num1, num2, den1, den2, &fracao); break;
            case 3: multiplicar_fracao(num1, num2, den1, den2, &fracao); break;
            case 4: dividir_fracao(num1, num2, den1, den2, &fracao); break;
        }
        simplificar_fracao(&fracao);
        printf("%d ", fracao.numerador);

        if(fracao.numerador != 0 && fracao.denominador != 1){
            printf("%d", fracao.denominador);
        }
        printf("\n");
        
    }

}


