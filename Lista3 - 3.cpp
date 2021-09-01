#include <stdio.h>

int main(void){
	int lado1, lado2;
    int flag = 0;
	do{
		scanf("%d%d", &lado1, &lado2);
        if(lado1 == 0 || lado2 == 0 ){
            flag++;
        }
		else{
            printf("%d %d" , ((lado1+lado2)*2), (lado1*lado2));
            printf("\n");
        }
        
	}while(flag < 1);
}