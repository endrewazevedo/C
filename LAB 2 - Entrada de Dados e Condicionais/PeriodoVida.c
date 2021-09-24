#include <stdio.h>

int main(void){
	float idade;
	scanf("%f" , &idade);
	
	if(idade < 10){
		printf("infancia");
	}
	else if(idade < 15){
		printf("pre-adolescencia");
	}
	else if(idade < 19){
		printf("adolescencia");
	}
	else if(idade < 24){
		printf("juventude");
	}
}