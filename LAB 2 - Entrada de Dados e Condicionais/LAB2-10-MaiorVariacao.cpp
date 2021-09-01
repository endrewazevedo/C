#include <stdio.h>
#include <stdlib.h>

int main(){
float num1, num2, num3, menor, maior;
    scanf("%f" , &num1);
    
    menor = num1;
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
    else if(num3 < menor){
        menor = num3;
    }
	printf("%d", abs(maior)-abs(menor));
	
}