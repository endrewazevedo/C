#include <stdio.h>

int main(void){
    float num1, num2, num3, num4, menor, somameio, maior;
    scanf("%f" , &num1);
    
    menor = num1;
    somameio = 0;
    maior = num1;
    
    scanf("%f" , &num2);
    
    if(num2 > maior){
        maior = num2;
    }
    else if(num2 < menor){
        menor = num2;
    }
	
    scanf("%f" , &num3);
    
    if(num3 > maior){
        maior = num3;
    }
    if(num3 < menor){
        menor = num3;
    }
    
    scanf("%f" , &num4);
    
    if(num4 > maior){
        maior = num4;
    }
    if(num4 < menor){
        menor = num4;
    }
    
    double media = num1+num2+num3+num4;
    media -= (maior+menor);
    printf("\n%.2f" ,(media)/2);
    
}